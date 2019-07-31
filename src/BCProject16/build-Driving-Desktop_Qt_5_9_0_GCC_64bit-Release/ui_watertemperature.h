/********************************************************************************
** Form generated from reading UI file 'watertemperature.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WATERTEMPERATURE_H
#define UI_WATERTEMPERATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaterTemperature
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *WaterTemperature)
    {
        if (WaterTemperature->objectName().isEmpty())
            WaterTemperature->setObjectName(QStringLiteral("WaterTemperature"));
        WaterTemperature->resize(400, 300);
        label = new QLabel(WaterTemperature);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(136, 122, 96, 130));
        label->setStyleSheet(QStringLiteral("border-image: url(:/KM/image/SW.png);"));
        label_2 = new QLabel(WaterTemperature);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(179, 202, 10, 10));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/KM/image/pointhover.png);"));

        retranslateUi(WaterTemperature);

        QMetaObject::connectSlotsByName(WaterTemperature);
    } // setupUi

    void retranslateUi(QWidget *WaterTemperature)
    {
        WaterTemperature->setWindowTitle(QApplication::translate("WaterTemperature", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WaterTemperature: public Ui_WaterTemperature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WATERTEMPERATURE_H
