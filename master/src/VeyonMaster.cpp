/*
 * VeyonMaster.cpp - management of application-global instances
 *
 * Copyright (c) 2017-2019 Tobias Junghans <tobydox@veyon.io>
 *
 * This file is part of Veyon - http://veyon.io
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */

#include "VeyonMaster.h"
#include "BuiltinFeatures.h"
#include "ComputerControlListModel.h"
#include "ComputerSortFilterProxyModel.h"
#include "FeatureManager.h"
#include "VncConnection.h"
#include "VeyonConfiguration.h"
#include "VeyonConnection.h"
#include "MainWindow.h"
#include "ComputerManager.h"
#include "MonitoringMode.h"
#include "UserConfig.h"
#include "PluginManager.h"


VeyonMaster::VeyonMaster( QObject* parent ) :
	QObject( parent ),
	m_builtinFeatures( new BuiltinFeatures() ),
	m_featureManager( new FeatureManager() ),
	m_features( featureList() ),
	m_userConfig( new UserConfig( Configuration::Store::JsonFile ) ),
	m_computerManager( new ComputerManager( *m_userConfig, this ) ),
	m_computerControlListModel( new ComputerControlListModel( this, this ) ),
	m_computerSortFilterProxyModel( new ComputerSortFilterProxyModel( this ) ),
	m_mainWindow( nullptr ),
	m_currentMode( m_builtinFeatures->monitoringMode().feature().uid() )
{
	if( VeyonCore::config().enforceSelectedModeForClients() )
	{
		connect( m_computerControlListModel, &ComputerControlListModel::activeFeaturesChanged,
				 this, &VeyonMaster::enforceDesignatedMode );
	}

	connect( &VeyonCore::localComputerControlInterface(), &ComputerControlInterface::featureMessageReceived,
			 this, [=]( const FeatureMessage& featureMessage, ComputerControlInterface::Pointer computerControlInterface ) {
			 m_featureManager->handleFeatureMessage( *this, featureMessage, computerControlInterface );
	} );

	VeyonCore::localComputerControlInterface().start( QSize(), m_builtinFeatures );

	// attach computer list model to proxy model
	m_computerSortFilterProxyModel->setSourceModel( m_computerControlListModel );
	m_computerSortFilterProxyModel->setSortRole( Qt::InitialSortOrderRole );
	m_computerSortFilterProxyModel->setStateRole( ComputerControlListModel::StateRole );
	m_computerSortFilterProxyModel->sort( 0 );

	m_mainWindow = new MainWindow( *this );
}



VeyonMaster::~VeyonMaster()
{
	stopAllModeFeatures( m_computerControlListModel->computerControlInterfaces() );

	delete m_mainWindow;

	delete m_computerManager;

	m_userConfig->flushStore();
	delete m_userConfig;

	delete m_featureManager;

	delete m_builtinFeatures;
}



FeatureList VeyonMaster::subFeatures( Feature::Uid parentFeatureUid ) const
{
	FeatureList features;

	const auto disabledFeatures = VeyonCore::config().disabledFeatures();
	const auto pluginUids = VeyonCore::pluginManager().pluginUids();

	for( const auto& pluginUid : pluginUids )
	{
		for( const auto& feature : m_featureManager->features( pluginUid ) )
		{
			if( feature.testFlag( Feature::Master ) &&
					feature.parentUid() == parentFeatureUid &&
					disabledFeatures.contains( parentFeatureUid.toString() ) == false )
			{
				features += feature;
			}
		}
	}

	return features;
}



QWidget* VeyonMaster::mainWindow()
{
	return m_mainWindow;
}



ComputerControlInterfaceList VeyonMaster::filteredComputerControlInterfaces()
{
	ComputerControlInterfaceList computerControlInterfaces;

	for( int i = 0; i < m_computerSortFilterProxyModel->rowCount(); ++i )
	{
		const auto index = m_computerSortFilterProxyModel->index( i, 0 );
		const auto sourceIndex = m_computerSortFilterProxyModel->mapToSource( index );
		computerControlInterfaces.append( m_computerControlListModel->computerControlInterface( sourceIndex ) );
	}

	return computerControlInterfaces;
}



void VeyonMaster::runFeature( const Feature& feature )
{
	const auto computerControlInterfaces = filteredComputerControlInterfaces();

	if( feature.testFlag( Feature::Mode ) )
	{
		stopAllModeFeatures( computerControlInterfaces );

		if( m_currentMode == feature.uid() )
		{
			const Feature& monitoringModeFeature = m_builtinFeatures->monitoringMode().feature();

			m_featureManager->startFeature( *this, monitoringModeFeature, computerControlInterfaces );
			m_currentMode = monitoringModeFeature.uid();
		}
		else
		{
			m_featureManager->startFeature( *this, feature, computerControlInterfaces );
			m_currentMode = feature.uid();
		}
	}
	else
	{
		m_featureManager->startFeature( *this, feature, computerControlInterfaces );
	}
}



void VeyonMaster::enforceDesignatedMode( const QModelIndex& index )
{
	auto controlInterface = m_computerControlListModel->computerControlInterface( index );
	if( controlInterface )
	{
		auto designatedModeFeature = m_featureManager->feature( controlInterface->designatedModeFeature() );

		// stop all other active mode feature
		for( const auto& currentFeature : features() )
		{
			if( currentFeature.testFlag( Feature::Mode ) && currentFeature != designatedModeFeature )
			{
				featureManager().stopFeature( *this, currentFeature, { controlInterface } );
			}
		}

		if( designatedModeFeature != m_builtinFeatures->monitoringMode().feature() )
		{
			featureManager().startFeature( *this, designatedModeFeature, { controlInterface } );
		}
	}
}



void VeyonMaster::stopAllModeFeatures( const ComputerControlInterfaceList& computerControlInterfaces )
{
	// stop any previously active featues
	for( const auto& feature : qAsConst( features() ) )
	{
		if( feature.testFlag( Feature::Mode ) )
		{
			m_featureManager->stopFeature( *this, feature, computerControlInterfaces );
		}
	}
}



FeatureList VeyonMaster::featureList() const
{
	FeatureList features;

	const auto disabledFeatures = VeyonCore::config().disabledFeatures();
	const auto pluginUids = VeyonCore::pluginManager().pluginUids();

	for( const auto& pluginUid : pluginUids )
	{
		for( const auto& feature : m_featureManager->features( pluginUid ) )
		{
			if( feature.testFlag( Feature::Master ) &&
					feature.testFlag( Feature::Mode ) &&
					feature.parentUid().isNull() &&
					disabledFeatures.contains( feature.uid().toString() ) == false )
			{
				features += feature;
			}
		}
	}

	for( const auto& pluginUid : pluginUids )
	{
		for( const auto& feature : m_featureManager->features( pluginUid ) )
		{
			if( feature.testFlag( Feature::Master ) &&
					feature.testFlag( Feature::Mode ) == false &&
					feature.parentUid().isNull() &&
					disabledFeatures.contains( feature.uid().toString() ) == false )
			{
				features += feature;
			}
		}
	}

	return features;
}
