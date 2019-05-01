/********************************************************************************
** Form generated from reading UI file 'AccessControlRuleEditDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCESSCONTROLRULEEDITDIALOG_H
#define UI_ACCESSCONTROLRULEEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AccessControlRuleEditDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLineEdit *ruleNameLineEdit;
    QLabel *label_3;
    QLineEdit *ruleDescriptionLineEdit;
    QLabel *label_4;
    QCheckBox *invertConditionsCheckBox;
    QCheckBox *ignoreConditionsCheckBox;
    QGroupBox *conditionsGroupBox;
    QGridLayout *gridLayout;
    QComboBox *roomsComboBox;
    QLabel *label_2;
    QCheckBox *isMemberOfGroupCheckBox;
    QComboBox *isMemberOfGroupSubjectComboBox;
    QLabel *label;
    QCheckBox *isLocatedInSameRoomCheckBox;
    QCheckBox *noUserLoggedOnCheckBox;
    QLabel *label_6;
    QComboBox *isLocatedInRoomSubjectComboBox;
    QComboBox *groupsComboBox;
    QCheckBox *isLocatedInRoomCheckBox;
    QCheckBox *isLocalHostAccessCheckBox;
    QCheckBox *hasCommonGroupsCheckBox;
    QCheckBox *isLocalUserAccessCheckBox;
    QCheckBox *isSameUserAccessCheckBox;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *actionAllowRadioButton;
    QRadioButton *actionDenyRadioButton;
    QRadioButton *actionAskForPermissionRadioButton;
    QRadioButton *actionNoneRadioButton;
    QDialogButtonBox *buttonBox;
    QButtonGroup *actionButtonGroup;

    void setupUi(QDialog *AccessControlRuleEditDialog)
    {
        if (AccessControlRuleEditDialog->objectName().isEmpty())
            AccessControlRuleEditDialog->setObjectName(QStringLiteral("AccessControlRuleEditDialog"));
        verticalLayout = new QVBoxLayout(AccessControlRuleEditDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_3 = new QGroupBox(AccessControlRuleEditDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        ruleNameLineEdit = new QLineEdit(groupBox_3);
        ruleNameLineEdit->setObjectName(QStringLiteral("ruleNameLineEdit"));

        gridLayout_3->addWidget(ruleNameLineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        ruleDescriptionLineEdit = new QLineEdit(groupBox_3);
        ruleDescriptionLineEdit->setObjectName(QStringLiteral("ruleDescriptionLineEdit"));

        gridLayout_3->addWidget(ruleDescriptionLineEdit, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 1, 0, 1, 1);

        invertConditionsCheckBox = new QCheckBox(groupBox_3);
        invertConditionsCheckBox->setObjectName(QStringLiteral("invertConditionsCheckBox"));

        gridLayout_3->addWidget(invertConditionsCheckBox, 3, 0, 1, 2);

        ignoreConditionsCheckBox = new QCheckBox(groupBox_3);
        ignoreConditionsCheckBox->setObjectName(QStringLiteral("ignoreConditionsCheckBox"));

        gridLayout_3->addWidget(ignoreConditionsCheckBox, 2, 0, 1, 2);


        verticalLayout->addWidget(groupBox_3);

        conditionsGroupBox = new QGroupBox(AccessControlRuleEditDialog);
        conditionsGroupBox->setObjectName(QStringLiteral("conditionsGroupBox"));
        gridLayout = new QGridLayout(conditionsGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        roomsComboBox = new QComboBox(conditionsGroupBox);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));
        roomsComboBox->setEnabled(false);
        roomsComboBox->setEditable(true);
        roomsComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(roomsComboBox, 2, 3, 1, 1);

        label_2 = new QLabel(conditionsGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        isMemberOfGroupCheckBox = new QCheckBox(conditionsGroupBox);
        isMemberOfGroupCheckBox->setObjectName(QStringLiteral("isMemberOfGroupCheckBox"));

        gridLayout->addWidget(isMemberOfGroupCheckBox, 0, 0, 1, 1);

        isMemberOfGroupSubjectComboBox = new QComboBox(conditionsGroupBox);
        isMemberOfGroupSubjectComboBox->setObjectName(QStringLiteral("isMemberOfGroupSubjectComboBox"));
        isMemberOfGroupSubjectComboBox->setEnabled(false);
        isMemberOfGroupSubjectComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(isMemberOfGroupSubjectComboBox, 0, 1, 1, 1);

        label = new QLabel(conditionsGroupBox);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setItalic(true);
        label->setFont(font);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 10, 0, 1, 4);

        isLocatedInSameRoomCheckBox = new QCheckBox(conditionsGroupBox);
        isLocatedInSameRoomCheckBox->setObjectName(QStringLiteral("isLocatedInSameRoomCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(isLocatedInSameRoomCheckBox->sizePolicy().hasHeightForWidth());
        isLocatedInSameRoomCheckBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(isLocatedInSameRoomCheckBox, 3, 0, 1, 4);

        noUserLoggedOnCheckBox = new QCheckBox(conditionsGroupBox);
        noUserLoggedOnCheckBox->setObjectName(QStringLiteral("noUserLoggedOnCheckBox"));

        gridLayout->addWidget(noUserLoggedOnCheckBox, 8, 0, 1, 4);

        label_6 = new QLabel(conditionsGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 2, 1, 1);

        isLocatedInRoomSubjectComboBox = new QComboBox(conditionsGroupBox);
        isLocatedInRoomSubjectComboBox->setObjectName(QStringLiteral("isLocatedInRoomSubjectComboBox"));
        isLocatedInRoomSubjectComboBox->setEnabled(false);
        isLocatedInRoomSubjectComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(isLocatedInRoomSubjectComboBox, 2, 1, 1, 1);

        groupsComboBox = new QComboBox(conditionsGroupBox);
        groupsComboBox->setObjectName(QStringLiteral("groupsComboBox"));
        groupsComboBox->setEnabled(false);
        groupsComboBox->setEditable(true);
        groupsComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(groupsComboBox, 0, 3, 1, 1);

        isLocatedInRoomCheckBox = new QCheckBox(conditionsGroupBox);
        isLocatedInRoomCheckBox->setObjectName(QStringLiteral("isLocatedInRoomCheckBox"));

        gridLayout->addWidget(isLocatedInRoomCheckBox, 2, 0, 1, 1);

        isLocalHostAccessCheckBox = new QCheckBox(conditionsGroupBox);
        isLocalHostAccessCheckBox->setObjectName(QStringLiteral("isLocalHostAccessCheckBox"));

        gridLayout->addWidget(isLocalHostAccessCheckBox, 4, 0, 1, 4);

        hasCommonGroupsCheckBox = new QCheckBox(conditionsGroupBox);
        hasCommonGroupsCheckBox->setObjectName(QStringLiteral("hasCommonGroupsCheckBox"));

        gridLayout->addWidget(hasCommonGroupsCheckBox, 5, 0, 1, 4);

        isLocalUserAccessCheckBox = new QCheckBox(conditionsGroupBox);
        isLocalUserAccessCheckBox->setObjectName(QStringLiteral("isLocalUserAccessCheckBox"));

        gridLayout->addWidget(isLocalUserAccessCheckBox, 6, 0, 1, 4);

        isSameUserAccessCheckBox = new QCheckBox(conditionsGroupBox);
        isSameUserAccessCheckBox->setObjectName(QStringLiteral("isSameUserAccessCheckBox"));

        gridLayout->addWidget(isSameUserAccessCheckBox, 7, 0, 1, 4);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(3, 1);

        verticalLayout->addWidget(conditionsGroupBox);

        groupBox_2 = new QGroupBox(AccessControlRuleEditDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        actionAllowRadioButton = new QRadioButton(groupBox_2);
        actionButtonGroup = new QButtonGroup(AccessControlRuleEditDialog);
        actionButtonGroup->setObjectName(QStringLiteral("actionButtonGroup"));
        actionButtonGroup->addButton(actionAllowRadioButton);
        actionAllowRadioButton->setObjectName(QStringLiteral("actionAllowRadioButton"));
        actionAllowRadioButton->setChecked(true);

        horizontalLayout_2->addWidget(actionAllowRadioButton);

        actionDenyRadioButton = new QRadioButton(groupBox_2);
        actionButtonGroup->addButton(actionDenyRadioButton);
        actionDenyRadioButton->setObjectName(QStringLiteral("actionDenyRadioButton"));

        horizontalLayout_2->addWidget(actionDenyRadioButton);

        actionAskForPermissionRadioButton = new QRadioButton(groupBox_2);
        actionButtonGroup->addButton(actionAskForPermissionRadioButton);
        actionAskForPermissionRadioButton->setObjectName(QStringLiteral("actionAskForPermissionRadioButton"));

        horizontalLayout_2->addWidget(actionAskForPermissionRadioButton);

        actionNoneRadioButton = new QRadioButton(groupBox_2);
        actionButtonGroup->addButton(actionNoneRadioButton);
        actionNoneRadioButton->setObjectName(QStringLiteral("actionNoneRadioButton"));

        horizontalLayout_2->addWidget(actionNoneRadioButton);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(AccessControlRuleEditDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(ruleNameLineEdit, ruleDescriptionLineEdit);
        QWidget::setTabOrder(ruleDescriptionLineEdit, ignoreConditionsCheckBox);
        QWidget::setTabOrder(ignoreConditionsCheckBox, invertConditionsCheckBox);
        QWidget::setTabOrder(invertConditionsCheckBox, isMemberOfGroupCheckBox);
        QWidget::setTabOrder(isMemberOfGroupCheckBox, isMemberOfGroupSubjectComboBox);
        QWidget::setTabOrder(isMemberOfGroupSubjectComboBox, groupsComboBox);
        QWidget::setTabOrder(groupsComboBox, isLocatedInRoomCheckBox);
        QWidget::setTabOrder(isLocatedInRoomCheckBox, isLocatedInRoomSubjectComboBox);
        QWidget::setTabOrder(isLocatedInRoomSubjectComboBox, roomsComboBox);
        QWidget::setTabOrder(roomsComboBox, isLocatedInSameRoomCheckBox);
        QWidget::setTabOrder(isLocatedInSameRoomCheckBox, isLocalHostAccessCheckBox);
        QWidget::setTabOrder(isLocalHostAccessCheckBox, hasCommonGroupsCheckBox);
        QWidget::setTabOrder(hasCommonGroupsCheckBox, isLocalUserAccessCheckBox);
        QWidget::setTabOrder(isLocalUserAccessCheckBox, isSameUserAccessCheckBox);
        QWidget::setTabOrder(isSameUserAccessCheckBox, noUserLoggedOnCheckBox);
        QWidget::setTabOrder(noUserLoggedOnCheckBox, actionAllowRadioButton);
        QWidget::setTabOrder(actionAllowRadioButton, actionDenyRadioButton);
        QWidget::setTabOrder(actionDenyRadioButton, actionAskForPermissionRadioButton);
        QWidget::setTabOrder(actionAskForPermissionRadioButton, actionNoneRadioButton);

        retranslateUi(AccessControlRuleEditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AccessControlRuleEditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AccessControlRuleEditDialog, SLOT(reject()));
        QObject::connect(isMemberOfGroupCheckBox, SIGNAL(toggled(bool)), groupsComboBox, SLOT(setEnabled(bool)));
        QObject::connect(isLocatedInRoomCheckBox, SIGNAL(toggled(bool)), roomsComboBox, SLOT(setEnabled(bool)));
        QObject::connect(isMemberOfGroupCheckBox, SIGNAL(toggled(bool)), isMemberOfGroupSubjectComboBox, SLOT(setEnabled(bool)));
        QObject::connect(isLocatedInRoomCheckBox, SIGNAL(toggled(bool)), isLocatedInRoomSubjectComboBox, SLOT(setEnabled(bool)));
        QObject::connect(ignoreConditionsCheckBox, SIGNAL(toggled(bool)), conditionsGroupBox, SLOT(setDisabled(bool)));
        QObject::connect(ignoreConditionsCheckBox, SIGNAL(toggled(bool)), invertConditionsCheckBox, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(AccessControlRuleEditDialog);
    } // setupUi

    void retranslateUi(QDialog *AccessControlRuleEditDialog)
    {
        AccessControlRuleEditDialog->setWindowTitle(QApplication::translate("AccessControlRuleEditDialog", "Edit access control rule", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("AccessControlRuleEditDialog", "General", Q_NULLPTR));
        ruleNameLineEdit->setPlaceholderText(QApplication::translate("AccessControlRuleEditDialog", "enter a short name for the rule here", Q_NULLPTR));
        label_3->setText(QApplication::translate("AccessControlRuleEditDialog", "Rule name:", Q_NULLPTR));
        ruleDescriptionLineEdit->setPlaceholderText(QApplication::translate("AccessControlRuleEditDialog", "enter a description for the rule here", Q_NULLPTR));
        label_4->setText(QApplication::translate("AccessControlRuleEditDialog", "Rule description:", Q_NULLPTR));
        invertConditionsCheckBox->setText(QApplication::translate("AccessControlRuleEditDialog", "Invert all conditions (\"is/has\" interpreted as \"is/has not\")", Q_NULLPTR));
        ignoreConditionsCheckBox->setText(QApplication::translate("AccessControlRuleEditDialog", "Always process rule and ignore conditions", Q_NULLPTR));
        conditionsGroupBox->setTitle(QApplication::translate("AccessControlRuleEditDialog", "Conditions", Q_NULLPTR));
        label_2->setText(QApplication::translate("AccessControlRuleEditDialog", "is member of group", Q_NULLPTR));
        isMemberOfGroupCheckBox->setText(QString());
        label->setText(QApplication::translate("AccessControlRuleEditDialog", "If more than one condition is activated each condition has to meet in order to make the rule apply (logical AND). If only one of multiple conditions has to meet (logical OR) please create multiple access control rules.", Q_NULLPTR));
        isLocatedInSameRoomCheckBox->setText(QApplication::translate("AccessControlRuleEditDialog", "Accessing computer is located in the same room as local computer", Q_NULLPTR));
        noUserLoggedOnCheckBox->setText(QApplication::translate("AccessControlRuleEditDialog", "No user logged on", Q_NULLPTR));
        label_6->setText(QApplication::translate("AccessControlRuleEditDialog", "is located in room", Q_NULLPTR));
        isLocatedInRoomCheckBox->setText(QString());
        isLocalHostAccessCheckBox->setText(QApplication::translate("AccessControlRuleEditDialog", "Accessing computer is localhost", Q_NULLPTR));
        hasCommonGroupsCheckBox->setText(QApplication::translate("AccessControlRuleEditDialog", "Accessing user has one or more groups in common with local (logged on) user", Q_NULLPTR));
        isLocalUserAccessCheckBox->setText(QApplication::translate("AccessControlRuleEditDialog", "Accessing user is logged on user", Q_NULLPTR));
        isSameUserAccessCheckBox->setText(QApplication::translate("AccessControlRuleEditDialog", "Accessing user is already connected", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("AccessControlRuleEditDialog", "Action", Q_NULLPTR));
        actionAllowRadioButton->setText(QApplication::translate("AccessControlRuleEditDialog", "Allow access", Q_NULLPTR));
        actionDenyRadioButton->setText(QApplication::translate("AccessControlRuleEditDialog", "Deny access", Q_NULLPTR));
        actionAskForPermissionRadioButton->setText(QApplication::translate("AccessControlRuleEditDialog", "Ask logged on user for permission", Q_NULLPTR));
        actionNoneRadioButton->setText(QApplication::translate("AccessControlRuleEditDialog", "None (rule disabled)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AccessControlRuleEditDialog: public Ui_AccessControlRuleEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCESSCONTROLRULEEDITDIALOG_H
