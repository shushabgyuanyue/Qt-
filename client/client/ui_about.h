/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QLabel *print;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QStringLiteral("about"));
        about->resize(400, 351);
        about->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/release/1499779922595.jpg);"));
        print = new QLabel(about);
        print->setObjectName(QStringLiteral("print"));
        print->setGeometry(QRect(50, 0, 271, 271));

        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QApplication::translate("about", "Dialog", 0));
        print->setText(QApplication::translate("about", "\347\273\217\350\277\207\350\211\260\350\213\246\345\215\223\347\273\235\347\232\204\345\245\213\346\226\227\n"
"\346\210\221\344\273\254\345\207\272\350\211\262\347\232\204\345\256\214\346\210\220\345\256\236\350\256\255\344\273\273\345\212\241\n"
"\350\277\231\345\260\261\346\230\257\346\210\221\344\273\254\347\232\204\345\256\236\350\256\255\346\210\220\346\236\234\n"
"\346\230\257\344\270\215\346\230\257\345\276\210\345\216\211\345\256\263\n"
"hhh!!!", 0));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
