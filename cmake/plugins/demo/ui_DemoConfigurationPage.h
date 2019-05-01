/********************************************************************************
** Form generated from reading UI file 'DemoConfigurationPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOCONFIGURATIONPAGE_H
#define UI_DEMOCONFIGURATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DemoConfigurationPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpinBox *framebufferUpdateInterval;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *multithreadingEnabled;
    QSpinBox *memoryLimit;
    QLabel *label;
    QSpinBox *keyFrameInterval;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DemoConfigurationPage)
    {
        if (DemoConfigurationPage->objectName().isEmpty())
            DemoConfigurationPage->setObjectName(QStringLiteral("DemoConfigurationPage"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/demo/window-duplicate.png"), QSize(), QIcon::Normal, QIcon::Off);
        DemoConfigurationPage->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DemoConfigurationPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        groupBox = new QGroupBox(DemoConfigurationPage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        framebufferUpdateInterval = new QSpinBox(groupBox);
        framebufferUpdateInterval->setObjectName(QStringLiteral("framebufferUpdateInterval"));
        framebufferUpdateInterval->setMinimum(50);
        framebufferUpdateInterval->setMaximum(500);
        framebufferUpdateInterval->setSingleStep(50);
        framebufferUpdateInterval->setValue(100);

        gridLayout->addWidget(framebufferUpdateInterval, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        multithreadingEnabled = new QCheckBox(groupBox);
        multithreadingEnabled->setObjectName(QStringLiteral("multithreadingEnabled"));

        gridLayout->addWidget(multithreadingEnabled, 0, 0, 1, 2);

        memoryLimit = new QSpinBox(groupBox);
        memoryLimit->setObjectName(QStringLiteral("memoryLimit"));
        memoryLimit->setMinimum(64);
        memoryLimit->setMaximum(512);
        memoryLimit->setSingleStep(16);
        memoryLimit->setValue(128);

        gridLayout->addWidget(memoryLimit, 3, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        keyFrameInterval = new QSpinBox(groupBox);
        keyFrameInterval->setObjectName(QStringLiteral("keyFrameInterval"));
        keyFrameInterval->setMinimum(1);
        keyFrameInterval->setMaximum(30);
        keyFrameInterval->setValue(10);

        gridLayout->addWidget(keyFrameInterval, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(DemoConfigurationPage);

        QMetaObject::connectSlotsByName(DemoConfigurationPage);
    } // setupUi

    void retranslateUi(QWidget *DemoConfigurationPage)
    {
        DemoConfigurationPage->setWindowTitle(QApplication::translate("DemoConfigurationPage", "Demo server", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DemoConfigurationPage", "Tunables", Q_NULLPTR));
        framebufferUpdateInterval->setSuffix(QApplication::translate("DemoConfigurationPage", " ms", Q_NULLPTR));
        label_2->setText(QApplication::translate("DemoConfigurationPage", "Key frame interval", Q_NULLPTR));
        label_3->setText(QApplication::translate("DemoConfigurationPage", "Memory limit", Q_NULLPTR));
        multithreadingEnabled->setText(QApplication::translate("DemoConfigurationPage", "Use multithreading (experimental)", Q_NULLPTR));
        memoryLimit->setSuffix(QApplication::translate("DemoConfigurationPage", " MB", Q_NULLPTR));
        label->setText(QApplication::translate("DemoConfigurationPage", "Update interval", Q_NULLPTR));
        keyFrameInterval->setSuffix(QApplication::translate("DemoConfigurationPage", " s", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DemoConfigurationPage: public Ui_DemoConfigurationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOCONFIGURATIONPAGE_H
