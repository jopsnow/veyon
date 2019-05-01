/********************************************************************************
** Form generated from reading UI file 'GeneralConfigurationPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALCONFIGURATIONPAGE_H
#define UI_GENERALCONFIGURATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeneralConfigurationPage
{
public:
    QVBoxLayout *verticalLayout_14;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_13;
    QLabel *label_39;
    QComboBox *uiLanguage;
    QLineEdit *applicationName;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_9;
    QLabel *label_10;
    QLineEdit *logFileDirectory;
    QToolButton *openLogFileDirectory;
    QLabel *label_11;
    QComboBox *logLevel;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *logFileSizeLimitEnabled;
    QSpinBox *logFileSizeLimit;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *logFileRotationEnabled;
    QSpinBox *logFileRotationCount;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *logToStdErr;
    QCheckBox *logToSystem;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *clearLogFiles;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_14;
    QLabel *label;
    QComboBox *networkObjectDirectoryPlugin;
    QLabel *label_40;
    QSpinBox *networkObjectDirectoryUpdateInterval;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *authenticationMethod;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GeneralConfigurationPage)
    {
        if (GeneralConfigurationPage->objectName().isEmpty())
            GeneralConfigurationPage->setObjectName(QStringLiteral("GeneralConfigurationPage"));
        verticalLayout_14 = new QVBoxLayout(GeneralConfigurationPage);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(-1, 0, -1, 0);
        groupBox_11 = new QGroupBox(GeneralConfigurationPage);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        gridLayout_13 = new QGridLayout(groupBox_11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        label_39 = new QLabel(groupBox_11);
        label_39->setObjectName(QStringLiteral("label_39"));

        gridLayout_13->addWidget(label_39, 1, 0, 1, 1);

        uiLanguage = new QComboBox(groupBox_11);
        uiLanguage->setObjectName(QStringLiteral("uiLanguage"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(uiLanguage->sizePolicy().hasHeightForWidth());
        uiLanguage->setSizePolicy(sizePolicy);
        uiLanguage->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_13->addWidget(uiLanguage, 1, 1, 1, 1);

        applicationName = new QLineEdit(groupBox_11);
        applicationName->setObjectName(QStringLiteral("applicationName"));

        gridLayout_13->addWidget(applicationName, 0, 0, 1, 2);


        verticalLayout_14->addWidget(groupBox_11);

        groupBox_7 = new QGroupBox(GeneralConfigurationPage);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        verticalLayout = new QVBoxLayout(groupBox_7);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_10 = new QLabel(groupBox_7);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_9->addWidget(label_10, 0, 0, 1, 1);

        logFileDirectory = new QLineEdit(groupBox_7);
        logFileDirectory->setObjectName(QStringLiteral("logFileDirectory"));

        gridLayout_9->addWidget(logFileDirectory, 0, 1, 1, 1);

        openLogFileDirectory = new QToolButton(groupBox_7);
        openLogFileDirectory->setObjectName(QStringLiteral("openLogFileDirectory"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        openLogFileDirectory->setIcon(icon);

        gridLayout_9->addWidget(openLogFileDirectory, 0, 2, 1, 1);

        label_11 = new QLabel(groupBox_7);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_9->addWidget(label_11, 1, 0, 1, 1);

        logLevel = new QComboBox(groupBox_7);
        logLevel->setObjectName(QStringLiteral("logLevel"));
        logLevel->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_9->addWidget(logLevel, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(32);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        logFileSizeLimitEnabled = new QCheckBox(groupBox_7);
        logFileSizeLimitEnabled->setObjectName(QStringLiteral("logFileSizeLimitEnabled"));

        horizontalLayout_3->addWidget(logFileSizeLimitEnabled);

        logFileSizeLimit = new QSpinBox(groupBox_7);
        logFileSizeLimit->setObjectName(QStringLiteral("logFileSizeLimit"));
        logFileSizeLimit->setEnabled(false);
        logFileSizeLimit->setMinimum(1);
        logFileSizeLimit->setMaximum(999);
        logFileSizeLimit->setValue(100);

        horizontalLayout_3->addWidget(logFileSizeLimit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(32);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        logFileRotationEnabled = new QCheckBox(groupBox_7);
        logFileRotationEnabled->setObjectName(QStringLiteral("logFileRotationEnabled"));
        logFileRotationEnabled->setEnabled(false);

        horizontalLayout_4->addWidget(logFileRotationEnabled);

        logFileRotationCount = new QSpinBox(groupBox_7);
        logFileRotationCount->setObjectName(QStringLiteral("logFileRotationCount"));
        logFileRotationCount->setEnabled(false);
        logFileRotationCount->setMinimum(1);
        logFileRotationCount->setMaximum(10);
        logFileRotationCount->setValue(10);

        horizontalLayout_4->addWidget(logFileRotationCount);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_4);

        logToStdErr = new QCheckBox(groupBox_7);
        logToStdErr->setObjectName(QStringLiteral("logToStdErr"));

        verticalLayout->addWidget(logToStdErr);

        logToSystem = new QCheckBox(groupBox_7);
        logToSystem->setObjectName(QStringLiteral("logToSystem"));

        verticalLayout->addWidget(logToSystem);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        clearLogFiles = new QPushButton(groupBox_7);
        clearLogFiles->setObjectName(QStringLiteral("clearLogFiles"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearLogFiles->setIcon(icon1);

        horizontalLayout_5->addWidget(clearLogFiles);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_14->addWidget(groupBox_7);

        groupBox_12 = new QGroupBox(GeneralConfigurationPage);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        gridLayout_14 = new QGridLayout(groupBox_12);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        label = new QLabel(groupBox_12);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_14->addWidget(label, 0, 0, 1, 1);

        networkObjectDirectoryPlugin = new QComboBox(groupBox_12);
        networkObjectDirectoryPlugin->setObjectName(QStringLiteral("networkObjectDirectoryPlugin"));

        gridLayout_14->addWidget(networkObjectDirectoryPlugin, 0, 1, 1, 1);

        label_40 = new QLabel(groupBox_12);
        label_40->setObjectName(QStringLiteral("label_40"));

        gridLayout_14->addWidget(label_40, 1, 0, 1, 1);

        networkObjectDirectoryUpdateInterval = new QSpinBox(groupBox_12);
        networkObjectDirectoryUpdateInterval->setObjectName(QStringLiteral("networkObjectDirectoryUpdateInterval"));
        networkObjectDirectoryUpdateInterval->setMinimum(10);
        networkObjectDirectoryUpdateInterval->setMaximum(3600);
        networkObjectDirectoryUpdateInterval->setValue(600);

        gridLayout_14->addWidget(networkObjectDirectoryUpdateInterval, 1, 1, 1, 1);

        gridLayout_14->setColumnStretch(1, 1);

        verticalLayout_14->addWidget(groupBox_12);

        groupBox = new QGroupBox(GeneralConfigurationPage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        authenticationMethod = new QComboBox(groupBox);
        authenticationMethod->setObjectName(QStringLiteral("authenticationMethod"));

        horizontalLayout->addWidget(authenticationMethod);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_14->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer);


        retranslateUi(GeneralConfigurationPage);
        QObject::connect(logFileSizeLimitEnabled, SIGNAL(toggled(bool)), logFileSizeLimit, SLOT(setEnabled(bool)));
        QObject::connect(logFileSizeLimitEnabled, SIGNAL(toggled(bool)), logFileRotationEnabled, SLOT(setEnabled(bool)));
        QObject::connect(logFileRotationEnabled, SIGNAL(toggled(bool)), logFileRotationCount, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(GeneralConfigurationPage);
    } // setupUi

    void retranslateUi(QWidget *GeneralConfigurationPage)
    {
        groupBox_11->setTitle(QApplication::translate("GeneralConfigurationPage", "User interface", Q_NULLPTR));
        label_39->setText(QApplication::translate("GeneralConfigurationPage", "Language:", Q_NULLPTR));
        uiLanguage->clear();
        uiLanguage->insertItems(0, QStringList()
         << QApplication::translate("GeneralConfigurationPage", "Use system language setting", Q_NULLPTR)
        );
        applicationName->setText(QApplication::translate("GeneralConfigurationPage", "Veyon", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("GeneralConfigurationPage", "Logging", Q_NULLPTR));
        label_10->setText(QApplication::translate("GeneralConfigurationPage", "Log file directory", Q_NULLPTR));
        openLogFileDirectory->setText(QApplication::translate("GeneralConfigurationPage", "...", Q_NULLPTR));
        label_11->setText(QApplication::translate("GeneralConfigurationPage", "Log level", Q_NULLPTR));
        logLevel->clear();
        logLevel->insertItems(0, QStringList()
         << QApplication::translate("GeneralConfigurationPage", "Nothing", Q_NULLPTR)
         << QApplication::translate("GeneralConfigurationPage", "Only critical messages", Q_NULLPTR)
         << QApplication::translate("GeneralConfigurationPage", "Errors and critical messages", Q_NULLPTR)
         << QApplication::translate("GeneralConfigurationPage", "Warnings and errors", Q_NULLPTR)
         << QApplication::translate("GeneralConfigurationPage", "Information, warnings and errors", Q_NULLPTR)
         << QApplication::translate("GeneralConfigurationPage", "Debug messages and everything else", Q_NULLPTR)
        );
        logFileSizeLimitEnabled->setText(QApplication::translate("GeneralConfigurationPage", "Limit log file size", Q_NULLPTR));
        logFileSizeLimit->setSuffix(QApplication::translate("GeneralConfigurationPage", " MB", Q_NULLPTR));
        logFileRotationEnabled->setText(QApplication::translate("GeneralConfigurationPage", "Rotate log files", Q_NULLPTR));
        logFileRotationCount->setSuffix(QApplication::translate("GeneralConfigurationPage", "x", Q_NULLPTR));
        logToStdErr->setText(QApplication::translate("GeneralConfigurationPage", "Log to standard error output", Q_NULLPTR));
        logToSystem->setText(QApplication::translate("GeneralConfigurationPage", "Write to logging system of operating system", Q_NULLPTR));
        clearLogFiles->setText(QApplication::translate("GeneralConfigurationPage", "Clear all log files", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("GeneralConfigurationPage", "Network object directory", Q_NULLPTR));
        label->setText(QApplication::translate("GeneralConfigurationPage", "Backend:", Q_NULLPTR));
        label_40->setText(QApplication::translate("GeneralConfigurationPage", "Update interval:", Q_NULLPTR));
        networkObjectDirectoryUpdateInterval->setSuffix(QApplication::translate("GeneralConfigurationPage", " seconds", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("GeneralConfigurationPage", "Authentication", Q_NULLPTR));
        label_2->setText(QApplication::translate("GeneralConfigurationPage", "Method:", Q_NULLPTR));
        authenticationMethod->clear();
        authenticationMethod->insertItems(0, QStringList()
         << QApplication::translate("GeneralConfigurationPage", "Logon authentication", Q_NULLPTR)
         << QApplication::translate("GeneralConfigurationPage", "Key file authentication", Q_NULLPTR)
        );
        Q_UNUSED(GeneralConfigurationPage);
    } // retranslateUi

};

namespace Ui {
    class GeneralConfigurationPage: public Ui_GeneralConfigurationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALCONFIGURATIONPAGE_H
