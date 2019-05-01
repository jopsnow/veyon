/********************************************************************************
** Form generated from reading UI file 'X11VncConfigurationWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_X11VNCCONFIGURATIONWIDGET_H
#define UI_X11VNCCONFIGURATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_X11VncConfigurationWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *extraArguments;
    QCheckBox *isXDamageDisabled;

    void setupUi(QWidget *X11VncConfigurationWidget)
    {
        if (X11VncConfigurationWidget->objectName().isEmpty())
            X11VncConfigurationWidget->setObjectName(QStringLiteral("X11VncConfigurationWidget"));
        X11VncConfigurationWidget->resize(510, 84);
        gridLayout = new QGridLayout(X11VncConfigurationWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(X11VncConfigurationWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        extraArguments = new QLineEdit(X11VncConfigurationWidget);
        extraArguments->setObjectName(QStringLiteral("extraArguments"));

        gridLayout->addWidget(extraArguments, 1, 1, 1, 1);

        isXDamageDisabled = new QCheckBox(X11VncConfigurationWidget);
        isXDamageDisabled->setObjectName(QStringLiteral("isXDamageDisabled"));

        gridLayout->addWidget(isXDamageDisabled, 0, 0, 1, 2);


        retranslateUi(X11VncConfigurationWidget);

        QMetaObject::connectSlotsByName(X11VncConfigurationWidget);
    } // setupUi

    void retranslateUi(QWidget *X11VncConfigurationWidget)
    {
        X11VncConfigurationWidget->setWindowTitle(QApplication::translate("X11VncConfigurationWidget", "Builtin x11vnc server configuration", Q_NULLPTR));
        label->setText(QApplication::translate("X11VncConfigurationWidget", "Custom x11vnc parameters:", Q_NULLPTR));
        isXDamageDisabled->setText(QApplication::translate("X11VncConfigurationWidget", "Do not use X Damage extension", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class X11VncConfigurationWidget: public Ui_X11VncConfigurationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_X11VNCCONFIGURATIONWIDGET_H
