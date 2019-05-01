/********************************************************************************
** Form generated from reading UI file 'ExternalVncServerConfigurationWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTERNALVNCSERVERCONFIGURATIONWIDGET_H
#define UI_EXTERNALVNCSERVERCONFIGURATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExternalVncServerConfigurationWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *serverPort;
    QLabel *label;
    QLineEdit *password;

    void setupUi(QWidget *ExternalVncServerConfigurationWidget)
    {
        if (ExternalVncServerConfigurationWidget->objectName().isEmpty())
            ExternalVncServerConfigurationWidget->setObjectName(QStringLiteral("ExternalVncServerConfigurationWidget"));
        gridLayout = new QGridLayout(ExternalVncServerConfigurationWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(ExternalVncServerConfigurationWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        serverPort = new QSpinBox(ExternalVncServerConfigurationWidget);
        serverPort->setObjectName(QStringLiteral("serverPort"));
        serverPort->setMinimum(1024);
        serverPort->setMaximum(65535);
        serverPort->setValue(5900);

        gridLayout->addWidget(serverPort, 0, 1, 1, 1);

        label = new QLabel(ExternalVncServerConfigurationWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        password = new QLineEdit(ExternalVncServerConfigurationWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 1, 1, 1, 1);


        retranslateUi(ExternalVncServerConfigurationWidget);

        QMetaObject::connectSlotsByName(ExternalVncServerConfigurationWidget);
    } // setupUi

    void retranslateUi(QWidget *ExternalVncServerConfigurationWidget)
    {
        ExternalVncServerConfigurationWidget->setWindowTitle(QApplication::translate("ExternalVncServerConfigurationWidget", "External VNC server configuration", Q_NULLPTR));
        label_2->setText(QApplication::translate("ExternalVncServerConfigurationWidget", "Port:", Q_NULLPTR));
        label->setText(QApplication::translate("ExternalVncServerConfigurationWidget", "Password:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExternalVncServerConfigurationWidget: public Ui_ExternalVncServerConfigurationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTERNALVNCSERVERCONFIGURATIONWIDGET_H
