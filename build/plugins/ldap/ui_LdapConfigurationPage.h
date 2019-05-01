/********************************************************************************
** Form generated from reading UI file 'LdapConfigurationPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LDAPCONFIGURATIONPAGE_H
#define UI_LDAPCONFIGURATIONPAGE_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LdapConfigurationPage
{
public:
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *isLdapIntegrationEnabled;
    QGridLayout *gridLayout_15;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *anonymousBind;
    QRadioButton *useBindCredentials;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *testBindInteractively;
    QLabel *label_30;
    QSpinBox *serverPort;
    QLabel *label_31;
    QLineEdit *serverHost;
    QLineEdit *bindPassword;
    QLabel *label_27;
    QLineEdit *bindDn;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *tlsCACertificateFile;
    QLabel *label;
    QComboBox *tlsVerifyMode;
    QComboBox *connectionSecurity;
    QToolButton *browseCACertificateFile;
    QLabel *label_3;
    QGroupBox *groupBox_14;
    QGridLayout *gridLayout_20;
    QPushButton *testBaseDn;
    QRadioButton *isFixedBaseDn;
    QLineEdit *baseDn;
    QRadioButton *queryNamingContext;
    QLineEdit *namingContextAttribute;
    QPushButton *testNamingContext;
    QSpacerItem *verticalSpacer;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_17;
    QGridLayout *gridLayout_21;
    QLineEdit *userTree;
    QLabel *label_29;
    QLineEdit *groupTree;
    QPushButton *testComputerGroupTree;
    QCheckBox *recursiveSearchOperations;
    QLabel *label_28;
    QPushButton *testGroupTree;
    QPushButton *testUserTree;
    QLabel *label_40;
    QLabel *label_16;
    QPushButton *testComputerTree;
    QLineEdit *computerTree;
    QLineEdit *computerGroupTree;
    QGroupBox *groupBox_18;
    QGridLayout *gridLayout_22;
    QLineEdit *groupMemberAttribute;
    QLineEdit *computerRoomNameAttribute;
    QLabel *label_33;
    QLabel *label_39;
    QLabel *label_44;
    QPushButton *testGroupMemberAttribute;
    QPushButton *testComputerMacAddressAttribute;
    QPushButton *testComputerRoomNameAttribute;
    QPushButton *testComputerRoomAttribute;
    QLineEdit *computerRoomAttribute;
    QLabel *label_38;
    QPushButton *testUserLoginAttribute;
    QCheckBox *computerHostNameAsFQDN;
    QLabel *label_35;
    QLineEdit *userLoginAttribute;
    QLineEdit *computerMacAddressAttribute;
    QPushButton *testComputerHostNameAttribute;
    QLabel *label_42;
    QLineEdit *computerHostNameAttribute;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_15;
    QGroupBox *groupBox_15;
    QGridLayout *gridLayout_14;
    QLabel *label_37;
    QPushButton *testComputersFilter;
    QLineEdit *computersFilter;
    QLineEdit *userGroupsFilter;
    QLineEdit *usersFilter;
    QLabel *label_34;
    QLabel *label_41;
    QPushButton *testUserGroupsFilter;
    QPushButton *testUsersFilter;
    QPushButton *testComputerGroupsFilter;
    QLabel *label_36;
    QLineEdit *computerGroupsFilter;
    QLabel *label_43;
    QLineEdit *computerContainersFilter;
    QPushButton *testComputerContainersFilter;
    QGroupBox *groupBox_16;
    QVBoxLayout *verticalLayout_14;
    QRadioButton *identifyGroupMembersByDN;
    QRadioButton *identifyGroupMembersByNameAttribute;
    QGroupBox *groupBox_13;
    QVBoxLayout *verticalLayout;
    QLabel *label_32;
    QRadioButton *computerRoomMembersByGroups;
    QRadioButton *computerRoomMembersByContainer;
    QRadioButton *computerRoomMembersByAttribute;
    QSpacerItem *verticalSpacer_11;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *testGroupsOfUser;
    QPushButton *testGroupsOfComputer;
    QPushButton *testComputerObjectByIpAddress;
    QPushButton *testComputerRoomMembers;
    QPushButton *testComputerRooms;
    QSpacerItem *verticalSpacer_10;
    QButtonGroup *bindConfigurationGroup;
    QButtonGroup *computerGroupingGroup;
    QButtonGroup *groupMemberMatchingGroup;
    QButtonGroup *baseDnConfigGroup;

    void setupUi(QWidget *LdapConfigurationPage)
    {
        if (LdapConfigurationPage->objectName().isEmpty())
            LdapConfigurationPage->setObjectName(QStringLiteral("LdapConfigurationPage"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/ldap/application-x-kexi-connectiondata.png"), QSize(), QIcon::Normal, QIcon::Off);
        LdapConfigurationPage->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(LdapConfigurationPage);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 0, -1, 0);
        tabWidget = new QTabWidget(LdapConfigurationPage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_2 = new QVBoxLayout(tab_4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        isLdapIntegrationEnabled = new QGroupBox(tab_4);
        isLdapIntegrationEnabled->setObjectName(QStringLiteral("isLdapIntegrationEnabled"));
        gridLayout_15 = new QGridLayout(isLdapIntegrationEnabled);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        anonymousBind = new QRadioButton(isLdapIntegrationEnabled);
        bindConfigurationGroup = new QButtonGroup(LdapConfigurationPage);
        bindConfigurationGroup->setObjectName(QStringLiteral("bindConfigurationGroup"));
        bindConfigurationGroup->addButton(anonymousBind);
        anonymousBind->setObjectName(QStringLiteral("anonymousBind"));
        anonymousBind->setChecked(true);

        horizontalLayout_12->addWidget(anonymousBind);

        useBindCredentials = new QRadioButton(isLdapIntegrationEnabled);
        bindConfigurationGroup->addButton(useBindCredentials);
        useBindCredentials->setObjectName(QStringLiteral("useBindCredentials"));

        horizontalLayout_12->addWidget(useBindCredentials);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_16);

        testBindInteractively = new QPushButton(isLdapIntegrationEnabled);
        testBindInteractively->setObjectName(QStringLiteral("testBindInteractively"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/ldap/dialog-ok-apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        testBindInteractively->setIcon(icon1);

        horizontalLayout_12->addWidget(testBindInteractively);


        gridLayout_15->addLayout(horizontalLayout_12, 2, 0, 1, 3);

        label_30 = new QLabel(isLdapIntegrationEnabled);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_15->addWidget(label_30, 3, 0, 1, 1);

        serverPort = new QSpinBox(isLdapIntegrationEnabled);
        serverPort->setObjectName(QStringLiteral("serverPort"));
        serverPort->setMaximum(65536);
        serverPort->setValue(389);

        gridLayout_15->addWidget(serverPort, 0, 2, 1, 1);

        label_31 = new QLabel(isLdapIntegrationEnabled);
        label_31->setObjectName(QStringLiteral("label_31"));

        gridLayout_15->addWidget(label_31, 4, 0, 1, 1);

        serverHost = new QLineEdit(isLdapIntegrationEnabled);
        serverHost->setObjectName(QStringLiteral("serverHost"));

        gridLayout_15->addWidget(serverHost, 0, 1, 1, 1);

        bindPassword = new QLineEdit(isLdapIntegrationEnabled);
        bindPassword->setObjectName(QStringLiteral("bindPassword"));
        bindPassword->setEnabled(false);
        bindPassword->setEchoMode(QLineEdit::Password);

        gridLayout_15->addWidget(bindPassword, 4, 1, 1, 2);

        label_27 = new QLabel(isLdapIntegrationEnabled);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_15->addWidget(label_27, 0, 0, 1, 1);

        bindDn = new QLineEdit(isLdapIntegrationEnabled);
        bindDn->setObjectName(QStringLiteral("bindDn"));
        bindDn->setEnabled(false);

        gridLayout_15->addWidget(bindDn, 3, 1, 1, 2);


        verticalLayout_2->addWidget(isLdapIntegrationEnabled);

        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        tlsCACertificateFile = new QLineEdit(groupBox);
        tlsCACertificateFile->setObjectName(QStringLiteral("tlsCACertificateFile"));
        tlsCACertificateFile->setEnabled(false);

        gridLayout->addWidget(tlsCACertificateFile, 2, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        tlsVerifyMode = new QComboBox(groupBox);
        tlsVerifyMode->setObjectName(QStringLiteral("tlsVerifyMode"));

        gridLayout->addWidget(tlsVerifyMode, 1, 1, 1, 2);

        connectionSecurity = new QComboBox(groupBox);
        connectionSecurity->setObjectName(QStringLiteral("connectionSecurity"));

        gridLayout->addWidget(connectionSecurity, 0, 1, 1, 2);

        browseCACertificateFile = new QToolButton(groupBox);
        browseCACertificateFile->setObjectName(QStringLiteral("browseCACertificateFile"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        browseCACertificateFile->setIcon(icon2);

        gridLayout->addWidget(browseCACertificateFile, 2, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupBox_14 = new QGroupBox(tab_4);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        gridLayout_20 = new QGridLayout(groupBox_14);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        testBaseDn = new QPushButton(groupBox_14);
        testBaseDn->setObjectName(QStringLiteral("testBaseDn"));
        testBaseDn->setIcon(icon1);

        gridLayout_20->addWidget(testBaseDn, 0, 2, 1, 1);

        isFixedBaseDn = new QRadioButton(groupBox_14);
        baseDnConfigGroup = new QButtonGroup(LdapConfigurationPage);
        baseDnConfigGroup->setObjectName(QStringLiteral("baseDnConfigGroup"));
        baseDnConfigGroup->addButton(isFixedBaseDn);
        isFixedBaseDn->setObjectName(QStringLiteral("isFixedBaseDn"));
        isFixedBaseDn->setChecked(true);

        gridLayout_20->addWidget(isFixedBaseDn, 0, 0, 1, 1);

        baseDn = new QLineEdit(groupBox_14);
        baseDn->setObjectName(QStringLiteral("baseDn"));

        gridLayout_20->addWidget(baseDn, 0, 1, 1, 1);

        queryNamingContext = new QRadioButton(groupBox_14);
        baseDnConfigGroup->addButton(queryNamingContext);
        queryNamingContext->setObjectName(QStringLiteral("queryNamingContext"));

        gridLayout_20->addWidget(queryNamingContext, 1, 0, 1, 1);

        namingContextAttribute = new QLineEdit(groupBox_14);
        namingContextAttribute->setObjectName(QStringLiteral("namingContextAttribute"));
        namingContextAttribute->setEnabled(false);

        gridLayout_20->addWidget(namingContextAttribute, 1, 1, 1, 1);

        testNamingContext = new QPushButton(groupBox_14);
        testNamingContext->setObjectName(QStringLiteral("testNamingContext"));
        testNamingContext->setEnabled(false);
        testNamingContext->setIcon(icon1);

        gridLayout_20->addWidget(testNamingContext, 1, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox_14);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox_17 = new QGroupBox(tab);
        groupBox_17->setObjectName(QStringLiteral("groupBox_17"));
        gridLayout_21 = new QGridLayout(groupBox_17);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        userTree = new QLineEdit(groupBox_17);
        userTree->setObjectName(QStringLiteral("userTree"));

        gridLayout_21->addWidget(userTree, 0, 1, 1, 1);

        label_29 = new QLabel(groupBox_17);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_21->addWidget(label_29, 2, 0, 1, 1);

        groupTree = new QLineEdit(groupBox_17);
        groupTree->setObjectName(QStringLiteral("groupTree"));

        gridLayout_21->addWidget(groupTree, 1, 1, 1, 1);

        testComputerGroupTree = new QPushButton(groupBox_17);
        testComputerGroupTree->setObjectName(QStringLiteral("testComputerGroupTree"));
        testComputerGroupTree->setIcon(icon1);

        gridLayout_21->addWidget(testComputerGroupTree, 3, 2, 1, 1);

        recursiveSearchOperations = new QCheckBox(groupBox_17);
        recursiveSearchOperations->setObjectName(QStringLiteral("recursiveSearchOperations"));

        gridLayout_21->addWidget(recursiveSearchOperations, 4, 0, 1, 3);

        label_28 = new QLabel(groupBox_17);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_21->addWidget(label_28, 1, 0, 1, 1);

        testGroupTree = new QPushButton(groupBox_17);
        testGroupTree->setObjectName(QStringLiteral("testGroupTree"));
        testGroupTree->setIcon(icon1);

        gridLayout_21->addWidget(testGroupTree, 1, 2, 1, 1);

        testUserTree = new QPushButton(groupBox_17);
        testUserTree->setObjectName(QStringLiteral("testUserTree"));
        testUserTree->setIcon(icon1);

        gridLayout_21->addWidget(testUserTree, 0, 2, 1, 1);

        label_40 = new QLabel(groupBox_17);
        label_40->setObjectName(QStringLiteral("label_40"));

        gridLayout_21->addWidget(label_40, 3, 0, 1, 1);

        label_16 = new QLabel(groupBox_17);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_21->addWidget(label_16, 0, 0, 1, 1);

        testComputerTree = new QPushButton(groupBox_17);
        testComputerTree->setObjectName(QStringLiteral("testComputerTree"));
        testComputerTree->setIcon(icon1);

        gridLayout_21->addWidget(testComputerTree, 2, 2, 1, 1);

        computerTree = new QLineEdit(groupBox_17);
        computerTree->setObjectName(QStringLiteral("computerTree"));

        gridLayout_21->addWidget(computerTree, 2, 1, 1, 1);

        computerGroupTree = new QLineEdit(groupBox_17);
        computerGroupTree->setObjectName(QStringLiteral("computerGroupTree"));

        gridLayout_21->addWidget(computerGroupTree, 3, 1, 1, 1);


        verticalLayout_6->addWidget(groupBox_17);

        groupBox_18 = new QGroupBox(tab);
        groupBox_18->setObjectName(QStringLiteral("groupBox_18"));
        gridLayout_22 = new QGridLayout(groupBox_18);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        groupMemberAttribute = new QLineEdit(groupBox_18);
        groupMemberAttribute->setObjectName(QStringLiteral("groupMemberAttribute"));

        gridLayout_22->addWidget(groupMemberAttribute, 1, 1, 1, 1);

        computerRoomNameAttribute = new QLineEdit(groupBox_18);
        computerRoomNameAttribute->setObjectName(QStringLiteral("computerRoomNameAttribute"));

        gridLayout_22->addWidget(computerRoomNameAttribute, 6, 1, 1, 1);

        label_33 = new QLabel(groupBox_18);
        label_33->setObjectName(QStringLiteral("label_33"));

        gridLayout_22->addWidget(label_33, 0, 0, 1, 1);

        label_39 = new QLabel(groupBox_18);
        label_39->setObjectName(QStringLiteral("label_39"));

        gridLayout_22->addWidget(label_39, 4, 0, 1, 1);

        label_44 = new QLabel(groupBox_18);
        label_44->setObjectName(QStringLiteral("label_44"));

        gridLayout_22->addWidget(label_44, 5, 0, 1, 1);

        testGroupMemberAttribute = new QPushButton(groupBox_18);
        testGroupMemberAttribute->setObjectName(QStringLiteral("testGroupMemberAttribute"));
        testGroupMemberAttribute->setIcon(icon1);

        gridLayout_22->addWidget(testGroupMemberAttribute, 1, 2, 1, 1);

        testComputerMacAddressAttribute = new QPushButton(groupBox_18);
        testComputerMacAddressAttribute->setObjectName(QStringLiteral("testComputerMacAddressAttribute"));
        testComputerMacAddressAttribute->setIcon(icon1);

        gridLayout_22->addWidget(testComputerMacAddressAttribute, 4, 2, 1, 1);

        testComputerRoomNameAttribute = new QPushButton(groupBox_18);
        testComputerRoomNameAttribute->setObjectName(QStringLiteral("testComputerRoomNameAttribute"));
        testComputerRoomNameAttribute->setIcon(icon1);

        gridLayout_22->addWidget(testComputerRoomNameAttribute, 6, 2, 1, 1);

        testComputerRoomAttribute = new QPushButton(groupBox_18);
        testComputerRoomAttribute->setObjectName(QStringLiteral("testComputerRoomAttribute"));
        testComputerRoomAttribute->setIcon(icon1);

        gridLayout_22->addWidget(testComputerRoomAttribute, 5, 2, 1, 1);

        computerRoomAttribute = new QLineEdit(groupBox_18);
        computerRoomAttribute->setObjectName(QStringLiteral("computerRoomAttribute"));

        gridLayout_22->addWidget(computerRoomAttribute, 5, 1, 1, 1);

        label_38 = new QLabel(groupBox_18);
        label_38->setObjectName(QStringLiteral("label_38"));

        gridLayout_22->addWidget(label_38, 2, 0, 1, 1);

        testUserLoginAttribute = new QPushButton(groupBox_18);
        testUserLoginAttribute->setObjectName(QStringLiteral("testUserLoginAttribute"));
        testUserLoginAttribute->setIcon(icon1);

        gridLayout_22->addWidget(testUserLoginAttribute, 0, 2, 1, 1);

        computerHostNameAsFQDN = new QCheckBox(groupBox_18);
        computerHostNameAsFQDN->setObjectName(QStringLiteral("computerHostNameAsFQDN"));

        gridLayout_22->addWidget(computerHostNameAsFQDN, 3, 0, 1, 3);

        label_35 = new QLabel(groupBox_18);
        label_35->setObjectName(QStringLiteral("label_35"));

        gridLayout_22->addWidget(label_35, 1, 0, 1, 1);

        userLoginAttribute = new QLineEdit(groupBox_18);
        userLoginAttribute->setObjectName(QStringLiteral("userLoginAttribute"));

        gridLayout_22->addWidget(userLoginAttribute, 0, 1, 1, 1);

        computerMacAddressAttribute = new QLineEdit(groupBox_18);
        computerMacAddressAttribute->setObjectName(QStringLiteral("computerMacAddressAttribute"));

        gridLayout_22->addWidget(computerMacAddressAttribute, 4, 1, 1, 1);

        testComputerHostNameAttribute = new QPushButton(groupBox_18);
        testComputerHostNameAttribute->setObjectName(QStringLiteral("testComputerHostNameAttribute"));
        testComputerHostNameAttribute->setIcon(icon1);

        gridLayout_22->addWidget(testComputerHostNameAttribute, 2, 2, 1, 1);

        label_42 = new QLabel(groupBox_18);
        label_42->setObjectName(QStringLiteral("label_42"));

        gridLayout_22->addWidget(label_42, 6, 0, 1, 1);

        computerHostNameAttribute = new QLineEdit(groupBox_18);
        computerHostNameAttribute->setObjectName(QStringLiteral("computerHostNameAttribute"));

        gridLayout_22->addWidget(computerHostNameAttribute, 2, 1, 1, 1);


        verticalLayout_6->addWidget(groupBox_18);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_15 = new QVBoxLayout(tab_2);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        groupBox_15 = new QGroupBox(tab_2);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        gridLayout_14 = new QGridLayout(groupBox_15);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        label_37 = new QLabel(groupBox_15);
        label_37->setObjectName(QStringLiteral("label_37"));

        gridLayout_14->addWidget(label_37, 3, 0, 1, 1);

        testComputersFilter = new QPushButton(groupBox_15);
        testComputersFilter->setObjectName(QStringLiteral("testComputersFilter"));
        testComputersFilter->setIcon(icon1);

        gridLayout_14->addWidget(testComputersFilter, 2, 2, 1, 1);

        computersFilter = new QLineEdit(groupBox_15);
        computersFilter->setObjectName(QStringLiteral("computersFilter"));

        gridLayout_14->addWidget(computersFilter, 2, 1, 1, 1);

        userGroupsFilter = new QLineEdit(groupBox_15);
        userGroupsFilter->setObjectName(QStringLiteral("userGroupsFilter"));

        gridLayout_14->addWidget(userGroupsFilter, 1, 1, 1, 1);

        usersFilter = new QLineEdit(groupBox_15);
        usersFilter->setObjectName(QStringLiteral("usersFilter"));

        gridLayout_14->addWidget(usersFilter, 0, 1, 1, 1);

        label_34 = new QLabel(groupBox_15);
        label_34->setObjectName(QStringLiteral("label_34"));

        gridLayout_14->addWidget(label_34, 0, 0, 1, 1);

        label_41 = new QLabel(groupBox_15);
        label_41->setObjectName(QStringLiteral("label_41"));

        gridLayout_14->addWidget(label_41, 2, 0, 1, 1);

        testUserGroupsFilter = new QPushButton(groupBox_15);
        testUserGroupsFilter->setObjectName(QStringLiteral("testUserGroupsFilter"));
        testUserGroupsFilter->setIcon(icon1);

        gridLayout_14->addWidget(testUserGroupsFilter, 1, 2, 1, 1);

        testUsersFilter = new QPushButton(groupBox_15);
        testUsersFilter->setObjectName(QStringLiteral("testUsersFilter"));
        testUsersFilter->setIcon(icon1);

        gridLayout_14->addWidget(testUsersFilter, 0, 2, 1, 1);

        testComputerGroupsFilter = new QPushButton(groupBox_15);
        testComputerGroupsFilter->setObjectName(QStringLiteral("testComputerGroupsFilter"));
        testComputerGroupsFilter->setIcon(icon1);

        gridLayout_14->addWidget(testComputerGroupsFilter, 3, 2, 1, 1);

        label_36 = new QLabel(groupBox_15);
        label_36->setObjectName(QStringLiteral("label_36"));

        gridLayout_14->addWidget(label_36, 1, 0, 1, 1);

        computerGroupsFilter = new QLineEdit(groupBox_15);
        computerGroupsFilter->setObjectName(QStringLiteral("computerGroupsFilter"));

        gridLayout_14->addWidget(computerGroupsFilter, 3, 1, 1, 1);

        label_43 = new QLabel(groupBox_15);
        label_43->setObjectName(QStringLiteral("label_43"));

        gridLayout_14->addWidget(label_43, 4, 0, 1, 1);

        computerContainersFilter = new QLineEdit(groupBox_15);
        computerContainersFilter->setObjectName(QStringLiteral("computerContainersFilter"));

        gridLayout_14->addWidget(computerContainersFilter, 4, 1, 1, 1);

        testComputerContainersFilter = new QPushButton(groupBox_15);
        testComputerContainersFilter->setObjectName(QStringLiteral("testComputerContainersFilter"));
        testComputerContainersFilter->setIcon(icon1);

        gridLayout_14->addWidget(testComputerContainersFilter, 4, 2, 1, 1);


        verticalLayout_15->addWidget(groupBox_15);

        groupBox_16 = new QGroupBox(tab_2);
        groupBox_16->setObjectName(QStringLiteral("groupBox_16"));
        verticalLayout_14 = new QVBoxLayout(groupBox_16);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        identifyGroupMembersByDN = new QRadioButton(groupBox_16);
        groupMemberMatchingGroup = new QButtonGroup(LdapConfigurationPage);
        groupMemberMatchingGroup->setObjectName(QStringLiteral("groupMemberMatchingGroup"));
        groupMemberMatchingGroup->addButton(identifyGroupMembersByDN);
        identifyGroupMembersByDN->setObjectName(QStringLiteral("identifyGroupMembersByDN"));
        identifyGroupMembersByDN->setChecked(true);

        verticalLayout_14->addWidget(identifyGroupMembersByDN);

        identifyGroupMembersByNameAttribute = new QRadioButton(groupBox_16);
        groupMemberMatchingGroup->addButton(identifyGroupMembersByNameAttribute);
        identifyGroupMembersByNameAttribute->setObjectName(QStringLiteral("identifyGroupMembersByNameAttribute"));

        verticalLayout_14->addWidget(identifyGroupMembersByNameAttribute);


        verticalLayout_15->addWidget(groupBox_16);

        groupBox_13 = new QGroupBox(tab_2);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        verticalLayout = new QVBoxLayout(groupBox_13);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_32 = new QLabel(groupBox_13);
        label_32->setObjectName(QStringLiteral("label_32"));

        verticalLayout->addWidget(label_32);

        computerRoomMembersByGroups = new QRadioButton(groupBox_13);
        computerGroupingGroup = new QButtonGroup(LdapConfigurationPage);
        computerGroupingGroup->setObjectName(QStringLiteral("computerGroupingGroup"));
        computerGroupingGroup->addButton(computerRoomMembersByGroups);
        computerRoomMembersByGroups->setObjectName(QStringLiteral("computerRoomMembersByGroups"));
        computerRoomMembersByGroups->setChecked(true);

        verticalLayout->addWidget(computerRoomMembersByGroups);

        computerRoomMembersByContainer = new QRadioButton(groupBox_13);
        computerGroupingGroup->addButton(computerRoomMembersByContainer);
        computerRoomMembersByContainer->setObjectName(QStringLiteral("computerRoomMembersByContainer"));

        verticalLayout->addWidget(computerRoomMembersByContainer);

        computerRoomMembersByAttribute = new QRadioButton(groupBox_13);
        computerGroupingGroup->addButton(computerRoomMembersByAttribute);
        computerRoomMembersByAttribute->setObjectName(QStringLiteral("computerRoomMembersByAttribute"));

        verticalLayout->addWidget(computerRoomMembersByAttribute);


        verticalLayout_15->addWidget(groupBox_13);

        verticalSpacer_11 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_15->addItem(verticalSpacer_11);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        testGroupsOfUser = new QPushButton(tab_3);
        testGroupsOfUser->setObjectName(QStringLiteral("testGroupsOfUser"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/ldap/user-group-properties.png"), QSize(), QIcon::Normal, QIcon::Off);
        testGroupsOfUser->setIcon(icon3);

        verticalLayout_3->addWidget(testGroupsOfUser);

        testGroupsOfComputer = new QPushButton(tab_3);
        testGroupsOfComputer->setObjectName(QStringLiteral("testGroupsOfComputer"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/ldap/computer.png"), QSize(), QIcon::Normal, QIcon::Off);
        testGroupsOfComputer->setIcon(icon4);

        verticalLayout_3->addWidget(testGroupsOfComputer);

        testComputerObjectByIpAddress = new QPushButton(tab_3);
        testComputerObjectByIpAddress->setObjectName(QStringLiteral("testComputerObjectByIpAddress"));
        testComputerObjectByIpAddress->setIcon(icon4);

        verticalLayout_3->addWidget(testComputerObjectByIpAddress);

        testComputerRoomMembers = new QPushButton(tab_3);
        testComputerRoomMembers->setObjectName(QStringLiteral("testComputerRoomMembers"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/ldap/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        testComputerRoomMembers->setIcon(icon5);

        verticalLayout_3->addWidget(testComputerRoomMembers);

        testComputerRooms = new QPushButton(tab_3);
        testComputerRooms->setObjectName(QStringLiteral("testComputerRooms"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/ldap/distribute-vertical-margin.png"), QSize(), QIcon::Normal, QIcon::Off);
        testComputerRooms->setIcon(icon6);

        verticalLayout_3->addWidget(testComputerRooms);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_10);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_4->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, serverHost);
        QWidget::setTabOrder(serverHost, serverPort);
        QWidget::setTabOrder(serverPort, anonymousBind);
        QWidget::setTabOrder(anonymousBind, useBindCredentials);
        QWidget::setTabOrder(useBindCredentials, testBindInteractively);
        QWidget::setTabOrder(testBindInteractively, bindDn);
        QWidget::setTabOrder(bindDn, bindPassword);
        QWidget::setTabOrder(bindPassword, connectionSecurity);
        QWidget::setTabOrder(connectionSecurity, tlsVerifyMode);
        QWidget::setTabOrder(tlsVerifyMode, tlsCACertificateFile);
        QWidget::setTabOrder(tlsCACertificateFile, browseCACertificateFile);
        QWidget::setTabOrder(browseCACertificateFile, isFixedBaseDn);
        QWidget::setTabOrder(isFixedBaseDn, baseDn);
        QWidget::setTabOrder(baseDn, testBaseDn);
        QWidget::setTabOrder(testBaseDn, queryNamingContext);
        QWidget::setTabOrder(queryNamingContext, namingContextAttribute);
        QWidget::setTabOrder(namingContextAttribute, testNamingContext);
        QWidget::setTabOrder(testNamingContext, userTree);
        QWidget::setTabOrder(userTree, groupTree);
        QWidget::setTabOrder(groupTree, computerTree);
        QWidget::setTabOrder(computerTree, computerGroupTree);
        QWidget::setTabOrder(computerGroupTree, testUserTree);
        QWidget::setTabOrder(testUserTree, testGroupTree);
        QWidget::setTabOrder(testGroupTree, testComputerTree);
        QWidget::setTabOrder(testComputerTree, testComputerGroupTree);
        QWidget::setTabOrder(testComputerGroupTree, recursiveSearchOperations);
        QWidget::setTabOrder(recursiveSearchOperations, userLoginAttribute);
        QWidget::setTabOrder(userLoginAttribute, groupMemberAttribute);
        QWidget::setTabOrder(groupMemberAttribute, computerHostNameAttribute);
        QWidget::setTabOrder(computerHostNameAttribute, computerHostNameAsFQDN);
        QWidget::setTabOrder(computerHostNameAsFQDN, computerMacAddressAttribute);
        QWidget::setTabOrder(computerMacAddressAttribute, computerRoomAttribute);
        QWidget::setTabOrder(computerRoomAttribute, computerRoomNameAttribute);
        QWidget::setTabOrder(computerRoomNameAttribute, testUserLoginAttribute);
        QWidget::setTabOrder(testUserLoginAttribute, testGroupMemberAttribute);
        QWidget::setTabOrder(testGroupMemberAttribute, testComputerHostNameAttribute);
        QWidget::setTabOrder(testComputerHostNameAttribute, testComputerMacAddressAttribute);
        QWidget::setTabOrder(testComputerMacAddressAttribute, testComputerRoomAttribute);
        QWidget::setTabOrder(testComputerRoomAttribute, testComputerRoomNameAttribute);
        QWidget::setTabOrder(testComputerRoomNameAttribute, usersFilter);
        QWidget::setTabOrder(usersFilter, userGroupsFilter);
        QWidget::setTabOrder(userGroupsFilter, computersFilter);
        QWidget::setTabOrder(computersFilter, computerGroupsFilter);
        QWidget::setTabOrder(computerGroupsFilter, computerContainersFilter);
        QWidget::setTabOrder(computerContainersFilter, testUsersFilter);
        QWidget::setTabOrder(testUsersFilter, testUserGroupsFilter);
        QWidget::setTabOrder(testUserGroupsFilter, testComputersFilter);
        QWidget::setTabOrder(testComputersFilter, testComputerGroupsFilter);
        QWidget::setTabOrder(testComputerGroupsFilter, testComputerContainersFilter);
        QWidget::setTabOrder(testComputerContainersFilter, identifyGroupMembersByDN);
        QWidget::setTabOrder(identifyGroupMembersByDN, identifyGroupMembersByNameAttribute);
        QWidget::setTabOrder(identifyGroupMembersByNameAttribute, computerRoomMembersByGroups);
        QWidget::setTabOrder(computerRoomMembersByGroups, computerRoomMembersByContainer);
        QWidget::setTabOrder(computerRoomMembersByContainer, computerRoomMembersByAttribute);
        QWidget::setTabOrder(computerRoomMembersByAttribute, testGroupsOfUser);
        QWidget::setTabOrder(testGroupsOfUser, testGroupsOfComputer);
        QWidget::setTabOrder(testGroupsOfComputer, testComputerObjectByIpAddress);
        QWidget::setTabOrder(testComputerObjectByIpAddress, testComputerRoomMembers);
        QWidget::setTabOrder(testComputerRoomMembers, testComputerRooms);

        retranslateUi(LdapConfigurationPage);
        QObject::connect(useBindCredentials, SIGNAL(toggled(bool)), bindPassword, SLOT(setEnabled(bool)));
        QObject::connect(useBindCredentials, SIGNAL(toggled(bool)), bindDn, SLOT(setEnabled(bool)));
        QObject::connect(isFixedBaseDn, SIGNAL(toggled(bool)), testBaseDn, SLOT(setEnabled(bool)));
        QObject::connect(queryNamingContext, SIGNAL(toggled(bool)), namingContextAttribute, SLOT(setEnabled(bool)));
        QObject::connect(isFixedBaseDn, SIGNAL(toggled(bool)), baseDn, SLOT(setEnabled(bool)));
        QObject::connect(queryNamingContext, SIGNAL(toggled(bool)), testNamingContext, SLOT(setEnabled(bool)));
        QObject::connect(isLdapIntegrationEnabled, SIGNAL(toggled(bool)), tabWidget, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LdapConfigurationPage);
    } // setupUi

    void retranslateUi(QWidget *LdapConfigurationPage)
    {
        LdapConfigurationPage->setWindowTitle(QApplication::translate("LdapConfigurationPage", "LDAP", Q_NULLPTR));
        isLdapIntegrationEnabled->setTitle(QApplication::translate("LdapConfigurationPage", "General", Q_NULLPTR));
        anonymousBind->setText(QApplication::translate("LdapConfigurationPage", "Anonymous bind", Q_NULLPTR));
        useBindCredentials->setText(QApplication::translate("LdapConfigurationPage", "Use bind credentials", Q_NULLPTR));
        testBindInteractively->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        label_30->setText(QApplication::translate("LdapConfigurationPage", "Bind DN", Q_NULLPTR));
        label_31->setText(QApplication::translate("LdapConfigurationPage", "Bind password", Q_NULLPTR));
        label_27->setText(QApplication::translate("LdapConfigurationPage", "LDAP server and port", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("LdapConfigurationPage", "Connection security", Q_NULLPTR));
        label_2->setText(QApplication::translate("LdapConfigurationPage", "TLS certificate verification", Q_NULLPTR));
        label->setText(QApplication::translate("LdapConfigurationPage", "Encryption protocol", Q_NULLPTR));
        tlsVerifyMode->clear();
        tlsVerifyMode->insertItems(0, QStringList()
         << QApplication::translate("LdapConfigurationPage", "System defaults", Q_NULLPTR)
         << QApplication::translate("LdapConfigurationPage", "Never (insecure!)", Q_NULLPTR)
         << QApplication::translate("LdapConfigurationPage", "Custom CA certificate file", Q_NULLPTR)
        );
        connectionSecurity->clear();
        connectionSecurity->insertItems(0, QStringList()
         << QApplication::translate("LdapConfigurationPage", "None", Q_NULLPTR)
         << QApplication::translate("LdapConfigurationPage", "TLS", Q_NULLPTR)
         << QApplication::translate("LdapConfigurationPage", "SSL", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("LdapConfigurationPage", "Custom CA certificate file", Q_NULLPTR));
        groupBox_14->setTitle(QApplication::translate("LdapConfigurationPage", "Base DN", Q_NULLPTR));
        testBaseDn->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        isFixedBaseDn->setText(QApplication::translate("LdapConfigurationPage", "Fixed base DN", Q_NULLPTR));
        baseDn->setPlaceholderText(QApplication::translate("LdapConfigurationPage", "e.g. dc=example,dc=org", Q_NULLPTR));
        queryNamingContext->setText(QApplication::translate("LdapConfigurationPage", "Discover base DN by naming context", Q_NULLPTR));
        namingContextAttribute->setPlaceholderText(QApplication::translate("LdapConfigurationPage", "e.g. namingContexts or defaultNamingContext", Q_NULLPTR));
        testNamingContext->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("LdapConfigurationPage", "Basic settings", Q_NULLPTR));
        groupBox_17->setTitle(QApplication::translate("LdapConfigurationPage", "Object trees", Q_NULLPTR));
        userTree->setPlaceholderText(QApplication::translate("LdapConfigurationPage", "e.g. OU=Users", Q_NULLPTR));
        label_29->setText(QApplication::translate("LdapConfigurationPage", "Computer tree", Q_NULLPTR));
        groupTree->setPlaceholderText(QApplication::translate("LdapConfigurationPage", "e.g. OU=Groups", Q_NULLPTR));
        testComputerGroupTree->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        recursiveSearchOperations->setText(QApplication::translate("LdapConfigurationPage", "Perform recursive search operations in object trees", Q_NULLPTR));
        label_28->setText(QApplication::translate("LdapConfigurationPage", "Group tree", Q_NULLPTR));
        testGroupTree->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        testUserTree->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        label_40->setText(QApplication::translate("LdapConfigurationPage", "Computer group tree", Q_NULLPTR));
        label_16->setText(QApplication::translate("LdapConfigurationPage", "User tree", Q_NULLPTR));
        testComputerTree->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        computerTree->setPlaceholderText(QApplication::translate("LdapConfigurationPage", "e.g. OU=Computers", Q_NULLPTR));
        computerGroupTree->setPlaceholderText(QApplication::translate("LdapConfigurationPage", "(only if different from group tree)", Q_NULLPTR));
        groupBox_18->setTitle(QApplication::translate("LdapConfigurationPage", "Object attributes", Q_NULLPTR));
        groupMemberAttribute->setPlaceholderText(QApplication::translate("LdapConfigurationPage", "e.g. member or memberUid", Q_NULLPTR));
        computerRoomNameAttribute->setPlaceholderText(QApplication::translate("LdapConfigurationPage", "e.g. name or description", Q_NULLPTR));
        label_33->setText(QApplication::translate("LdapConfigurationPage", "User login attribute", Q_NULLPTR));
        label_39->setText(QApplication::translate("LdapConfigurationPage", "Computer MAC address attribute", Q_NULLPTR));
        label_44->setText(QApplication::translate("LdapConfigurationPage", "Computer room attribute", Q_NULLPTR));
        testGroupMemberAttribute->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        testComputerMacAddressAttribute->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        testComputerRoomNameAttribute->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        testComputerRoomAttribute->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        computerRoomAttribute->setPlaceholderText(QApplication::translate("LdapConfigurationPage", "e.g. room or computerLab", Q_NULLPTR));
        label_38->setText(QApplication::translate("LdapConfigurationPage", "Computer host name attribute", Q_NULLPTR));
        testUserLoginAttribute->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        computerHostNameAsFQDN->setText(QApplication::translate("LdapConfigurationPage", "Host names stored as fully qualified domain names (FQDN, e.g. myhost.example.org)", Q_NULLPTR));
        label_35->setText(QApplication::translate("LdapConfigurationPage", "Group member attribute", Q_NULLPTR));
        userLoginAttribute->setPlaceholderText(QApplication::translate("LdapConfigurationPage", "e.g. uid or sAMAccountName", Q_NULLPTR));
        computerMacAddressAttribute->setPlaceholderText(QApplication::translate("LdapConfigurationPage", "e.g. hwAddress", Q_NULLPTR));
        testComputerHostNameAttribute->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        label_42->setText(QApplication::translate("LdapConfigurationPage", "Computer room name attribute", Q_NULLPTR));
        computerHostNameAttribute->setPlaceholderText(QApplication::translate("LdapConfigurationPage", "e.g. dNSHostName", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("LdapConfigurationPage", "Environment settings", Q_NULLPTR));
        groupBox_15->setTitle(QApplication::translate("LdapConfigurationPage", "Optional object filters", Q_NULLPTR));
        label_37->setText(QApplication::translate("LdapConfigurationPage", "Filter for computer groups", Q_NULLPTR));
        testComputersFilter->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        computersFilter->setPlaceholderText(QApplication::translate("LdapConfigurationPage", "e.g. (objectClass=computer)", Q_NULLPTR));
        userGroupsFilter->setPlaceholderText(QApplication::translate("LdapConfigurationPage", "e.g. (objectClass=group)", Q_NULLPTR));
        usersFilter->setPlaceholderText(QApplication::translate("LdapConfigurationPage", "e.g. (objectClass=person)", Q_NULLPTR));
        label_34->setText(QApplication::translate("LdapConfigurationPage", "Filter for users", Q_NULLPTR));
        label_41->setText(QApplication::translate("LdapConfigurationPage", "Filter for computers", Q_NULLPTR));
        testUserGroupsFilter->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        testUsersFilter->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        testComputerGroupsFilter->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        label_36->setText(QApplication::translate("LdapConfigurationPage", "Filter for user groups", Q_NULLPTR));
        computerGroupsFilter->setPlaceholderText(QApplication::translate("LdapConfigurationPage", "e.g. (objectClass=room) or (objectClass=computerLab)", Q_NULLPTR));
        label_43->setText(QApplication::translate("LdapConfigurationPage", "Filter for computer containers", Q_NULLPTR));
        computerContainersFilter->setPlaceholderText(QApplication::translate("LdapConfigurationPage", "e.g. (objectClass=container) or (objectClass=organizationalUnit)", Q_NULLPTR));
        testComputerContainersFilter->setText(QApplication::translate("LdapConfigurationPage", "Test", Q_NULLPTR));
        groupBox_16->setTitle(QApplication::translate("LdapConfigurationPage", "Group member identification", Q_NULLPTR));
        identifyGroupMembersByDN->setText(QApplication::translate("LdapConfigurationPage", "Distinguished name (Samba/AD)", Q_NULLPTR));
        identifyGroupMembersByNameAttribute->setText(QApplication::translate("LdapConfigurationPage", "Configured attribute for user login or computer host name (OpenLDAP)", Q_NULLPTR));
        groupBox_13->setTitle(QApplication::translate("LdapConfigurationPage", "Computer rooms", Q_NULLPTR));
        label_32->setText(QApplication::translate("LdapConfigurationPage", "Aggregate computers in a room via:", Q_NULLPTR));
        computerRoomMembersByGroups->setText(QApplication::translate("LdapConfigurationPage", "Computer groups", Q_NULLPTR));
        computerRoomMembersByContainer->setText(QApplication::translate("LdapConfigurationPage", "Computer containers or OUs", Q_NULLPTR));
        computerRoomMembersByAttribute->setText(QApplication::translate("LdapConfigurationPage", "Computer room attribute in computer objects", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("LdapConfigurationPage", "Advanced settings", Q_NULLPTR));
        testGroupsOfUser->setText(QApplication::translate("LdapConfigurationPage", "List all groups of a user", Q_NULLPTR));
        testGroupsOfComputer->setText(QApplication::translate("LdapConfigurationPage", "List all groups of a computer", Q_NULLPTR));
        testComputerObjectByIpAddress->setText(QApplication::translate("LdapConfigurationPage", "Get computer object by IP address", Q_NULLPTR));
        testComputerRoomMembers->setText(QApplication::translate("LdapConfigurationPage", "List all members of a computer room", Q_NULLPTR));
        testComputerRooms->setText(QApplication::translate("LdapConfigurationPage", "List all computer rooms", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("LdapConfigurationPage", "Integration tests", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LdapConfigurationPage: public Ui_LdapConfigurationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LDAPCONFIGURATIONPAGE_H
