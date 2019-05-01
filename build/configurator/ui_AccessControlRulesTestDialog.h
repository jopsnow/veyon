/********************************************************************************
** Form generated from reading UI file 'AccessControlRulesTestDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCESSCONTROLRULESTESTDIALOG_H
#define UI_ACCESSCONTROLRULESTESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AccessControlRulesTestDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLineEdit *localComputerLineEdit;
    QLineEdit *accessingComputerLineEdit;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *localUserLineEdit;
    QLineEdit *accessingUserLineEdit;
    QLabel *label_6;
    QLineEdit *connectedUsersLineEdit;

    void setupUi(QDialog *AccessControlRulesTestDialog)
    {
        if (AccessControlRulesTestDialog->objectName().isEmpty())
            AccessControlRulesTestDialog->setObjectName(QStringLiteral("AccessControlRulesTestDialog"));
        gridLayout = new QGridLayout(AccessControlRulesTestDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(AccessControlRulesTestDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);

        localComputerLineEdit = new QLineEdit(AccessControlRulesTestDialog);
        localComputerLineEdit->setObjectName(QStringLiteral("localComputerLineEdit"));

        gridLayout->addWidget(localComputerLineEdit, 4, 1, 1, 1);

        accessingComputerLineEdit = new QLineEdit(AccessControlRulesTestDialog);
        accessingComputerLineEdit->setObjectName(QStringLiteral("accessingComputerLineEdit"));

        gridLayout->addWidget(accessingComputerLineEdit, 2, 1, 1, 1);

        label = new QLabel(AccessControlRulesTestDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(AccessControlRulesTestDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_2 = new QLabel(AccessControlRulesTestDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_5 = new QLabel(AccessControlRulesTestDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setWordWrap(true);

        gridLayout->addWidget(label_5, 0, 0, 1, 2);

        label_3 = new QLabel(AccessControlRulesTestDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        localUserLineEdit = new QLineEdit(AccessControlRulesTestDialog);
        localUserLineEdit->setObjectName(QStringLiteral("localUserLineEdit"));

        gridLayout->addWidget(localUserLineEdit, 3, 1, 1, 1);

        accessingUserLineEdit = new QLineEdit(AccessControlRulesTestDialog);
        accessingUserLineEdit->setObjectName(QStringLiteral("accessingUserLineEdit"));

        gridLayout->addWidget(accessingUserLineEdit, 1, 1, 1, 1);

        label_6 = new QLabel(AccessControlRulesTestDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        connectedUsersLineEdit = new QLineEdit(AccessControlRulesTestDialog);
        connectedUsersLineEdit->setObjectName(QStringLiteral("connectedUsersLineEdit"));

        gridLayout->addWidget(connectedUsersLineEdit, 5, 1, 1, 1);

        QWidget::setTabOrder(accessingUserLineEdit, accessingComputerLineEdit);
        QWidget::setTabOrder(accessingComputerLineEdit, localUserLineEdit);
        QWidget::setTabOrder(localUserLineEdit, localComputerLineEdit);

        retranslateUi(AccessControlRulesTestDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AccessControlRulesTestDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AccessControlRulesTestDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AccessControlRulesTestDialog);
    } // setupUi

    void retranslateUi(QDialog *AccessControlRulesTestDialog)
    {
        AccessControlRulesTestDialog->setWindowTitle(QApplication::translate("AccessControlRulesTestDialog", "Access control rules test", Q_NULLPTR));
        label->setText(QApplication::translate("AccessControlRulesTestDialog", "Accessing user:", Q_NULLPTR));
        label_4->setText(QApplication::translate("AccessControlRulesTestDialog", "Local computer:", Q_NULLPTR));
        label_2->setText(QApplication::translate("AccessControlRulesTestDialog", "Accessing computer:", Q_NULLPTR));
        label_5->setText(QApplication::translate("AccessControlRulesTestDialog", "Please enter the following user and computer information in order to test the configured ruleset.", Q_NULLPTR));
        label_3->setText(QApplication::translate("AccessControlRulesTestDialog", "Local user:", Q_NULLPTR));
        label_6->setText(QApplication::translate("AccessControlRulesTestDialog", "Connected users:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AccessControlRulesTestDialog: public Ui_AccessControlRulesTestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCESSCONTROLRULESTESTDIALOG_H
