/********************************************************************************
** Form generated from reading UI file 'oiltable.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OILTABLE_H
#define UI_OILTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OilTable
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *OilTable)
    {
        if (OilTable->objectName().isEmpty())
            OilTable->setObjectName(QStringLiteral("OilTable"));
        OilTable->resize(400, 300);
        label = new QLabel(OilTable);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(136, 122, 96, 130));
        label->setStyleSheet(QStringLiteral("border-image: url(:/KM/image/YL.png);"));
        label_2 = new QLabel(OilTable);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(179, 202, 10, 10));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/KM/image/pointhover.png);"));

        retranslateUi(OilTable);

        QMetaObject::connectSlotsByName(OilTable);
    } // setupUi

    void retranslateUi(QWidget *OilTable)
    {
        OilTable->setWindowTitle(QApplication::translate("OilTable", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OilTable: public Ui_OilTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OILTABLE_H
