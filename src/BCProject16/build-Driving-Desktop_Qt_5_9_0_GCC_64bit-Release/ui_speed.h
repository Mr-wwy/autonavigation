/********************************************************************************
** Form generated from reading UI file 'speed.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPEED_H
#define UI_SPEED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Speed
{
public:
    QLabel *label;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *Speed)
    {
        if (Speed->objectName().isEmpty())
            Speed->setObjectName(QStringLiteral("Speed"));
        Speed->resize(371, 351);
        label = new QLabel(Speed);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 310, 310));
        label->setStyleSheet(QStringLiteral(""));
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(Speed);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 170, 30, 30));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/KM/image/pointhover.png);"));
        lcdNumber = new QLCDNumber(Speed);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(143, 222, 81, 41));
        QFont font;
        font.setFamily(QStringLiteral("wasy10"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        lcdNumber->setFont(font);
        lcdNumber->setStyleSheet(QStringLiteral("color: rgb(22, 252, 3);"));
        lcdNumber->setFrameShape(QFrame::Panel);
        lcdNumber->setFrameShadow(QFrame::Sunken);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("intValue", QVariant(0));
        label_3 = new QLabel(Speed);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 270, 31, 31));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_4 = new QLabel(Speed);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 110, 90, 35));
        label_4->setStyleSheet(QStringLiteral("font: 26pt \"Sans Serif\";"));
        lcdNumber->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();

        retranslateUi(Speed);

        QMetaObject::connectSlotsByName(Speed);
    } // setupUi

    void retranslateUi(QWidget *Speed)
    {
        Speed->setWindowTitle(QApplication::translate("Speed", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QApplication::translate("Speed", "N", Q_NULLPTR));
        label_4->setText(QApplication::translate("Speed", "km/h", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Speed: public Ui_Speed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPEED_H
