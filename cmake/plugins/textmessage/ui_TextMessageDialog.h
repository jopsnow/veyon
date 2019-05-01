/********************************************************************************
** Form generated from reading UI file 'TextMessageDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTMESSAGEDIALOG_H
#define UI_TEXTMESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TextMessageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TextMessageDialog)
    {
        if (TextMessageDialog->objectName().isEmpty())
            TextMessageDialog->setObjectName(QStringLiteral("TextMessageDialog"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/textmessage/dialog-information.png"), QSize(), QIcon::Normal, QIcon::Off);
        TextMessageDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(TextMessageDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(TextMessageDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);

        textEdit = new QTextEdit(TextMessageDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        buttonBox = new QDialogButtonBox(TextMessageDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TextMessageDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TextMessageDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TextMessageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TextMessageDialog);
    } // setupUi

    void retranslateUi(QDialog *TextMessageDialog)
    {
        TextMessageDialog->setWindowTitle(QApplication::translate("TextMessageDialog", "Send text message", Q_NULLPTR));
        label_3->setText(QApplication::translate("TextMessageDialog", "Use the field below to type your message which will be sent to all selected users.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TextMessageDialog: public Ui_TextMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTMESSAGEDIALOG_H
