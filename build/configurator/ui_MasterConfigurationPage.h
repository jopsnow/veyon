/********************************************************************************
** Form generated from reading UI file 'MasterConfigurationPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERCONFIGURATIONPAGE_H
#define UI_MASTERCONFIGURATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasterConfigurationPage
{
public:
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QToolButton *openUserConfigurationDirectory;
    QLabel *label_2;
    QLineEdit *userConfigurationDirectory;
    QLabel *label;
    QLineEdit *screenshotDirectory;
    QToolButton *openScreenshotDirectory;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QComboBox *computerDisplayRoleContent;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *computerMonitoringBackgroundColor;
    QLabel *label_6;
    QSpinBox *computerMonitoringUpdateInterval;
    QLabel *label_9;
    QPushButton *computerMonitoringTextColor;
    QSpacerItem *verticalSpacer;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *accessControlForMasterEnabled;
    QCheckBox *autoSwitchToCurrentRoom;
    QCheckBox *autoAdjustGridSize;
    QCheckBox *openComputerManagementAtStart;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *onlyCurrentRoomVisible;
    QCheckBox *manualRoomAdditionAllowed;
    QCheckBox *localComputerHidden;
    QCheckBox *emptyRoomsHidden;
    QCheckBox *computerFilterHidden;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QCheckBox *enforceSelectedModeForClients;
    QCheckBox *confirmDangerousActions;
    QComboBox *computerDoubleClickFeature;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QLabel *label_5;
    QListWidget *allFeaturesListWidget;
    QVBoxLayout *verticalLayout_18;
    QSpacerItem *verticalSpacer_15;
    QToolButton *disableFeatureButton;
    QToolButton *enableFeatureButton;
    QSpacerItem *verticalSpacer_16;
    QListWidget *disabledFeaturesListWidget;

    void setupUi(QWidget *MasterConfigurationPage)
    {
        if (MasterConfigurationPage->objectName().isEmpty())
            MasterConfigurationPage->setObjectName(QStringLiteral("MasterConfigurationPage"));
        MasterConfigurationPage->setWindowTitle(QStringLiteral("Form"));
        verticalLayout_6 = new QVBoxLayout(MasterConfigurationPage);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tabWidget = new QTabWidget(MasterConfigurationPage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(10);
        gridLayout_3->setContentsMargins(10, -1, -1, -1);
        openUserConfigurationDirectory = new QToolButton(groupBox);
        openUserConfigurationDirectory->setObjectName(QStringLiteral("openUserConfigurationDirectory"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        openUserConfigurationDirectory->setIcon(icon);

        gridLayout_3->addWidget(openUserConfigurationDirectory, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        userConfigurationDirectory = new QLineEdit(groupBox);
        userConfigurationDirectory->setObjectName(QStringLiteral("userConfigurationDirectory"));

        gridLayout_3->addWidget(userConfigurationDirectory, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        screenshotDirectory = new QLineEdit(groupBox);
        screenshotDirectory->setObjectName(QStringLiteral("screenshotDirectory"));

        gridLayout_3->addWidget(screenshotDirectory, 1, 1, 1, 1);

        openScreenshotDirectory = new QToolButton(groupBox);
        openScreenshotDirectory->setObjectName(QStringLiteral("openScreenshotDirectory"));
        openScreenshotDirectory->setIcon(icon);

        gridLayout_3->addWidget(openScreenshotDirectory, 1, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        computerDisplayRoleContent = new QComboBox(groupBox_4);
        computerDisplayRoleContent->setObjectName(QStringLiteral("computerDisplayRoleContent"));

        gridLayout_2->addWidget(computerDisplayRoleContent, 3, 1, 1, 1);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        computerMonitoringBackgroundColor = new QPushButton(groupBox_4);
        computerMonitoringBackgroundColor->setObjectName(QStringLiteral("computerMonitoringBackgroundColor"));

        gridLayout_2->addWidget(computerMonitoringBackgroundColor, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        computerMonitoringUpdateInterval = new QSpinBox(groupBox_4);
        computerMonitoringUpdateInterval->setObjectName(QStringLiteral("computerMonitoringUpdateInterval"));
        computerMonitoringUpdateInterval->setMinimum(250);
        computerMonitoringUpdateInterval->setMaximum(60000);
        computerMonitoringUpdateInterval->setSingleStep(250);
        computerMonitoringUpdateInterval->setValue(1000);

        gridLayout_2->addWidget(computerMonitoringUpdateInterval, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        computerMonitoringTextColor = new QPushButton(groupBox_4);
        computerMonitoringTextColor->setObjectName(QStringLiteral("computerMonitoringTextColor"));

        gridLayout_2->addWidget(computerMonitoringTextColor, 2, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        accessControlForMasterEnabled = new QCheckBox(groupBox_2);
        accessControlForMasterEnabled->setObjectName(QStringLiteral("accessControlForMasterEnabled"));

        verticalLayout_3->addWidget(accessControlForMasterEnabled);

        autoSwitchToCurrentRoom = new QCheckBox(groupBox_2);
        autoSwitchToCurrentRoom->setObjectName(QStringLiteral("autoSwitchToCurrentRoom"));

        verticalLayout_3->addWidget(autoSwitchToCurrentRoom);

        autoAdjustGridSize = new QCheckBox(groupBox_2);
        autoAdjustGridSize->setObjectName(QStringLiteral("autoAdjustGridSize"));

        verticalLayout_3->addWidget(autoAdjustGridSize);

        openComputerManagementAtStart = new QCheckBox(groupBox_2);
        openComputerManagementAtStart->setObjectName(QStringLiteral("openComputerManagementAtStart"));

        verticalLayout_3->addWidget(openComputerManagementAtStart);


        verticalLayout_4->addWidget(groupBox_2);

        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        verticalLayout_5 = new QVBoxLayout(groupBox_6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        onlyCurrentRoomVisible = new QCheckBox(groupBox_6);
        onlyCurrentRoomVisible->setObjectName(QStringLiteral("onlyCurrentRoomVisible"));

        verticalLayout_5->addWidget(onlyCurrentRoomVisible);

        manualRoomAdditionAllowed = new QCheckBox(groupBox_6);
        manualRoomAdditionAllowed->setObjectName(QStringLiteral("manualRoomAdditionAllowed"));
        manualRoomAdditionAllowed->setEnabled(false);

        verticalLayout_5->addWidget(manualRoomAdditionAllowed);

        localComputerHidden = new QCheckBox(groupBox_6);
        localComputerHidden->setObjectName(QStringLiteral("localComputerHidden"));

        verticalLayout_5->addWidget(localComputerHidden);

        emptyRoomsHidden = new QCheckBox(groupBox_6);
        emptyRoomsHidden->setObjectName(QStringLiteral("emptyRoomsHidden"));

        verticalLayout_5->addWidget(emptyRoomsHidden);

        computerFilterHidden = new QCheckBox(groupBox_6);
        computerFilterHidden->setObjectName(QStringLiteral("computerFilterHidden"));

        verticalLayout_5->addWidget(computerFilterHidden);


        verticalLayout_4->addWidget(groupBox_6);

        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        enforceSelectedModeForClients = new QCheckBox(groupBox_3);
        enforceSelectedModeForClients->setObjectName(QStringLiteral("enforceSelectedModeForClients"));

        gridLayout->addWidget(enforceSelectedModeForClients, 0, 0, 1, 2);

        confirmDangerousActions = new QCheckBox(groupBox_3);
        confirmDangerousActions->setObjectName(QStringLiteral("confirmDangerousActions"));

        gridLayout->addWidget(confirmDangerousActions, 1, 0, 1, 2);

        computerDoubleClickFeature = new QComboBox(groupBox_3);
        computerDoubleClickFeature->setObjectName(QStringLiteral("computerDoubleClickFeature"));

        gridLayout->addWidget(computerDoubleClickFeature, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_3);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_6->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_6->addWidget(label_5, 0, 2, 1, 1);

        allFeaturesListWidget = new QListWidget(tab_2);
        allFeaturesListWidget->setObjectName(QStringLiteral("allFeaturesListWidget"));

        gridLayout_6->addWidget(allFeaturesListWidget, 1, 0, 1, 1);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_15);

        disableFeatureButton = new QToolButton(tab_2);
        disableFeatureButton->setObjectName(QStringLiteral("disableFeatureButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/go-next.png"), QSize(), QIcon::Normal, QIcon::Off);
        disableFeatureButton->setIcon(icon1);

        verticalLayout_18->addWidget(disableFeatureButton);

        enableFeatureButton = new QToolButton(tab_2);
        enableFeatureButton->setObjectName(QStringLiteral("enableFeatureButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/go-previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        enableFeatureButton->setIcon(icon2);

        verticalLayout_18->addWidget(enableFeatureButton);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_16);


        gridLayout_6->addLayout(verticalLayout_18, 1, 1, 1, 1);

        disabledFeaturesListWidget = new QListWidget(tab_2);
        disabledFeaturesListWidget->setObjectName(QStringLiteral("disabledFeaturesListWidget"));

        gridLayout_6->addWidget(disabledFeaturesListWidget, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_6);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_6->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, userConfigurationDirectory);
        QWidget::setTabOrder(userConfigurationDirectory, screenshotDirectory);
        QWidget::setTabOrder(screenshotDirectory, openUserConfigurationDirectory);
        QWidget::setTabOrder(openUserConfigurationDirectory, openScreenshotDirectory);
        QWidget::setTabOrder(openScreenshotDirectory, computerMonitoringUpdateInterval);
        QWidget::setTabOrder(computerMonitoringUpdateInterval, computerMonitoringBackgroundColor);
        QWidget::setTabOrder(computerMonitoringBackgroundColor, computerMonitoringTextColor);
        QWidget::setTabOrder(computerMonitoringTextColor, computerDisplayRoleContent);
        QWidget::setTabOrder(computerDisplayRoleContent, accessControlForMasterEnabled);
        QWidget::setTabOrder(accessControlForMasterEnabled, autoSwitchToCurrentRoom);
        QWidget::setTabOrder(autoSwitchToCurrentRoom, autoAdjustGridSize);
        QWidget::setTabOrder(autoAdjustGridSize, openComputerManagementAtStart);
        QWidget::setTabOrder(openComputerManagementAtStart, onlyCurrentRoomVisible);
        QWidget::setTabOrder(onlyCurrentRoomVisible, manualRoomAdditionAllowed);
        QWidget::setTabOrder(manualRoomAdditionAllowed, localComputerHidden);
        QWidget::setTabOrder(localComputerHidden, emptyRoomsHidden);
        QWidget::setTabOrder(emptyRoomsHidden, computerFilterHidden);
        QWidget::setTabOrder(computerFilterHidden, enforceSelectedModeForClients);
        QWidget::setTabOrder(enforceSelectedModeForClients, confirmDangerousActions);
        QWidget::setTabOrder(confirmDangerousActions, computerDoubleClickFeature);
        QWidget::setTabOrder(computerDoubleClickFeature, allFeaturesListWidget);
        QWidget::setTabOrder(allFeaturesListWidget, disableFeatureButton);
        QWidget::setTabOrder(disableFeatureButton, enableFeatureButton);
        QWidget::setTabOrder(enableFeatureButton, disabledFeaturesListWidget);

        retranslateUi(MasterConfigurationPage);
        QObject::connect(onlyCurrentRoomVisible, SIGNAL(toggled(bool)), manualRoomAdditionAllowed, SLOT(setEnabled(bool)));
        QObject::connect(allFeaturesListWidget, SIGNAL(doubleClicked(QModelIndex)), MasterConfigurationPage, SLOT(disableFeature()));
        QObject::connect(disabledFeaturesListWidget, SIGNAL(doubleClicked(QModelIndex)), MasterConfigurationPage, SLOT(enableFeature()));
        QObject::connect(disableFeatureButton, SIGNAL(clicked()), MasterConfigurationPage, SLOT(disableFeature()));
        QObject::connect(enableFeatureButton, SIGNAL(clicked()), MasterConfigurationPage, SLOT(enableFeature()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MasterConfigurationPage);
    } // setupUi

    void retranslateUi(QWidget *MasterConfigurationPage)
    {
        groupBox->setTitle(QApplication::translate("MasterConfigurationPage", "Directories", Q_NULLPTR));
        openUserConfigurationDirectory->setText(QApplication::translate("MasterConfigurationPage", "...", Q_NULLPTR));
        label_2->setText(QApplication::translate("MasterConfigurationPage", "User configuration", Q_NULLPTR));
        label->setText(QApplication::translate("MasterConfigurationPage", "Screenshots", Q_NULLPTR));
        openScreenshotDirectory->setText(QApplication::translate("MasterConfigurationPage", "...", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MasterConfigurationPage", "User interface", Q_NULLPTR));
        computerDisplayRoleContent->clear();
        computerDisplayRoleContent->insertItems(0, QStringList()
         << QApplication::translate("MasterConfigurationPage", "User and computer name", Q_NULLPTR)
         << QApplication::translate("MasterConfigurationPage", "Only user name", Q_NULLPTR)
         << QApplication::translate("MasterConfigurationPage", "Only computer name", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("MasterConfigurationPage", "Thumbnail update interval", Q_NULLPTR));
        label_8->setText(QApplication::translate("MasterConfigurationPage", "Computer thumbnail caption", Q_NULLPTR));
        label_6->setText(QApplication::translate("MasterConfigurationPage", "Background color", Q_NULLPTR));
        computerMonitoringUpdateInterval->setSuffix(QApplication::translate("MasterConfigurationPage", " ms", Q_NULLPTR));
        label_9->setText(QApplication::translate("MasterConfigurationPage", "Text color", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MasterConfigurationPage", "Basic settings", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MasterConfigurationPage", "Program start", Q_NULLPTR));
        accessControlForMasterEnabled->setText(QApplication::translate("MasterConfigurationPage", "Perform access control at program start", Q_NULLPTR));
        autoSwitchToCurrentRoom->setText(QApplication::translate("MasterConfigurationPage", "Automatically switch to current room at start", Q_NULLPTR));
        autoAdjustGridSize->setText(QApplication::translate("MasterConfigurationPage", "Automatically adjust computer thumbnail size at start", Q_NULLPTR));
        openComputerManagementAtStart->setText(QApplication::translate("MasterConfigurationPage", "Automatically open computer rooms widget", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MasterConfigurationPage", "Computer rooms", Q_NULLPTR));
        onlyCurrentRoomVisible->setText(QApplication::translate("MasterConfigurationPage", "Only show current room", Q_NULLPTR));
        manualRoomAdditionAllowed->setText(QApplication::translate("MasterConfigurationPage", "Allow adding rooms manually", Q_NULLPTR));
        localComputerHidden->setText(QApplication::translate("MasterConfigurationPage", "Hide local computer", Q_NULLPTR));
        emptyRoomsHidden->setText(QApplication::translate("MasterConfigurationPage", "Hide empty rooms", Q_NULLPTR));
        computerFilterHidden->setText(QApplication::translate("MasterConfigurationPage", "Hide computer filter field", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MasterConfigurationPage", "Modes and features", Q_NULLPTR));
        enforceSelectedModeForClients->setText(QApplication::translate("MasterConfigurationPage", "Enforce selected mode for client computers", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        confirmDangerousActions->setToolTip(QApplication::translate("MasterConfigurationPage", "Actions such as rebooting or powering down computers", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        confirmDangerousActions->setText(QApplication::translate("MasterConfigurationPage", "Show confirmation dialog for potential dangerous actions", Q_NULLPTR));
        label_3->setText(QApplication::translate("MasterConfigurationPage", "Feature on computer double click:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MasterConfigurationPage", "Behaviour", Q_NULLPTR));
        label_4->setText(QApplication::translate("MasterConfigurationPage", "All features", Q_NULLPTR));
        label_5->setText(QApplication::translate("MasterConfigurationPage", "Disabled features", Q_NULLPTR));
        disableFeatureButton->setText(QApplication::translate("MasterConfigurationPage", "...", Q_NULLPTR));
        enableFeatureButton->setText(QApplication::translate("MasterConfigurationPage", "...", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MasterConfigurationPage", "Features", Q_NULLPTR));
        Q_UNUSED(MasterConfigurationPage);
    } // retranslateUi

};

namespace Ui {
    class MasterConfigurationPage: public Ui_MasterConfigurationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERCONFIGURATIONPAGE_H
