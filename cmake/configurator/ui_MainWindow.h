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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "AccessControlPage.h"
#include "GeneralConfigurationPage.h"
#include "MasterConfigurationPage.h"
#include "ServiceConfigurationPage.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionSaveSettings;
    QAction *actionLoadSettings;
    QAction *actionAboutVeyon;
    QAction *actionAboutQt;
    QAction *actionResetConfiguration;
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QStackedWidget *configPages;
    GeneralConfigurationPage *generalConfigurationPage;
    ServiceConfigurationPage *serviceConfigurationPage;
    MasterConfigurationPage *masterConfigurationPage;
    AccessControlPage *accessControlPage;
    QListWidget *pageSelector;
    QDialogButtonBox *buttonBox;
    QFrame *line;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Help;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/veyon-configurator.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionSaveSettings = new QAction(MainWindow);
        actionSaveSettings->setObjectName(QStringLiteral("actionSaveSettings"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveSettings->setIcon(icon1);
        actionLoadSettings = new QAction(MainWindow);
        actionLoadSettings->setObjectName(QStringLiteral("actionLoadSettings"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadSettings->setIcon(icon2);
        actionAboutVeyon = new QAction(MainWindow);
        actionAboutVeyon->setObjectName(QStringLiteral("actionAboutVeyon"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/help-about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAboutVeyon->setIcon(icon3);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        actionResetConfiguration = new QAction(MainWindow);
        actionResetConfiguration->setObjectName(QStringLiteral("actionResetConfiguration"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionResetConfiguration->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        configPages = new QStackedWidget(centralwidget);
        configPages->setObjectName(QStringLiteral("configPages"));
        generalConfigurationPage = new GeneralConfigurationPage();
        generalConfigurationPage->setObjectName(QStringLiteral("generalConfigurationPage"));
        configPages->addWidget(generalConfigurationPage);
        serviceConfigurationPage = new ServiceConfigurationPage();
        serviceConfigurationPage->setObjectName(QStringLiteral("serviceConfigurationPage"));
        configPages->addWidget(serviceConfigurationPage);
        masterConfigurationPage = new MasterConfigurationPage();
        masterConfigurationPage->setObjectName(QStringLiteral("masterConfigurationPage"));
        configPages->addWidget(masterConfigurationPage);
        accessControlPage = new AccessControlPage();
        accessControlPage->setObjectName(QStringLiteral("accessControlPage"));
        configPages->addWidget(accessControlPage);

        gridLayout_4->addWidget(configPages, 0, 1, 1, 1);

        pageSelector = new QListWidget(centralwidget);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resources/configure-shortcuts.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(pageSelector);
        __qlistwidgetitem->setIcon(icon5);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resources/application-x-sharedlib.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(pageSelector);
        __qlistwidgetitem1->setIcon(icon6);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resources/application-x-ms-dos-executable.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(pageSelector);
        __qlistwidgetitem2->setIcon(icon7);
        __qlistwidgetitem2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/resources/network-vpn.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(pageSelector);
        __qlistwidgetitem3->setIcon(icon8);
        __qlistwidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        pageSelector->setObjectName(QStringLiteral("pageSelector"));
        pageSelector->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        pageSelector->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pageSelector->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        pageSelector->setIconSize(QSize(48, 48));
        pageSelector->setTextElideMode(Qt::ElideNone);
        pageSelector->setSpacing(4);
        pageSelector->setViewMode(QListView::ListMode);
        pageSelector->setUniformItemSizes(true);

        gridLayout_4->addWidget(pageSelector, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(centralwidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Reset);
        buttonBox->setCenterButtons(true);

        gridLayout_4->addWidget(buttonBox, 2, 1, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 1, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 572, 36));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu_File->addAction(actionLoadSettings);
        menu_File->addAction(actionSaveSettings);
        menu_File->addSeparator();
        menu_File->addAction(actionResetConfiguration);
        menu_File->addSeparator();
        menu_File->addAction(actionQuit);
        menu_Help->addAction(actionAboutVeyon);
        menu_Help->addAction(actionAboutQt);

        retranslateUi(MainWindow);
        QObject::connect(pageSelector, SIGNAL(currentRowChanged(int)), configPages, SLOT(setCurrentIndex(int)));
        QObject::connect(actionAboutVeyon, SIGNAL(triggered()), MainWindow, SLOT(aboutVeyon()));
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actionResetConfiguration, SIGNAL(triggered()), MainWindow, SLOT(resetConfiguration()));

        configPages->setCurrentIndex(0);
        pageSelector->setCurrentRow(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Veyon Configurator", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSaveSettings->setText(QApplication::translate("MainWindow", "&Save settings to file", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSaveSettings->setToolTip(QApplication::translate("MainWindow", "Save settings to file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSaveSettings->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionLoadSettings->setText(QApplication::translate("MainWindow", "L&oad settings from file", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionLoadSettings->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAboutVeyon->setText(QApplication::translate("MainWindow", "About Veyon", Q_NULLPTR));
        actionAboutQt->setText(QApplication::translate("MainWindow", "About Qt", Q_NULLPTR));
        actionResetConfiguration->setText(QApplication::translate("MainWindow", "Reset configuration", Q_NULLPTR));

        const bool __sortingEnabled = pageSelector->isSortingEnabled();
        pageSelector->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = pageSelector->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "General", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = pageSelector->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "Service", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = pageSelector->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "Master", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = pageSelector->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "Access control", Q_NULLPTR));
        pageSelector->setSortingEnabled(__sortingEnabled);

        menu_File->setTitle(QApplication::translate("MainWindow", "&File", Q_NULLPTR));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
