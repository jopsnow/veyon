/********************************************************************************
** Form generated from reading UI file 'ComputerManagementView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPUTERMANAGEMENTVIEW_H
#define UI_COMPUTERMANAGEMENTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComputerManagementView
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *treeView;
    QLineEdit *filterLineEdit;
    QPushButton *addRoomButton;
    QPushButton *saveListButton;

    void setupUi(QWidget *ComputerManagementView)
    {
        if (ComputerManagementView->objectName().isEmpty())
            ComputerManagementView->setObjectName(QStringLiteral("ComputerManagementView"));
        verticalLayout = new QVBoxLayout(ComputerManagementView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeView = new QTreeView(ComputerManagementView);
        treeView->setObjectName(QStringLiteral("treeView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy);
        treeView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView->setAnimated(true);
        treeView->header()->setCascadingSectionResizes(true);
        treeView->header()->setMinimumSectionSize(180);
        treeView->header()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout->addWidget(treeView);

        filterLineEdit = new QLineEdit(ComputerManagementView);
        filterLineEdit->setObjectName(QStringLiteral("filterLineEdit"));

        verticalLayout->addWidget(filterLineEdit);

        addRoomButton = new QPushButton(ComputerManagementView);
        addRoomButton->setObjectName(QStringLiteral("addRoomButton"));

        verticalLayout->addWidget(addRoomButton);

        saveListButton = new QPushButton(ComputerManagementView);
        saveListButton->setObjectName(QStringLiteral("saveListButton"));

        verticalLayout->addWidget(saveListButton);


        retranslateUi(ComputerManagementView);
        QObject::connect(addRoomButton, SIGNAL(clicked()), ComputerManagementView, SLOT(addRoom()));
        QObject::connect(saveListButton, SIGNAL(clicked()), ComputerManagementView, SLOT(saveList()));

        QMetaObject::connectSlotsByName(ComputerManagementView);
    } // setupUi

    void retranslateUi(QWidget *ComputerManagementView)
    {
        ComputerManagementView->setWindowTitle(QApplication::translate("ComputerManagementView", "Computer management", Q_NULLPTR));
        filterLineEdit->setPlaceholderText(QApplication::translate("ComputerManagementView", "Computer search", Q_NULLPTR));
        addRoomButton->setText(QApplication::translate("ComputerManagementView", "Add room", Q_NULLPTR));
        saveListButton->setText(QApplication::translate("ComputerManagementView", "Save computer/user list", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ComputerManagementView: public Ui_ComputerManagementView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTERMANAGEMENTVIEW_H
