/********************************************************************************
** Form generated from reading UI file 'pass.ui'
**
** Created
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASS_H
#define UI_PASS_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pass
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *Pass)
    {
        if (Pass->objectName().isEmpty())
            Pass->setObjectName(QString::fromUtf8("Pass"));
        Pass->resize(281, 202);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Pass->sizePolicy().hasHeightForWidth());
        Pass->setSizePolicy(sizePolicy);
        Pass->setMinimumSize(QSize(281, 202));
        Pass->setMaximumSize(QSize(281, 202));
        Pass->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/icol.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Pass->setWindowIcon(icon);
        Pass->setWindowOpacity(1);
        Pass->setStyleSheet(QString::fromUtf8("#Pass{\n"
"	background-color: #be6129;\n"
"	background-image:url(:/new/prefix1/background.png);\n"
"\n"
"background-position:-50px -60px;\n"
"\n"
"}\n"
"QLineEdit{\n"
"border-width: 1px;\n"
"border-color: #000000;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding:2px\n"
"}"));
        buttonBox = new QDialogButtonBox(Pass);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(100, 150, 171, 31));
        buttonBox->setFocusPolicy(Qt::TabFocus);
        buttonBox->setStyleSheet(QString::fromUtf8("#standardButtons{\n"
"	background-color: #f56f18;\n"
"}\n"
"\n"
"\n"
"\n"
"#buttonBox *{\n"
"/*	background-color: #f56f18;*/\n"
"background-color: #b67042;\n"
"background-color:transparent;\n"
"background-image:url(:/new/images/button2m.png);\n"
"background-repeat:no-repeat;\n"
"}\n"
"\n"
"\n"
"#buttonBox *:hover{\n"
"/*	background-color: #f56f18;*/\n"
"\n"
"background-image:url(:/new/images/button2Nacm.png)\n"
"\n"
"}"));
        buttonBox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(Pass);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 70, 231, 77));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setCursor(QCursor(Qt::IBeamCursor));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFocusPolicy(Qt::TabFocus);
        lineEdit_2->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText);
        lineEdit_2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_2);

        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, buttonBox);

        retranslateUi(Pass);
        QObject::connect(buttonBox, SIGNAL(accepted()), Pass, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Pass, SLOT(reject()));
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), Pass, SLOT(inputLoginHandler(QString)));
        QObject::connect(buttonBox, SIGNAL(accepted()), Pass, SLOT(buttonOKHandler()));

        QMetaObject::connectSlotsByName(Pass);
    } // setupUi

    void retranslateUi(QDialog *Pass)
    {
        Pass->setWindowTitle(QApplication::translate("Pass", "Log in", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Pass: public Ui_Pass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASS_H
