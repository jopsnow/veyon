/********************************************************************************
** Form generated from reading UI file 'UltraVncConfigurationWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ULTRAVNCCONFIGURATIONWIDGET_H
#define UI_ULTRAVNCCONFIGURATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UltraVncConfigurationWidget
{
public:
    QGridLayout *gridLayout;
    QCheckBox *ultraVncPollFullScreen;
    QCheckBox *ultraVncMultiMonitorSupportEnabled;
    QCheckBox *ultraVncCaptureLayeredWindows;
    QCheckBox *ultraVncLowAccuracy;
    QCheckBox *ultraVncDeskDupEngineEnabled;

    void setupUi(QWidget *UltraVncConfigurationWidget)
    {
        if (UltraVncConfigurationWidget->objectName().isEmpty())
            UltraVncConfigurationWidget->setObjectName(QStringLiteral("UltraVncConfigurationWidget"));
        gridLayout = new QGridLayout(UltraVncConfigurationWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ultraVncPollFullScreen = new QCheckBox(UltraVncConfigurationWidget);
        ultraVncPollFullScreen->setObjectName(QStringLiteral("ultraVncPollFullScreen"));

        gridLayout->addWidget(ultraVncPollFullScreen, 3, 0, 1, 1);

        ultraVncMultiMonitorSupportEnabled = new QCheckBox(UltraVncConfigurationWidget);
        ultraVncMultiMonitorSupportEnabled->setObjectName(QStringLiteral("ultraVncMultiMonitorSupportEnabled"));

        gridLayout->addWidget(ultraVncMultiMonitorSupportEnabled, 1, 0, 1, 1);

        ultraVncCaptureLayeredWindows = new QCheckBox(UltraVncConfigurationWidget);
        ultraVncCaptureLayeredWindows->setObjectName(QStringLiteral("ultraVncCaptureLayeredWindows"));

        gridLayout->addWidget(ultraVncCaptureLayeredWindows, 0, 0, 1, 1);

        ultraVncLowAccuracy = new QCheckBox(UltraVncConfigurationWidget);
        ultraVncLowAccuracy->setObjectName(QStringLiteral("ultraVncLowAccuracy"));

        gridLayout->addWidget(ultraVncLowAccuracy, 4, 0, 1, 1);

        ultraVncDeskDupEngineEnabled = new QCheckBox(UltraVncConfigurationWidget);
        ultraVncDeskDupEngineEnabled->setObjectName(QStringLiteral("ultraVncDeskDupEngineEnabled"));

        gridLayout->addWidget(ultraVncDeskDupEngineEnabled, 2, 0, 1, 1);

        QWidget::setTabOrder(ultraVncCaptureLayeredWindows, ultraVncMultiMonitorSupportEnabled);
        QWidget::setTabOrder(ultraVncMultiMonitorSupportEnabled, ultraVncPollFullScreen);
        QWidget::setTabOrder(ultraVncPollFullScreen, ultraVncDeskDupEngineEnabled);
        QWidget::setTabOrder(ultraVncDeskDupEngineEnabled, ultraVncLowAccuracy);

        retranslateUi(UltraVncConfigurationWidget);

        QMetaObject::connectSlotsByName(UltraVncConfigurationWidget);
    } // setupUi

    void retranslateUi(QWidget *UltraVncConfigurationWidget)
    {
        UltraVncConfigurationWidget->setWindowTitle(QApplication::translate("UltraVncConfigurationWidget", "Builtin UltraVNC server configuration", Q_NULLPTR));
        ultraVncPollFullScreen->setText(QApplication::translate("UltraVncConfigurationWidget", "Poll full screen (leave this enabled per default)", Q_NULLPTR));
        ultraVncMultiMonitorSupportEnabled->setText(QApplication::translate("UltraVncConfigurationWidget", "Enable multi monitor support", Q_NULLPTR));
        ultraVncCaptureLayeredWindows->setText(QApplication::translate("UltraVncConfigurationWidget", "Enable capturing of layered (semi-transparent) windows", Q_NULLPTR));
        ultraVncLowAccuracy->setText(QApplication::translate("UltraVncConfigurationWidget", "Low accuracy (turbo mode)", Q_NULLPTR));
        ultraVncDeskDupEngineEnabled->setText(QApplication::translate("UltraVncConfigurationWidget", "Enable Desktop Duplication Engine on Windows 8 and newer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UltraVncConfigurationWidget: public Ui_UltraVncConfigurationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ULTRAVNCCONFIGURATIONWIDGET_H
