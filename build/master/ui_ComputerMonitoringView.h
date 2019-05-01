/********************************************************************************
** Form generated from reading UI file 'ComputerMonitoringView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPUTERMONITORINGVIEW_H
#define UI_COMPUTERMONITORINGVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "FlexibleListView.h"

QT_BEGIN_NAMESPACE

class Ui_ComputerMonitoringView
{
public:
    QVBoxLayout *verticalLayout;
    FlexibleListView *listView;

    void setupUi(QWidget *ComputerMonitoringView)
    {
        if (ComputerMonitoringView->objectName().isEmpty())
            ComputerMonitoringView->setObjectName(QStringLiteral("ComputerMonitoringView"));
        ComputerMonitoringView->resize(1155, 670);
        ComputerMonitoringView->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(ComputerMonitoringView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listView = new FlexibleListView(ComputerMonitoringView);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setContextMenuPolicy(Qt::CustomContextMenu);
        listView->setAcceptDrops(true);
        listView->setDragEnabled(true);
        listView->setDragDropMode(QAbstractItemView::DropOnly);
        listView->setDefaultDropAction(Qt::MoveAction);
        listView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        listView->setFlow(QListView::LeftToRight);
        listView->setProperty("isWrapping", QVariant(true));
        listView->setResizeMode(QListView::Adjust);
        listView->setSpacing(16);
        listView->setViewMode(QListView::IconMode);
        listView->setUniformItemSizes(true);
        listView->setSelectionRectVisible(true);

        verticalLayout->addWidget(listView);


        retranslateUi(ComputerMonitoringView);

        QMetaObject::connectSlotsByName(ComputerMonitoringView);
    } // setupUi

    void retranslateUi(QWidget *ComputerMonitoringView)
    {
        Q_UNUSED(ComputerMonitoringView);
    } // retranslateUi

};

namespace Ui {
    class ComputerMonitoringView: public Ui_ComputerMonitoringView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTERMONITORINGVIEW_H
