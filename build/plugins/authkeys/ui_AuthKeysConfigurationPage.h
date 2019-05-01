/********************************************************************************
** Form generated from reading UI file 'AuthKeysConfigurationPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHKEYSCONFIGURATIONPAGE_H
#define UI_AUTHKEYSCONFIGURATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthKeysConfigurationPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *keyManagement;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_8;
    QLabel *label_7;
    QLineEdit *publicKeyBaseDir;
    QLabel *label_8;
    QLineEdit *privateKeyBaseDir;
    QToolButton *openPublicKeyBaseDir;
    QToolButton *openPrivateKeyBaseDir;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTableView *keyTable;
    QVBoxLayout *verticalLayout_2;
    QPushButton *createKeyPair;
    QPushButton *deleteKey;
    QPushButton *importKey;
    QPushButton *exportKey;
    QPushButton *setAccessGroup;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *AuthKeysConfigurationPage)
    {
        if (AuthKeysConfigurationPage->objectName().isEmpty())
            AuthKeysConfigurationPage->setObjectName(QStringLiteral("AuthKeysConfigurationPage"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/application-x-pem-key.png"), QSize(), QIcon::Normal, QIcon::Off);
        AuthKeysConfigurationPage->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AuthKeysConfigurationPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        groupBox_5 = new QGroupBox(AuthKeysConfigurationPage);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_3 = new QVBoxLayout(groupBox_5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, -1, -1, -1);
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setWordWrap(true);

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setWordWrap(true);

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(label_6);

        horizontalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout->addWidget(groupBox_5);

        keyManagement = new QGroupBox(AuthKeysConfigurationPage);
        keyManagement->setObjectName(QStringLiteral("keyManagement"));
        gridLayout_12 = new QGridLayout(keyManagement);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setVerticalSpacing(2);
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(10);
        gridLayout_8->setVerticalSpacing(7);
        label_7 = new QLabel(keyManagement);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_8->addWidget(label_7, 0, 0, 1, 1);

        publicKeyBaseDir = new QLineEdit(keyManagement);
        publicKeyBaseDir->setObjectName(QStringLiteral("publicKeyBaseDir"));

        gridLayout_8->addWidget(publicKeyBaseDir, 0, 1, 1, 1);

        label_8 = new QLabel(keyManagement);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_8->addWidget(label_8, 1, 0, 1, 1);

        privateKeyBaseDir = new QLineEdit(keyManagement);
        privateKeyBaseDir->setObjectName(QStringLiteral("privateKeyBaseDir"));

        gridLayout_8->addWidget(privateKeyBaseDir, 1, 1, 1, 1);

        openPublicKeyBaseDir = new QToolButton(keyManagement);
        openPublicKeyBaseDir->setObjectName(QStringLiteral("openPublicKeyBaseDir"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        openPublicKeyBaseDir->setIcon(icon1);

        gridLayout_8->addWidget(openPublicKeyBaseDir, 0, 2, 1, 1);

        openPrivateKeyBaseDir = new QToolButton(keyManagement);
        openPrivateKeyBaseDir->setObjectName(QStringLiteral("openPrivateKeyBaseDir"));
        openPrivateKeyBaseDir->setIcon(icon1);

        gridLayout_8->addWidget(openPrivateKeyBaseDir, 1, 2, 1, 1);


        gridLayout_12->addLayout(gridLayout_8, 0, 0, 1, 2);


        verticalLayout->addWidget(keyManagement);

        groupBox = new QGroupBox(AuthKeysConfigurationPage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        keyTable = new QTableView(groupBox);
        keyTable->setObjectName(QStringLiteral("keyTable"));
        keyTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        keyTable->setSelectionMode(QAbstractItemView::SingleSelection);
        keyTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        keyTable->horizontalHeader()->setStretchLastSection(true);
        keyTable->verticalHeader()->setVisible(false);

        horizontalLayout->addWidget(keyTable);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        createKeyPair = new QPushButton(groupBox);
        createKeyPair->setObjectName(QStringLiteral("createKeyPair"));

        verticalLayout_2->addWidget(createKeyPair);

        deleteKey = new QPushButton(groupBox);
        deleteKey->setObjectName(QStringLiteral("deleteKey"));

        verticalLayout_2->addWidget(deleteKey);

        importKey = new QPushButton(groupBox);
        importKey->setObjectName(QStringLiteral("importKey"));

        verticalLayout_2->addWidget(importKey);

        exportKey = new QPushButton(groupBox);
        exportKey->setObjectName(QStringLiteral("exportKey"));

        verticalLayout_2->addWidget(exportKey);

        setAccessGroup = new QPushButton(groupBox);
        setAccessGroup->setObjectName(QStringLiteral("setAccessGroup"));

        verticalLayout_2->addWidget(setAccessGroup);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addWidget(groupBox);


        retranslateUi(AuthKeysConfigurationPage);

        QMetaObject::connectSlotsByName(AuthKeysConfigurationPage);
    } // setupUi

    void retranslateUi(QWidget *AuthKeysConfigurationPage)
    {
        AuthKeysConfigurationPage->setWindowTitle(QApplication::translate("AuthKeysConfigurationPage", "Authentication keys", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("AuthKeysConfigurationPage", "Introduction", Q_NULLPTR));
        label_2->setText(QApplication::translate("AuthKeysConfigurationPage", "Please perform the following steps to set up key file authentication:", Q_NULLPTR));
        label_3->setText(QApplication::translate("AuthKeysConfigurationPage", "1) Create a key pair on the master computer.", Q_NULLPTR));
        label_4->setText(QApplication::translate("AuthKeysConfigurationPage", "2) Set an access group whose members should be allowed to access other computers.", Q_NULLPTR));
        label_5->setText(QApplication::translate("AuthKeysConfigurationPage", "3) Export the public key and import it on all client computers with the same name.", Q_NULLPTR));
        label_6->setText(QApplication::translate("AuthKeysConfigurationPage", "Please refer to the <a href=\"https://veyon.readthedocs.io/en/latest/admin/index.html\">Veyon Administrator Manual</a> for more information.", Q_NULLPTR));
        keyManagement->setTitle(QApplication::translate("AuthKeysConfigurationPage", "Key file directories", Q_NULLPTR));
        label_7->setText(QApplication::translate("AuthKeysConfigurationPage", "Public key file base directory", Q_NULLPTR));
        label_8->setText(QApplication::translate("AuthKeysConfigurationPage", "Private key file base directory", Q_NULLPTR));
        openPublicKeyBaseDir->setText(QApplication::translate("AuthKeysConfigurationPage", "...", Q_NULLPTR));
        openPrivateKeyBaseDir->setText(QApplication::translate("AuthKeysConfigurationPage", "...", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AuthKeysConfigurationPage", "Available authentication keys", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        keyTable->setToolTip(QApplication::translate("AuthKeysConfigurationPage", "An authentication key pair consist of two coupled cryptographic keys, a private and a public key.\n"
"A private key allows users on the master computer to access client computers.\n"
"It is important that only authorized users have read access to the private key file.\n"
"The public key is used on client computers to authenticate incoming connection request.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        createKeyPair->setText(QApplication::translate("AuthKeysConfigurationPage", "Create key pair", Q_NULLPTR));
        deleteKey->setText(QApplication::translate("AuthKeysConfigurationPage", "Delete key", Q_NULLPTR));
        importKey->setText(QApplication::translate("AuthKeysConfigurationPage", "Import key", Q_NULLPTR));
        exportKey->setText(QApplication::translate("AuthKeysConfigurationPage", "Export key", Q_NULLPTR));
        setAccessGroup->setText(QApplication::translate("AuthKeysConfigurationPage", "Set access group", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AuthKeysConfigurationPage: public Ui_AuthKeysConfigurationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHKEYSCONFIGURATIONPAGE_H
