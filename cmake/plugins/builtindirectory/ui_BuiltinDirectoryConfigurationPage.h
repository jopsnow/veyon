/********************************************************************************
** Form generated from reading UI file 'BuiltinDirectoryConfigurationPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUILTINDIRECTORYCONFIGURATIONPAGE_H
#define UI_BUILTINDIRECTORYCONFIGURATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BuiltinDirectoryConfigurationPage
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *roomTableWidget;
    QTableWidget *computerTableWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addRoomButton;
    QPushButton *removeRoomButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *addComputerButton;
    QPushButton *removeComputerButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *BuiltinDirectoryConfigurationPage)
    {
        if (BuiltinDirectoryConfigurationPage->objectName().isEmpty())
            BuiltinDirectoryConfigurationPage->setObjectName(QStringLiteral("BuiltinDirectoryConfigurationPage"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/builtindirectory/application-msonenote.png"), QSize(), QIcon::Normal, QIcon::Off);
        BuiltinDirectoryConfigurationPage->setWindowIcon(icon);
        gridLayout = new QGridLayout(BuiltinDirectoryConfigurationPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        label = new QLabel(BuiltinDirectoryConfigurationPage);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(BuiltinDirectoryConfigurationPage);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        roomTableWidget = new QTableWidget(BuiltinDirectoryConfigurationPage);
        if (roomTableWidget->columnCount() < 1)
            roomTableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        roomTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        roomTableWidget->setObjectName(QStringLiteral("roomTableWidget"));
        roomTableWidget->horizontalHeader()->setVisible(false);
        roomTableWidget->horizontalHeader()->setStretchLastSection(true);
        roomTableWidget->verticalHeader()->setVisible(false);

        gridLayout->addWidget(roomTableWidget, 1, 0, 1, 1);

        computerTableWidget = new QTableWidget(BuiltinDirectoryConfigurationPage);
        if (computerTableWidget->columnCount() < 3)
            computerTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        computerTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        computerTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        computerTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem3);
        computerTableWidget->setObjectName(QStringLiteral("computerTableWidget"));
        computerTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        computerTableWidget->horizontalHeader()->setMinimumSectionSize(150);
        computerTableWidget->horizontalHeader()->setStretchLastSection(true);
        computerTableWidget->verticalHeader()->setVisible(false);

        gridLayout->addWidget(computerTableWidget, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addRoomButton = new QPushButton(BuiltinDirectoryConfigurationPage);
        addRoomButton->setObjectName(QStringLiteral("addRoomButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addRoomButton->setIcon(icon1);

        horizontalLayout_2->addWidget(addRoomButton);

        removeRoomButton = new QPushButton(BuiltinDirectoryConfigurationPage);
        removeRoomButton->setObjectName(QStringLiteral("removeRoomButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeRoomButton->setIcon(icon2);

        horizontalLayout_2->addWidget(removeRoomButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addComputerButton = new QPushButton(BuiltinDirectoryConfigurationPage);
        addComputerButton->setObjectName(QStringLiteral("addComputerButton"));
        addComputerButton->setIcon(icon1);

        horizontalLayout->addWidget(addComputerButton);

        removeComputerButton = new QPushButton(BuiltinDirectoryConfigurationPage);
        removeComputerButton->setObjectName(QStringLiteral("removeComputerButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeComputerButton->setIcon(icon3);

        horizontalLayout->addWidget(removeComputerButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 3);

        retranslateUi(BuiltinDirectoryConfigurationPage);
        QObject::connect(addComputerButton, SIGNAL(clicked()), BuiltinDirectoryConfigurationPage, SLOT(addComputer()));
        QObject::connect(removeComputerButton, SIGNAL(clicked()), BuiltinDirectoryConfigurationPage, SLOT(removeComputer()));
        QObject::connect(removeRoomButton, SIGNAL(clicked()), BuiltinDirectoryConfigurationPage, SLOT(removeRoom()));
        QObject::connect(addRoomButton, SIGNAL(clicked()), BuiltinDirectoryConfigurationPage, SLOT(addRoom()));
        QObject::connect(roomTableWidget, SIGNAL(cellChanged(int,int)), BuiltinDirectoryConfigurationPage, SLOT(updateRoom()));
        QObject::connect(computerTableWidget, SIGNAL(cellChanged(int,int)), BuiltinDirectoryConfigurationPage, SLOT(updateComputer()));

        QMetaObject::connectSlotsByName(BuiltinDirectoryConfigurationPage);
    } // setupUi

    void retranslateUi(QWidget *BuiltinDirectoryConfigurationPage)
    {
        BuiltinDirectoryConfigurationPage->setWindowTitle(QApplication::translate("BuiltinDirectoryConfigurationPage", "Rooms & computers", Q_NULLPTR));
        label->setText(QApplication::translate("BuiltinDirectoryConfigurationPage", "Rooms", Q_NULLPTR));
        label_2->setText(QApplication::translate("BuiltinDirectoryConfigurationPage", "Computers", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = roomTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("BuiltinDirectoryConfigurationPage", "Rooms", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = computerTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("BuiltinDirectoryConfigurationPage", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = computerTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("BuiltinDirectoryConfigurationPage", "Host address/IP", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = computerTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("BuiltinDirectoryConfigurationPage", "MAC address", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addRoomButton->setToolTip(QApplication::translate("BuiltinDirectoryConfigurationPage", "Add new room", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addRoomButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        removeRoomButton->setToolTip(QApplication::translate("BuiltinDirectoryConfigurationPage", "Remove selected room", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        removeRoomButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        addComputerButton->setToolTip(QApplication::translate("BuiltinDirectoryConfigurationPage", "Add new computer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addComputerButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        removeComputerButton->setToolTip(QApplication::translate("BuiltinDirectoryConfigurationPage", "Remove selected computer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        removeComputerButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BuiltinDirectoryConfigurationPage: public Ui_BuiltinDirectoryConfigurationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUILTINDIRECTORYCONFIGURATIONPAGE_H
