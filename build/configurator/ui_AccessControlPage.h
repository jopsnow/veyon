/********************************************************************************
** Form generated from reading UI file 'AccessControlPage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCESSCONTROLPAGE_H
#define UI_ACCESSCONTROLPAGE_H

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
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccessControlPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_19;
    QGridLayout *gridLayout;
    QRadioButton *isAccessRestrictedToUserGroups;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *accessControlUserGroupsBackend;
    QPushButton *testUserGroupsAccessControlButton;
    QRadioButton *isAccessControlRulesProcessingEnabled;
    QPushButton *testAccessControlRulesButton;
    QRadioButton *skipAccessControl;
    QCheckBox *domainGroupsForAccessControlEnabled;
    QGroupBox *authorizedUserGroups;
    QGridLayout *gridLayout_18;
    QListWidget *allGroupsList;
    QLabel *label_40;
    QLabel *label_41;
    QListWidget *accessGroupsList;
    QLabel *label_42;
    QVBoxLayout *verticalLayout_18;
    QSpacerItem *verticalSpacer_15;
    QToolButton *addAccessGroupButton;
    QToolButton *removeAccessGroupButton;
    QSpacerItem *verticalSpacer_16;
    QGroupBox *accessControlRules;
    QGridLayout *gridLayout_23;
    QPushButton *addAccessControlRuleButton;
    QPushButton *removeAccessControlRule;
    QPushButton *moveAccessControlRuleDownButton;
    QListView *accessControlRulesView;
    QSpacerItem *verticalSpacer_12;
    QPushButton *moveAccessControlRuleUpButton;
    QPushButton *editAccessControlRuleButton;
    QButtonGroup *accessControlModeGroup;

    void setupUi(QWidget *AccessControlPage)
    {
        if (AccessControlPage->objectName().isEmpty())
            AccessControlPage->setObjectName(QStringLiteral("AccessControlPage"));
        AccessControlPage->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(AccessControlPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        groupBox_19 = new QGroupBox(AccessControlPage);
        groupBox_19->setObjectName(QStringLiteral("groupBox_19"));
        gridLayout = new QGridLayout(groupBox_19);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        isAccessRestrictedToUserGroups = new QRadioButton(groupBox_19);
        accessControlModeGroup = new QButtonGroup(AccessControlPage);
        accessControlModeGroup->setObjectName(QStringLiteral("accessControlModeGroup"));
        accessControlModeGroup->addButton(isAccessRestrictedToUserGroups);
        isAccessRestrictedToUserGroups->setObjectName(QStringLiteral("isAccessRestrictedToUserGroups"));

        gridLayout->addWidget(isAccessRestrictedToUserGroups, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox_19);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        accessControlUserGroupsBackend = new QComboBox(groupBox_19);
        accessControlUserGroupsBackend->setObjectName(QStringLiteral("accessControlUserGroupsBackend"));

        horizontalLayout->addWidget(accessControlUserGroupsBackend);

        horizontalLayout->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        testUserGroupsAccessControlButton = new QPushButton(groupBox_19);
        testUserGroupsAccessControlButton->setObjectName(QStringLiteral("testUserGroupsAccessControlButton"));
        testUserGroupsAccessControlButton->setEnabled(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/dialog-ok-apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        testUserGroupsAccessControlButton->setIcon(icon);

        gridLayout->addWidget(testUserGroupsAccessControlButton, 3, 1, 1, 1);

        isAccessControlRulesProcessingEnabled = new QRadioButton(groupBox_19);
        accessControlModeGroup->addButton(isAccessControlRulesProcessingEnabled);
        isAccessControlRulesProcessingEnabled->setObjectName(QStringLiteral("isAccessControlRulesProcessingEnabled"));

        gridLayout->addWidget(isAccessControlRulesProcessingEnabled, 4, 0, 1, 1);

        testAccessControlRulesButton = new QPushButton(groupBox_19);
        testAccessControlRulesButton->setObjectName(QStringLiteral("testAccessControlRulesButton"));
        testAccessControlRulesButton->setEnabled(false);
        testAccessControlRulesButton->setIcon(icon);

        gridLayout->addWidget(testAccessControlRulesButton, 4, 1, 1, 1);

        skipAccessControl = new QRadioButton(groupBox_19);
        accessControlModeGroup->addButton(skipAccessControl);
        skipAccessControl->setObjectName(QStringLiteral("skipAccessControl"));
        skipAccessControl->setChecked(true);

        gridLayout->addWidget(skipAccessControl, 2, 0, 1, 1);

        domainGroupsForAccessControlEnabled = new QCheckBox(groupBox_19);
        domainGroupsForAccessControlEnabled->setObjectName(QStringLiteral("domainGroupsForAccessControlEnabled"));

        gridLayout->addWidget(domainGroupsForAccessControlEnabled, 1, 0, 1, 2);

        gridLayout->setColumnStretch(0, 1);

        verticalLayout->addWidget(groupBox_19);

        authorizedUserGroups = new QGroupBox(AccessControlPage);
        authorizedUserGroups->setObjectName(QStringLiteral("authorizedUserGroups"));
        authorizedUserGroups->setEnabled(false);
        gridLayout_18 = new QGridLayout(authorizedUserGroups);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        allGroupsList = new QListWidget(authorizedUserGroups);
        allGroupsList->setObjectName(QStringLiteral("allGroupsList"));
        allGroupsList->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        allGroupsList->setSortingEnabled(true);

        gridLayout_18->addWidget(allGroupsList, 2, 0, 1, 1);

        label_40 = new QLabel(authorizedUserGroups);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setWordWrap(true);

        gridLayout_18->addWidget(label_40, 0, 0, 1, 3);

        label_41 = new QLabel(authorizedUserGroups);
        label_41->setObjectName(QStringLiteral("label_41"));

        gridLayout_18->addWidget(label_41, 1, 2, 1, 1);

        accessGroupsList = new QListWidget(authorizedUserGroups);
        accessGroupsList->setObjectName(QStringLiteral("accessGroupsList"));
        accessGroupsList->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        accessGroupsList->setSortingEnabled(true);

        gridLayout_18->addWidget(accessGroupsList, 2, 2, 1, 1);

        label_42 = new QLabel(authorizedUserGroups);
        label_42->setObjectName(QStringLiteral("label_42"));

        gridLayout_18->addWidget(label_42, 1, 0, 1, 1);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_15);

        addAccessGroupButton = new QToolButton(authorizedUserGroups);
        addAccessGroupButton->setObjectName(QStringLiteral("addAccessGroupButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/go-next.png"), QSize(), QIcon::Normal, QIcon::Off);
        addAccessGroupButton->setIcon(icon1);

        verticalLayout_18->addWidget(addAccessGroupButton);

        removeAccessGroupButton = new QToolButton(authorizedUserGroups);
        removeAccessGroupButton->setObjectName(QStringLiteral("removeAccessGroupButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/go-previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeAccessGroupButton->setIcon(icon2);

        verticalLayout_18->addWidget(removeAccessGroupButton);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_16);


        gridLayout_18->addLayout(verticalLayout_18, 2, 1, 1, 1);


        verticalLayout->addWidget(authorizedUserGroups);

        accessControlRules = new QGroupBox(AccessControlPage);
        accessControlRules->setObjectName(QStringLiteral("accessControlRules"));
        accessControlRules->setEnabled(false);
        gridLayout_23 = new QGridLayout(accessControlRules);
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        addAccessControlRuleButton = new QPushButton(accessControlRules);
        addAccessControlRuleButton->setObjectName(QStringLiteral("addAccessControlRuleButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addAccessControlRuleButton->setIcon(icon3);

        gridLayout_23->addWidget(addAccessControlRuleButton, 0, 1, 1, 1);

        removeAccessControlRule = new QPushButton(accessControlRules);
        removeAccessControlRule->setObjectName(QStringLiteral("removeAccessControlRule"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeAccessControlRule->setIcon(icon4);

        gridLayout_23->addWidget(removeAccessControlRule, 1, 1, 1, 1);

        moveAccessControlRuleDownButton = new QPushButton(accessControlRules);
        moveAccessControlRuleDownButton->setObjectName(QStringLiteral("moveAccessControlRuleDownButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resources/go-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveAccessControlRuleDownButton->setIcon(icon5);

        gridLayout_23->addWidget(moveAccessControlRuleDownButton, 4, 1, 1, 1);

        accessControlRulesView = new QListView(accessControlRules);
        accessControlRulesView->setObjectName(QStringLiteral("accessControlRulesView"));
        accessControlRulesView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        accessControlRulesView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_23->addWidget(accessControlRulesView, 0, 0, 6, 1);

        verticalSpacer_12 = new QSpacerItem(20, 88, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_23->addItem(verticalSpacer_12, 5, 1, 1, 1);

        moveAccessControlRuleUpButton = new QPushButton(accessControlRules);
        moveAccessControlRuleUpButton->setObjectName(QStringLiteral("moveAccessControlRuleUpButton"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resources/go-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveAccessControlRuleUpButton->setIcon(icon6);

        gridLayout_23->addWidget(moveAccessControlRuleUpButton, 3, 1, 1, 1);

        editAccessControlRuleButton = new QPushButton(accessControlRules);
        editAccessControlRuleButton->setObjectName(QStringLiteral("editAccessControlRuleButton"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resources/document-edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        editAccessControlRuleButton->setIcon(icon7);

        gridLayout_23->addWidget(editAccessControlRuleButton, 2, 1, 1, 1);


        verticalLayout->addWidget(accessControlRules);

        QWidget::setTabOrder(skipAccessControl, isAccessRestrictedToUserGroups);
        QWidget::setTabOrder(isAccessRestrictedToUserGroups, isAccessControlRulesProcessingEnabled);
        QWidget::setTabOrder(isAccessControlRulesProcessingEnabled, testUserGroupsAccessControlButton);
        QWidget::setTabOrder(testUserGroupsAccessControlButton, testAccessControlRulesButton);
        QWidget::setTabOrder(testAccessControlRulesButton, allGroupsList);
        QWidget::setTabOrder(allGroupsList, addAccessGroupButton);
        QWidget::setTabOrder(addAccessGroupButton, removeAccessGroupButton);
        QWidget::setTabOrder(removeAccessGroupButton, accessGroupsList);
        QWidget::setTabOrder(accessGroupsList, accessControlRulesView);
        QWidget::setTabOrder(accessControlRulesView, addAccessControlRuleButton);
        QWidget::setTabOrder(addAccessControlRuleButton, removeAccessControlRule);
        QWidget::setTabOrder(removeAccessControlRule, editAccessControlRuleButton);
        QWidget::setTabOrder(editAccessControlRuleButton, moveAccessControlRuleUpButton);
        QWidget::setTabOrder(moveAccessControlRuleUpButton, moveAccessControlRuleDownButton);

        retranslateUi(AccessControlPage);
        QObject::connect(addAccessGroupButton, SIGNAL(clicked()), AccessControlPage, SLOT(addAccessGroup()));
        QObject::connect(removeAccessGroupButton, SIGNAL(clicked()), AccessControlPage, SLOT(removeAccessGroup()));
        QObject::connect(addAccessControlRuleButton, SIGNAL(clicked()), AccessControlPage, SLOT(addAccessControlRule()));
        QObject::connect(removeAccessControlRule, SIGNAL(clicked()), AccessControlPage, SLOT(removeAccessControlRule()));
        QObject::connect(editAccessControlRuleButton, SIGNAL(clicked()), AccessControlPage, SLOT(editAccessControlRule()));
        QObject::connect(moveAccessControlRuleDownButton, SIGNAL(clicked()), AccessControlPage, SLOT(moveAccessControlRuleDown()));
        QObject::connect(moveAccessControlRuleUpButton, SIGNAL(clicked()), AccessControlPage, SLOT(moveAccessControlRuleUp()));
        QObject::connect(isAccessRestrictedToUserGroups, SIGNAL(toggled(bool)), authorizedUserGroups, SLOT(setEnabled(bool)));
        QObject::connect(isAccessControlRulesProcessingEnabled, SIGNAL(toggled(bool)), accessControlRules, SLOT(setEnabled(bool)));
        QObject::connect(accessControlRulesView, SIGNAL(doubleClicked(QModelIndex)), AccessControlPage, SLOT(editAccessControlRule()));
        QObject::connect(testUserGroupsAccessControlButton, SIGNAL(clicked()), AccessControlPage, SLOT(testUserGroupsAccessControl()));
        QObject::connect(testAccessControlRulesButton, SIGNAL(clicked()), AccessControlPage, SLOT(testAccessControlRules()));
        QObject::connect(isAccessRestrictedToUserGroups, SIGNAL(toggled(bool)), testUserGroupsAccessControlButton, SLOT(setEnabled(bool)));
        QObject::connect(isAccessControlRulesProcessingEnabled, SIGNAL(toggled(bool)), testAccessControlRulesButton, SLOT(setEnabled(bool)));
        QObject::connect(allGroupsList, SIGNAL(doubleClicked(QModelIndex)), AccessControlPage, SLOT(addAccessGroup()));
        QObject::connect(accessGroupsList, SIGNAL(doubleClicked(QModelIndex)), AccessControlPage, SLOT(removeAccessGroup()));

        QMetaObject::connectSlotsByName(AccessControlPage);
    } // setupUi

    void retranslateUi(QWidget *AccessControlPage)
    {
        groupBox_19->setTitle(QApplication::translate("AccessControlPage", "Computer access control", Q_NULLPTR));
        isAccessRestrictedToUserGroups->setText(QApplication::translate("AccessControlPage", "Restrict access to members of certain user groups", Q_NULLPTR));
        label->setText(QApplication::translate("AccessControlPage", "User groups backend:", Q_NULLPTR));
        testUserGroupsAccessControlButton->setText(QApplication::translate("AccessControlPage", "Test", Q_NULLPTR));
        isAccessControlRulesProcessingEnabled->setText(QApplication::translate("AccessControlPage", "Process access control rules", Q_NULLPTR));
        testAccessControlRulesButton->setText(QApplication::translate("AccessControlPage", "Test", Q_NULLPTR));
        skipAccessControl->setText(QApplication::translate("AccessControlPage", "Grant access to every authenticated user (default)", Q_NULLPTR));
        domainGroupsForAccessControlEnabled->setText(QApplication::translate("AccessControlPage", "Enable usage of domain groups", Q_NULLPTR));
        authorizedUserGroups->setTitle(QApplication::translate("AccessControlPage", "User groups authorized for computer access", Q_NULLPTR));
        label_40->setText(QApplication::translate("AccessControlPage", "Please add the groups whose members should be authorized to access computers in your Veyon network.", Q_NULLPTR));
        label_41->setText(QApplication::translate("AccessControlPage", "Authorized user groups", Q_NULLPTR));
        label_42->setText(QApplication::translate("AccessControlPage", "All groups", Q_NULLPTR));
        addAccessGroupButton->setText(QApplication::translate("AccessControlPage", "...", Q_NULLPTR));
        removeAccessGroupButton->setText(QApplication::translate("AccessControlPage", "...", Q_NULLPTR));
        accessControlRules->setTitle(QApplication::translate("AccessControlPage", "Access control rules", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addAccessControlRuleButton->setToolTip(QApplication::translate("AccessControlPage", "Add access control rule", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addAccessControlRuleButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        removeAccessControlRule->setToolTip(QApplication::translate("AccessControlPage", "Remove access control rule", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        removeAccessControlRule->setText(QString());
#ifndef QT_NO_TOOLTIP
        moveAccessControlRuleDownButton->setToolTip(QApplication::translate("AccessControlPage", "Move selected rule down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        moveAccessControlRuleDownButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        moveAccessControlRuleUpButton->setToolTip(QApplication::translate("AccessControlPage", "Move selected rule up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        moveAccessControlRuleUpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        editAccessControlRuleButton->setToolTip(QApplication::translate("AccessControlPage", "Edit selected rule", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        editAccessControlRuleButton->setText(QString());
        Q_UNUSED(AccessControlPage);
    } // retranslateUi

};

namespace Ui {
    class AccessControlPage: public Ui_AccessControlPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCESSCONTROLPAGE_H
