/********************************************************************************
** Form generated from reading UI file 'ScreenshotManagementView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSHOTMANAGEMENTVIEW_H
#define UI_SCREENSHOTMANAGEMENTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenshotManagementView
{
public:
    QVBoxLayout *verticalLayout;
    QListView *list;
    QLabel *previewLbl;
    QGridLayout *_2;
    QLabel *dateLbl;
    QLabel *userDescLbl;
    QLabel *userLbl;
    QLabel *timeLbl;
    QLabel *hostDescLbl;
    QLabel *dateDescLbl;
    QLabel *hostLbl;
    QLabel *timeDescLbl;
    QHBoxLayout *horizontalLayout;
    QPushButton *showBtn;
    QPushButton *deleteBtn;
    QSpacerItem *spacer;

    void setupUi(QWidget *ScreenshotManagementView)
    {
        if (ScreenshotManagementView->objectName().isEmpty())
            ScreenshotManagementView->setObjectName(QStringLiteral("ScreenshotManagementView"));
        ScreenshotManagementView->resize(286, 496);
        verticalLayout = new QVBoxLayout(ScreenshotManagementView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        list = new QListView(ScreenshotManagementView);
        list->setObjectName(QStringLiteral("list"));

        verticalLayout->addWidget(list);

        previewLbl = new QLabel(ScreenshotManagementView);
        previewLbl->setObjectName(QStringLiteral("previewLbl"));
        previewLbl->setMinimumSize(QSize(1, 1));
        previewLbl->setScaledContents(true);

        verticalLayout->addWidget(previewLbl);

        _2 = new QGridLayout();
        _2->setObjectName(QStringLiteral("_2"));
        dateLbl = new QLabel(ScreenshotManagementView);
        dateLbl->setObjectName(QStringLiteral("dateLbl"));

        _2->addWidget(dateLbl, 1, 1, 1, 1);

        userDescLbl = new QLabel(ScreenshotManagementView);
        userDescLbl->setObjectName(QStringLiteral("userDescLbl"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        userDescLbl->setFont(font);

        _2->addWidget(userDescLbl, 0, 0, 1, 1);

        userLbl = new QLabel(ScreenshotManagementView);
        userLbl->setObjectName(QStringLiteral("userLbl"));

        _2->addWidget(userLbl, 0, 1, 1, 1);

        timeLbl = new QLabel(ScreenshotManagementView);
        timeLbl->setObjectName(QStringLiteral("timeLbl"));

        _2->addWidget(timeLbl, 2, 1, 1, 1);

        hostDescLbl = new QLabel(ScreenshotManagementView);
        hostDescLbl->setObjectName(QStringLiteral("hostDescLbl"));
        hostDescLbl->setFont(font);

        _2->addWidget(hostDescLbl, 3, 0, 1, 1);

        dateDescLbl = new QLabel(ScreenshotManagementView);
        dateDescLbl->setObjectName(QStringLiteral("dateDescLbl"));
        dateDescLbl->setFont(font);

        _2->addWidget(dateDescLbl, 1, 0, 1, 1);

        hostLbl = new QLabel(ScreenshotManagementView);
        hostLbl->setObjectName(QStringLiteral("hostLbl"));

        _2->addWidget(hostLbl, 3, 1, 1, 1);

        timeDescLbl = new QLabel(ScreenshotManagementView);
        timeDescLbl->setObjectName(QStringLiteral("timeDescLbl"));
        timeDescLbl->setFont(font);

        _2->addWidget(timeDescLbl, 2, 0, 1, 1);

        _2->setColumnStretch(1, 1);

        verticalLayout->addLayout(_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        showBtn = new QPushButton(ScreenshotManagementView);
        showBtn->setObjectName(QStringLiteral("showBtn"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        showBtn->setIcon(icon);
        showBtn->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(showBtn);

        deleteBtn = new QPushButton(ScreenshotManagementView);
        deleteBtn->setObjectName(QStringLiteral("deleteBtn"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteBtn->setIcon(icon1);
        deleteBtn->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(deleteBtn);


        verticalLayout->addLayout(horizontalLayout);

        spacer = new QSpacerItem(16, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(spacer);


        retranslateUi(ScreenshotManagementView);

        QMetaObject::connectSlotsByName(ScreenshotManagementView);
    } // setupUi

    void retranslateUi(QWidget *ScreenshotManagementView)
    {
#ifndef QT_NO_TOOLTIP
        list->setToolTip(QApplication::translate("ScreenshotManagementView", "All screenshots taken by you are listed here. You can take screenshots by clicking the \"Screenshot\" item in the context menu of a computer. The screenshots can be managed using the buttons below.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        userDescLbl->setText(QApplication::translate("ScreenshotManagementView", "User:", Q_NULLPTR));
        hostDescLbl->setText(QApplication::translate("ScreenshotManagementView", "Computer:", Q_NULLPTR));
        dateDescLbl->setText(QApplication::translate("ScreenshotManagementView", "Date:", Q_NULLPTR));
        timeDescLbl->setText(QApplication::translate("ScreenshotManagementView", "Time:", Q_NULLPTR));
        showBtn->setText(QApplication::translate("ScreenshotManagementView", "Show", Q_NULLPTR));
        deleteBtn->setText(QApplication::translate("ScreenshotManagementView", "Delete", Q_NULLPTR));
        Q_UNUSED(ScreenshotManagementView);
    } // retranslateUi

};

namespace Ui {
    class ScreenshotManagementView: public Ui_ScreenshotManagementView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSHOTMANAGEMENTVIEW_H
