/********************************************************************************
** Form generated from reading UI file 'DesktopServicesConfigurationPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESKTOPSERVICESCONFIGURATIONPAGE_H
#define UI_DESKTOPSERVICESCONFIGURATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DesktopServicesConfigurationPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QTableWidget *programTable;
    QPushButton *addProgramButton;
    QPushButton *removeProgramButton;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QPushButton *addWebsiteButton;
    QPushButton *removeWebsiteButton;
    QSpacerItem *verticalSpacer;
    QTableWidget *websiteTable;

    void setupUi(QWidget *DesktopServicesConfigurationPage)
    {
        if (DesktopServicesConfigurationPage->objectName().isEmpty())
            DesktopServicesConfigurationPage->setObjectName(QStringLiteral("DesktopServicesConfigurationPage"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/desktopservices/desktop-services.png"), QSize(), QIcon::Normal, QIcon::Off);
        DesktopServicesConfigurationPage->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DesktopServicesConfigurationPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(DesktopServicesConfigurationPage);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        programTable = new QTableWidget(groupBox_2);
        if (programTable->columnCount() < 2)
            programTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        programTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        programTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        programTable->setObjectName(QStringLiteral("programTable"));
        programTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        programTable->horizontalHeader()->setMinimumSectionSize(150);
        programTable->horizontalHeader()->setStretchLastSection(true);
        programTable->verticalHeader()->setVisible(false);

        gridLayout->addWidget(programTable, 0, 0, 3, 1);

        addProgramButton = new QPushButton(groupBox_2);
        addProgramButton->setObjectName(QStringLiteral("addProgramButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addProgramButton->setIcon(icon1);

        gridLayout->addWidget(addProgramButton, 0, 1, 1, 1);

        removeProgramButton = new QPushButton(groupBox_2);
        removeProgramButton->setObjectName(QStringLiteral("removeProgramButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeProgramButton->setIcon(icon2);

        gridLayout->addWidget(removeProgramButton, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(25, 161, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(DesktopServicesConfigurationPage);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        addWebsiteButton = new QPushButton(groupBox_3);
        addWebsiteButton->setObjectName(QStringLiteral("addWebsiteButton"));
        addWebsiteButton->setIcon(icon1);

        gridLayout_2->addWidget(addWebsiteButton, 0, 1, 1, 1);

        removeWebsiteButton = new QPushButton(groupBox_3);
        removeWebsiteButton->setObjectName(QStringLiteral("removeWebsiteButton"));
        removeWebsiteButton->setIcon(icon2);

        gridLayout_2->addWidget(removeWebsiteButton, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);

        websiteTable = new QTableWidget(groupBox_3);
        if (websiteTable->columnCount() < 2)
            websiteTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        websiteTable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        websiteTable->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        websiteTable->setObjectName(QStringLiteral("websiteTable"));
        websiteTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        websiteTable->horizontalHeader()->setMinimumSectionSize(150);
        websiteTable->horizontalHeader()->setStretchLastSection(true);
        websiteTable->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(websiteTable, 0, 0, 3, 1);


        verticalLayout->addWidget(groupBox_3);


        retranslateUi(DesktopServicesConfigurationPage);
        QObject::connect(addProgramButton, SIGNAL(clicked()), DesktopServicesConfigurationPage, SLOT(addProgram()));
        QObject::connect(removeProgramButton, SIGNAL(clicked()), DesktopServicesConfigurationPage, SLOT(removeProgram()));
        QObject::connect(addWebsiteButton, SIGNAL(clicked()), DesktopServicesConfigurationPage, SLOT(addWebsite()));
        QObject::connect(removeWebsiteButton, SIGNAL(clicked()), DesktopServicesConfigurationPage, SLOT(removeWebsite()));
        QObject::connect(programTable, SIGNAL(cellChanged(int,int)), DesktopServicesConfigurationPage, SLOT(updateProgram()));
        QObject::connect(websiteTable, SIGNAL(cellChanged(int,int)), DesktopServicesConfigurationPage, SLOT(updateWebsite()));

        QMetaObject::connectSlotsByName(DesktopServicesConfigurationPage);
    } // setupUi

    void retranslateUi(QWidget *DesktopServicesConfigurationPage)
    {
        DesktopServicesConfigurationPage->setWindowTitle(QApplication::translate("DesktopServicesConfigurationPage", "Programs & websites", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("DesktopServicesConfigurationPage", "Predefined programs", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = programTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DesktopServicesConfigurationPage", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = programTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DesktopServicesConfigurationPage", "Path", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addProgramButton->setToolTip(QApplication::translate("DesktopServicesConfigurationPage", "Add new program", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addProgramButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        removeProgramButton->setToolTip(QApplication::translate("DesktopServicesConfigurationPage", "Remove selected program", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        removeProgramButton->setText(QString());
        groupBox_3->setTitle(QApplication::translate("DesktopServicesConfigurationPage", "Predefined websites", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addWebsiteButton->setToolTip(QApplication::translate("DesktopServicesConfigurationPage", "Add new program", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addWebsiteButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        removeWebsiteButton->setToolTip(QApplication::translate("DesktopServicesConfigurationPage", "Remove selected website", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        removeWebsiteButton->setText(QString());
        QTableWidgetItem *___qtablewidgetitem2 = websiteTable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("DesktopServicesConfigurationPage", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = websiteTable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("DesktopServicesConfigurationPage", "URL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DesktopServicesConfigurationPage: public Ui_DesktopServicesConfigurationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOPSERVICESCONFIGURATIONPAGE_H
