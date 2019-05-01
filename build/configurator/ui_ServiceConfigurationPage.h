/********************************************************************************
** Form generated from reading UI file 'ServiceConfigurationPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVICECONFIGURATIONPAGE_H
#define UI_SERVICECONFIGURATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServiceConfigurationPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_12;
    QCheckBox *isTrayIconHidden;
    QCheckBox *autostartService;
    QPushButton *stopService;
    QSpacerItem *horizontalSpacer_9;
    QLabel *serviceState;
    QCheckBox *isSoftwareSASEnabled;
    QPushButton *startService;
    QCheckBox *isMultiSessionServiceEnabled;
    QCheckBox *remoteConnectionNotificationsEnabled;
    QLabel *label_16;
    QCheckBox *failedAuthenticationNotificationsEnabled;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_11;
    QSpinBox *featureWorkerManagerPort;
    QLabel *label_13;
    QSpinBox *primaryServicePort;
    QLabel *label_14;
    QLabel *label_12;
    QCheckBox *isFirewallExceptionEnabled;
    QSpinBox *demoServerPort;
    QCheckBox *localConnectOnly;
    QLabel *label_15;
    QSpinBox *vncServerPort;
    QGroupBox *vncServerGroupBox;
    QVBoxLayout *vncServerGroupBoxLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *vncServerPlugin;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ServiceConfigurationPage)
    {
        if (ServiceConfigurationPage->objectName().isEmpty())
            ServiceConfigurationPage->setObjectName(QStringLiteral("ServiceConfigurationPage"));
        ServiceConfigurationPage->setWindowTitle(QStringLiteral("Form"));
        verticalLayout_2 = new QVBoxLayout(ServiceConfigurationPage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        groupBox_3 = new QGroupBox(ServiceConfigurationPage);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_12 = new QGridLayout(groupBox_3);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        isTrayIconHidden = new QCheckBox(groupBox_3);
        isTrayIconHidden->setObjectName(QStringLiteral("isTrayIconHidden"));

        gridLayout_12->addWidget(isTrayIconHidden, 0, 0, 1, 5);

        autostartService = new QCheckBox(groupBox_3);
        autostartService->setObjectName(QStringLiteral("autostartService"));

        gridLayout_12->addWidget(autostartService, 5, 0, 1, 5);

        stopService = new QPushButton(groupBox_3);
        stopService->setObjectName(QStringLiteral("stopService"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/media-playback-stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopService->setIcon(icon);

        gridLayout_12->addWidget(stopService, 6, 4, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_9, 6, 2, 1, 1);

        serviceState = new QLabel(groupBox_3);
        serviceState->setObjectName(QStringLiteral("serviceState"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        serviceState->setFont(font);

        gridLayout_12->addWidget(serviceState, 6, 1, 1, 1);

        isSoftwareSASEnabled = new QCheckBox(groupBox_3);
        isSoftwareSASEnabled->setObjectName(QStringLiteral("isSoftwareSASEnabled"));

        gridLayout_12->addWidget(isSoftwareSASEnabled, 3, 0, 1, 5);

        startService = new QPushButton(groupBox_3);
        startService->setObjectName(QStringLiteral("startService"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/media-playback-start.png"), QSize(), QIcon::Normal, QIcon::Off);
        startService->setIcon(icon1);

        gridLayout_12->addWidget(startService, 6, 3, 1, 1);

        isMultiSessionServiceEnabled = new QCheckBox(groupBox_3);
        isMultiSessionServiceEnabled->setObjectName(QStringLiteral("isMultiSessionServiceEnabled"));

        gridLayout_12->addWidget(isMultiSessionServiceEnabled, 4, 0, 1, 5);

        remoteConnectionNotificationsEnabled = new QCheckBox(groupBox_3);
        remoteConnectionNotificationsEnabled->setObjectName(QStringLiteral("remoteConnectionNotificationsEnabled"));

        gridLayout_12->addWidget(remoteConnectionNotificationsEnabled, 2, 0, 1, 5);

        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_12->addWidget(label_16, 6, 0, 1, 1);

        failedAuthenticationNotificationsEnabled = new QCheckBox(groupBox_3);
        failedAuthenticationNotificationsEnabled->setObjectName(QStringLiteral("failedAuthenticationNotificationsEnabled"));

        gridLayout_12->addWidget(failedAuthenticationNotificationsEnabled, 1, 0, 1, 5);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_8 = new QGroupBox(ServiceConfigurationPage);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        gridLayout_11 = new QGridLayout(groupBox_8);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        featureWorkerManagerPort = new QSpinBox(groupBox_8);
        featureWorkerManagerPort->setObjectName(QStringLiteral("featureWorkerManagerPort"));
        featureWorkerManagerPort->setMinimum(1024);
        featureWorkerManagerPort->setMaximum(65535);

        gridLayout_11->addWidget(featureWorkerManagerPort, 2, 1, 1, 1);

        label_13 = new QLabel(groupBox_8);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_11->addWidget(label_13, 3, 0, 1, 1);

        primaryServicePort = new QSpinBox(groupBox_8);
        primaryServicePort->setObjectName(QStringLiteral("primaryServicePort"));
        primaryServicePort->setMinimum(1024);
        primaryServicePort->setMaximum(65535);

        gridLayout_11->addWidget(primaryServicePort, 0, 1, 1, 1);

        label_14 = new QLabel(groupBox_8);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_11->addWidget(label_14, 2, 0, 1, 1);

        label_12 = new QLabel(groupBox_8);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_11->addWidget(label_12, 0, 0, 1, 1);

        isFirewallExceptionEnabled = new QCheckBox(groupBox_8);
        isFirewallExceptionEnabled->setObjectName(QStringLiteral("isFirewallExceptionEnabled"));

        gridLayout_11->addWidget(isFirewallExceptionEnabled, 4, 0, 1, 2);

        demoServerPort = new QSpinBox(groupBox_8);
        demoServerPort->setObjectName(QStringLiteral("demoServerPort"));
        demoServerPort->setMinimum(1024);
        demoServerPort->setMaximum(65535);

        gridLayout_11->addWidget(demoServerPort, 3, 1, 1, 1);

        localConnectOnly = new QCheckBox(groupBox_8);
        localConnectOnly->setObjectName(QStringLiteral("localConnectOnly"));

        gridLayout_11->addWidget(localConnectOnly, 5, 0, 1, 2);

        label_15 = new QLabel(groupBox_8);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_11->addWidget(label_15, 1, 0, 1, 1);

        vncServerPort = new QSpinBox(groupBox_8);
        vncServerPort->setObjectName(QStringLiteral("vncServerPort"));
        vncServerPort->setMinimum(1024);
        vncServerPort->setMaximum(65535);

        gridLayout_11->addWidget(vncServerPort, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_8);

        vncServerGroupBox = new QGroupBox(ServiceConfigurationPage);
        vncServerGroupBox->setObjectName(QStringLiteral("vncServerGroupBox"));
        vncServerGroupBoxLayout = new QVBoxLayout(vncServerGroupBox);
        vncServerGroupBoxLayout->setObjectName(QStringLiteral("vncServerGroupBoxLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(vncServerGroupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        vncServerPlugin = new QComboBox(vncServerGroupBox);
        vncServerPlugin->setObjectName(QStringLiteral("vncServerPlugin"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vncServerPlugin->sizePolicy().hasHeightForWidth());
        vncServerPlugin->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(vncServerPlugin);


        vncServerGroupBoxLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(vncServerGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        QWidget::setTabOrder(isTrayIconHidden, failedAuthenticationNotificationsEnabled);
        QWidget::setTabOrder(failedAuthenticationNotificationsEnabled, remoteConnectionNotificationsEnabled);
        QWidget::setTabOrder(remoteConnectionNotificationsEnabled, isSoftwareSASEnabled);
        QWidget::setTabOrder(isSoftwareSASEnabled, isMultiSessionServiceEnabled);
        QWidget::setTabOrder(isMultiSessionServiceEnabled, autostartService);
        QWidget::setTabOrder(autostartService, startService);
        QWidget::setTabOrder(startService, stopService);
        QWidget::setTabOrder(stopService, primaryServicePort);
        QWidget::setTabOrder(primaryServicePort, vncServerPort);
        QWidget::setTabOrder(vncServerPort, featureWorkerManagerPort);
        QWidget::setTabOrder(featureWorkerManagerPort, demoServerPort);
        QWidget::setTabOrder(demoServerPort, isFirewallExceptionEnabled);
        QWidget::setTabOrder(isFirewallExceptionEnabled, localConnectOnly);
        QWidget::setTabOrder(localConnectOnly, vncServerPlugin);

        retranslateUi(ServiceConfigurationPage);
        QObject::connect(vncServerPlugin, SIGNAL(currentIndexChanged(int)), ServiceConfigurationPage, SLOT(updateVncServerPluginConfigurationWidget()));
        QObject::connect(startService, SIGNAL(clicked()), ServiceConfigurationPage, SLOT(startService()));
        QObject::connect(stopService, SIGNAL(clicked()), ServiceConfigurationPage, SLOT(stopService()));

        QMetaObject::connectSlotsByName(ServiceConfigurationPage);
    } // setupUi

    void retranslateUi(QWidget *ServiceConfigurationPage)
    {
        groupBox_3->setTitle(QApplication::translate("ServiceConfigurationPage", "General", Q_NULLPTR));
        isTrayIconHidden->setText(QApplication::translate("ServiceConfigurationPage", "Hide tray icon", Q_NULLPTR));
        autostartService->setText(QApplication::translate("ServiceConfigurationPage", "Autostart", Q_NULLPTR));
        stopService->setText(QApplication::translate("ServiceConfigurationPage", "Stop service", Q_NULLPTR));
        serviceState->setText(QApplication::translate("ServiceConfigurationPage", "Stopped", Q_NULLPTR));
        isSoftwareSASEnabled->setText(QApplication::translate("ServiceConfigurationPage", "Enable SAS generation by software (Ctrl+Alt+Del)", Q_NULLPTR));
        startService->setText(QApplication::translate("ServiceConfigurationPage", "Start service", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        isMultiSessionServiceEnabled->setToolTip(QApplication::translate("ServiceConfigurationPage", "Enabling this option will make the service launch a server process for every interactive session on a computer.\n"
"Typically this is required to support terminal servers.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        isMultiSessionServiceEnabled->setText(QApplication::translate("ServiceConfigurationPage", "Multi session support (experimental)", Q_NULLPTR));
        remoteConnectionNotificationsEnabled->setText(QApplication::translate("ServiceConfigurationPage", "Show notification on remote connection", Q_NULLPTR));
        label_16->setText(QApplication::translate("ServiceConfigurationPage", "State:", Q_NULLPTR));
        failedAuthenticationNotificationsEnabled->setText(QApplication::translate("ServiceConfigurationPage", "Show notification on failed authentication attempts", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("ServiceConfigurationPage", "Network", Q_NULLPTR));
        label_13->setText(QApplication::translate("ServiceConfigurationPage", "Demo server port", Q_NULLPTR));
        label_14->setText(QApplication::translate("ServiceConfigurationPage", "Feature manager port", Q_NULLPTR));
        label_12->setText(QApplication::translate("ServiceConfigurationPage", "Primary service port", Q_NULLPTR));
        isFirewallExceptionEnabled->setText(QApplication::translate("ServiceConfigurationPage", "Enable firewall exception", Q_NULLPTR));
        localConnectOnly->setText(QApplication::translate("ServiceConfigurationPage", "Allow connections from localhost only", Q_NULLPTR));
        label_15->setText(QApplication::translate("ServiceConfigurationPage", "Internal VNC server port", Q_NULLPTR));
        vncServerGroupBox->setTitle(QApplication::translate("ServiceConfigurationPage", "VNC server", Q_NULLPTR));
        label->setText(QApplication::translate("ServiceConfigurationPage", "Plugin:", Q_NULLPTR));
        Q_UNUSED(ServiceConfigurationPage);
    } // retranslateUi

};

namespace Ui {
    class ServiceConfigurationPage: public Ui_ServiceConfigurationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVICECONFIGURATIONPAGE_H
