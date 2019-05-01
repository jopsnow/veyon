/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "ComputerMonitoringView.h"
#include "MainToolBar.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *centralLayout;
    ComputerMonitoringView *computerMonitoringView;
    QToolButton *autoFitButton;
    QSlider *gridSizeSlider;
    QToolButton *computerManagementButton;
    QToolButton *screenshotManagementButton;
    QLabel *spacerLabel1;
    QToolButton *aboutButton;
    QLabel *spacerLabel3;
    QLineEdit *filterLineEdit;
    QLabel *spacerLabel2;
    QToolButton *alignComputersButton;
    QToolButton *useCustomComputerPlacementButton;
    QLabel *spacerLabel4;
    QToolButton *filterPoweredOnComputersButton;
    MainToolBar *toolBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1377, 692);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icon64.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralLayout = new QHBoxLayout(centralWidget);
        centralLayout->setSpacing(0);
        centralLayout->setObjectName(QStringLiteral("centralLayout"));
        centralLayout->setContentsMargins(0, 0, 0, 0);
        computerMonitoringView = new ComputerMonitoringView(centralWidget);
        computerMonitoringView->setObjectName(QStringLiteral("computerMonitoringView"));
        autoFitButton = new QToolButton(computerMonitoringView);
        autoFitButton->setObjectName(QStringLiteral("autoFitButton"));
        autoFitButton->setGeometry(QRect(790, 570, 69, 37));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/zoom-fit-best.png"), QSize(), QIcon::Normal, QIcon::Off);
        autoFitButton->setIcon(icon1);
        gridSizeSlider = new QSlider(computerMonitoringView);
        gridSizeSlider->setObjectName(QStringLiteral("gridSizeSlider"));
        gridSizeSlider->setGeometry(QRect(660, 580, 111, 25));
        gridSizeSlider->setMinimum(50);
        gridSizeSlider->setMaximum(1000);
        gridSizeSlider->setSingleStep(10);
        gridSizeSlider->setPageStep(50);
        gridSizeSlider->setValue(150);
        gridSizeSlider->setOrientation(Qt::Horizontal);
        computerManagementButton = new QToolButton(computerMonitoringView);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->setExclusive(false);
        buttonGroup->addButton(computerManagementButton);
        computerManagementButton->setObjectName(QStringLiteral("computerManagementButton"));
        computerManagementButton->setGeometry(QRect(20, 570, 227, 37));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/applications-education.png"), QSize(), QIcon::Normal, QIcon::Off);
        computerManagementButton->setIcon(icon2);
        computerManagementButton->setCheckable(true);
        computerManagementButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        screenshotManagementButton = new QToolButton(computerMonitoringView);
        buttonGroup->addButton(screenshotManagementButton);
        screenshotManagementButton->setObjectName(QStringLiteral("screenshotManagementButton"));
        screenshotManagementButton->setGeometry(QRect(260, 570, 158, 37));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/camera-photo.png"), QSize(), QIcon::Normal, QIcon::Off);
        screenshotManagementButton->setIcon(icon3);
        screenshotManagementButton->setCheckable(true);
        screenshotManagementButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        spacerLabel1 = new QLabel(computerMonitoringView);
        spacerLabel1->setObjectName(QStringLiteral("spacerLabel1"));
        spacerLabel1->setGeometry(QRect(430, 570, 31, 30));
        aboutButton = new QToolButton(computerMonitoringView);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));
        aboutButton->setGeometry(QRect(1230, 570, 71, 37));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/help-about.png"), QSize(), QIcon::Normal, QIcon::Off);
        aboutButton->setIcon(icon4);
        spacerLabel3 = new QLabel(computerMonitoringView);
        spacerLabel3->setObjectName(QStringLiteral("spacerLabel3"));
        spacerLabel3->setGeometry(QRect(840, 570, 99, 30));
        filterLineEdit = new QLineEdit(computerMonitoringView);
        filterLineEdit->setObjectName(QStringLiteral("filterLineEdit"));
        filterLineEdit->setGeometry(QRect(480, 570, 113, 38));
        spacerLabel2 = new QLabel(computerMonitoringView);
        spacerLabel2->setObjectName(QStringLiteral("spacerLabel2"));
        spacerLabel2->setGeometry(QRect(610, 570, 31, 30));
        alignComputersButton = new QToolButton(computerMonitoringView);
        alignComputersButton->setObjectName(QStringLiteral("alignComputersButton"));
        alignComputersButton->setEnabled(false);
        alignComputersButton->setGeometry(QRect(1100, 570, 69, 37));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resources/align-grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignComputersButton->setIcon(icon5);
        useCustomComputerPlacementButton = new QToolButton(computerMonitoringView);
        useCustomComputerPlacementButton->setObjectName(QStringLiteral("useCustomComputerPlacementButton"));
        useCustomComputerPlacementButton->setGeometry(QRect(960, 570, 69, 37));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resources/exchange-positions-zorder.png"), QSize(), QIcon::Normal, QIcon::Off);
        useCustomComputerPlacementButton->setIcon(icon6);
        useCustomComputerPlacementButton->setCheckable(true);
        spacerLabel4 = new QLabel(computerMonitoringView);
        spacerLabel4->setObjectName(QStringLiteral("spacerLabel4"));
        spacerLabel4->setGeometry(QRect(1110, 570, 99, 30));
        filterPoweredOnComputersButton = new QToolButton(computerMonitoringView);
        filterPoweredOnComputersButton->setObjectName(QStringLiteral("filterPoweredOnComputersButton"));
        filterPoweredOnComputersButton->setGeometry(QRect(580, 570, 69, 37));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resources/powered-on.png"), QSize(), QIcon::Normal, QIcon::Off);
        filterPoweredOnComputersButton->setIcon(icon7);
        filterPoweredOnComputersButton->setCheckable(true);

        centralLayout->addWidget(computerMonitoringView);

        MainWindow->setCentralWidget(centralWidget);
        toolBar = new MainToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(aboutButton, SIGNAL(clicked()), MainWindow, SLOT(showAboutDialog()));
        QObject::connect(useCustomComputerPlacementButton, SIGNAL(toggled(bool)), alignComputersButton, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        autoFitButton->setToolTip(QApplication::translate("MainWindow", "Adjust optimal size", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        autoFitButton->setText(QApplication::translate("MainWindow", "Auto", Q_NULLPTR));
        computerManagementButton->setText(QApplication::translate("MainWindow", "Computer rooms", Q_NULLPTR));
        screenshotManagementButton->setText(QApplication::translate("MainWindow", "Screenshots", Q_NULLPTR));
        spacerLabel1->setText(QString());
#ifndef QT_NO_TOOLTIP
        aboutButton->setToolTip(QApplication::translate("MainWindow", "About Veyon", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        aboutButton->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        filterLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Search users and computers", Q_NULLPTR));
        spacerLabel2->setText(QString());
#ifndef QT_NO_TOOLTIP
        alignComputersButton->setToolTip(QApplication::translate("MainWindow", "Align computers to grid", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        useCustomComputerPlacementButton->setToolTip(QApplication::translate("MainWindow", "Use custom computer placement", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        filterPoweredOnComputersButton->setToolTip(QApplication::translate("MainWindow", "Only show powered on computers", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
