/********************************************************************************
** Form generated from reading UI file 'tachometer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TACHOMETER_H
#define UI_TACHOMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tachometer
{
public:
    QLabel *label;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *Tachometer)
    {
        if (Tachometer->objectName().isEmpty())
            Tachometer->setObjectName(QStringLiteral("Tachometer"));
        Tachometer->resize(360, 380);
        label = new QLabel(Tachometer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(27, 52, 304, 304));
        label->setStyleSheet(QStringLiteral("border-image: url(:/KM/image/ZSB.png);"));
        label_2 = new QLabel(Tachometer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(165, 190, 30, 30));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/KM/image/pointhover.png);"));
        lcdNumber = new QLCDNumber(Tachometer);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(140, 140, 64, 23));
        lcdNumber->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        label_3 = new QLabel(Tachometer);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 286, 51, 41));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/KM/image/SS.png);"));
        label_4 = new QLabel(Tachometer);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 190, 51, 31));
        label_4->setStyleSheet(QStringLiteral("border-image: url(:/KM/image/fdj.png);"));

        retranslateUi(Tachometer);

        QMetaObject::connectSlotsByName(Tachometer);
    } // setupUi

    void retranslateUi(QWidget *Tachometer)
    {
        Tachometer->setWindowTitle(QApplication::translate("Tachometer", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tachometer: public Ui_Tachometer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TACHOMETER_H
