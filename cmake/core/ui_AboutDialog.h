/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLabel *label_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *versionLabel;
    QSpacerItem *verticalSpacer;
    QPushButton *donateButton;
    QWidget *tab_2;
    QGridLayout *gridLayout1;
    QPlainTextEdit *authors;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QWidget *tab_4;
    QGridLayout *gridLayout2;
    QPlainTextEdit *license;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(738, 500);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/help-about.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutDialog->setWindowIcon(icon);
        AboutDialog->setModal(true);
        vboxLayout = new QVBoxLayout(AboutDialog);
        vboxLayout->setSpacing(10);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(15, 15, 15, 15);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(20);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(AboutDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/icon64.png")));

        hboxLayout->addWidget(label);

        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        hboxLayout->addWidget(label_2);


        vboxLayout->addLayout(hboxLayout);

        tabWidget = new QTabWidget(AboutDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(16);
        gridLayout->setContentsMargins(24, 24, 9, 9);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setText(QStringLiteral("Veyon - Virtual Eye On Networks"));

        gridLayout->addWidget(label_3, 0, 0, 1, 2);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 5, 0, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setText(QStringLiteral("<a href=\"http://github.com/veyon/veyon\">http://veyon.io</a>"));
        label_4->setOpenExternalLinks(true);

        gridLayout->addWidget(label_4, 5, 1, 1, 1);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setText(QString::fromUtf8("Copyright \302\251 2004-2019 Tobias Junghans / Veyon Solutions"));

        gridLayout->addWidget(label_8, 3, 0, 1, 2);

        versionLabel = new QLabel(tab);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        versionLabel->setText(QStringLiteral("0.0"));

        gridLayout->addWidget(versionLabel, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 2);

        donateButton = new QPushButton(tab);
        donateButton->setObjectName(QStringLiteral("donateButton"));

        gridLayout->addWidget(donateButton, 6, 0, 1, 2);

        gridLayout->setColumnStretch(1, 1);
        tabWidget->addTab(tab, icon, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout1 = new QGridLayout(tab_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        authors = new QPlainTextEdit(tab_2);
        authors->setObjectName(QStringLiteral("authors"));
        authors->setFrameShape(QFrame::NoFrame);
        authors->setReadOnly(true);

        gridLayout1->addWidget(authors, 0, 0, 1, 1);

        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/user-group-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon1, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout = new QVBoxLayout(tab_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(24, 24, 24, 24);
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5->setWordWrap(true);

        verticalLayout->addWidget(label_5);

        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/languages.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout2 = new QGridLayout(tab_4);
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        gridLayout2->setContentsMargins(-1, -1, -1, 9);
        license = new QPlainTextEdit(tab_4);
        license->setObjectName(QStringLiteral("license"));
        license->setFrameShape(QFrame::NoFrame);
        license->setReadOnly(true);

        gridLayout2->addWidget(license, 0, 0, 1, 1);

        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/license.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_4, icon3, QString());

        vboxLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(donateButton, SIGNAL(clicked()), AboutDialog, SLOT(openDonationWebsite()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About Veyon", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("AboutDialog", "About Veyon", Q_NULLPTR));
        label_6->setText(QApplication::translate("AboutDialog", "Version:", Q_NULLPTR));
        label_9->setText(QApplication::translate("AboutDialog", "Website:", Q_NULLPTR));
        donateButton->setText(QApplication::translate("AboutDialog", "Support Veyon project with a donation", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AboutDialog", "About", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AboutDialog", "Contributors", Q_NULLPTR));
        label_5->setText(QApplication::translate("AboutDialog", "Current language not translated yet (or native English).\n"
"\n"
"If you're interested in translating Veyon into your local or another language or want to improve an existing translation, please contact a Veyon developer!", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AboutDialog", "Translation", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("AboutDialog", "License", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
