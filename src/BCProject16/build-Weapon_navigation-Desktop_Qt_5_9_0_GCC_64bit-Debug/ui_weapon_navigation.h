/********************************************************************************
** Form generated from reading UI file 'weapon_navigation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEAPON_NAVIGATION_H
#define UI_WEAPON_NAVIGATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Weapon_navigation
{
public:
    QLabel *label;
    QLabel *Aim_label;

    void setupUi(QWidget *Weapon_navigation)
    {
        if (Weapon_navigation->objectName().isEmpty())
            Weapon_navigation->setObjectName(QStringLiteral("Weapon_navigation"));
        Weapon_navigation->resize(400, 300);
        label = new QLabel(Weapon_navigation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 400, 300));
        label->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        Aim_label = new QLabel(Weapon_navigation);
        Aim_label->setObjectName(QStringLiteral("Aim_label"));
        Aim_label->setGeometry(QRect(150, 120, 47, 15));

        retranslateUi(Weapon_navigation);

        QMetaObject::connectSlotsByName(Weapon_navigation);
    } // setupUi

    void retranslateUi(QWidget *Weapon_navigation)
    {
        Weapon_navigation->setWindowTitle(QApplication::translate("Weapon_navigation", "Weapon_navigation", Q_NULLPTR));
        label->setText(QString());
        Aim_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Weapon_navigation: public Ui_Weapon_navigation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEAPON_NAVIGATION_H
