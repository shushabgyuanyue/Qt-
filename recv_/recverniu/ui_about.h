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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QPushButton *scan;
    QTextEdit *text_f;
    QLabel *label;
    QLabel *print;
    QPushButton *send;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QStringLiteral("about"));
        about->resize(400, 315);
        scan = new QPushButton(about);
        scan->setObjectName(QStringLiteral("scan"));
        scan->setGeometry(QRect(260, 40, 81, 23));
        text_f = new QTextEdit(about);
        text_f->setObjectName(QStringLiteral("text_f"));
        text_f->setGeometry(QRect(60, 40, 201, 21));
        label = new QLabel(about);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 36, 16));
        print = new QLabel(about);
        print->setObjectName(QStringLiteral("print"));
        print->setGeometry(QRect(60, 70, 281, 211));
        send = new QPushButton(about);
        send->setObjectName(QStringLiteral("send"));
        send->setGeometry(QRect(280, 290, 71, 23));

        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QApplication::translate("about", "Dialog", 0));
        scan->setText(QApplication::translate("about", "\346\265\217\350\247\210\357\274\210&c)", 0));
        label->setText(QApplication::translate("about", "\346\226\207\344\273\266\357\274\232", 0));
        print->setText(QApplication::translate("about", "print", 0));
        send->setText(QApplication::translate("about", "\345\217\221\345\260\204\357\274\210&S)", 0));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
