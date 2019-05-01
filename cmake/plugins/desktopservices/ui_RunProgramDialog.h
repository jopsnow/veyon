/********************************************************************************
** Form generated from reading UI file 'RunProgramDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNPROGRAMDIALOG_H
#define UI_RUNPROGRAMDIALOG_H

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

class Ui_RunProgramDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTextEdit *programInputTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RunProgramDialog)
    {
        if (RunProgramDialog->objectName().isEmpty())
            RunProgramDialog->setObjectName(QStringLiteral("RunProgramDialog"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/desktopservices/preferences-desktop-launch-feedback.png"), QSize(), QIcon::Normal, QIcon::Off);
        RunProgramDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(RunProgramDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(RunProgramDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);

        programInputTextEdit = new QTextEdit(RunProgramDialog);
        programInputTextEdit->setObjectName(QStringLiteral("programInputTextEdit"));

        verticalLayout->addWidget(programInputTextEdit);

        buttonBox = new QDialogButtonBox(RunProgramDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RunProgramDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RunProgramDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RunProgramDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RunProgramDialog);
    } // setupUi

    void retranslateUi(QDialog *RunProgramDialog)
    {
        RunProgramDialog->setWindowTitle(QApplication::translate("RunProgramDialog", "Run programs", Q_NULLPTR));
        label_3->setText(QApplication::translate("RunProgramDialog", "Please enter the programs or commands to run on the selected computer(s). You can separate multiple programs/commands by line.", Q_NULLPTR));
        programInputTextEdit->setPlaceholderText(QApplication::translate("RunProgramDialog", "e.g. \"C:\\Program Files\\VideoLAN\\VLC\\vlc.exe\"", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RunProgramDialog: public Ui_RunProgramDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNPROGRAMDIALOG_H
