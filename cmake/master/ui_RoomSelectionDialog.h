/********************************************************************************
** Form generated from reading UI file 'RoomSelectionDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMSELECTIONDIALOG_H
#define UI_ROOMSELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>

QT_BEGIN_NAMESPACE

class Ui_RoomSelectionDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *filterLineEdit;
    QListView *listView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RoomSelectionDialog)
    {
        if (RoomSelectionDialog->objectName().isEmpty())
            RoomSelectionDialog->setObjectName(QStringLiteral("RoomSelectionDialog"));
        RoomSelectionDialog->setMinimumSize(QSize(640, 480));
        gridLayout = new QGridLayout(RoomSelectionDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        filterLineEdit = new QLineEdit(RoomSelectionDialog);
        filterLineEdit->setObjectName(QStringLiteral("filterLineEdit"));

        gridLayout->addWidget(filterLineEdit, 0, 1, 1, 1);

        listView = new QListView(RoomSelectionDialog);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        listView->setResizeMode(QListView::Adjust);

        gridLayout->addWidget(listView, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(RoomSelectionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);


        retranslateUi(RoomSelectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RoomSelectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RoomSelectionDialog, SLOT(reject()));
        QObject::connect(filterLineEdit, SIGNAL(textChanged(QString)), RoomSelectionDialog, SLOT(updateSearchFilter()));
        QObject::connect(filterLineEdit, SIGNAL(returnPressed()), RoomSelectionDialog, SLOT(accept()));
        QObject::connect(listView, SIGNAL(activated(QModelIndex)), RoomSelectionDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(RoomSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *RoomSelectionDialog)
    {
        RoomSelectionDialog->setWindowTitle(QApplication::translate("RoomSelectionDialog", "Room selection", Q_NULLPTR));
        filterLineEdit->setPlaceholderText(QApplication::translate("RoomSelectionDialog", "enter search filter...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RoomSelectionDialog: public Ui_RoomSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMSELECTIONDIALOG_H
