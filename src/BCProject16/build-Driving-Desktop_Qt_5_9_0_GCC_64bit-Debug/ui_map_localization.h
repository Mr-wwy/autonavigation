/********************************************************************************
** Form generated from reading UI file 'map_localization.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_LOCALIZATION_H
#define UI_MAP_LOCALIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Map_Localization
{
public:

    void setupUi(QWidget *Map_Localization)
    {
        if (Map_Localization->objectName().isEmpty())
            Map_Localization->setObjectName(QStringLiteral("Map_Localization"));
        Map_Localization->resize(300, 300);
        Map_Localization->setStyleSheet(QStringLiteral("border-color: rgb(46, 52, 54);"));

        retranslateUi(Map_Localization);

        QMetaObject::connectSlotsByName(Map_Localization);
    } // setupUi

    void retranslateUi(QWidget *Map_Localization)
    {
        Map_Localization->setWindowTitle(QApplication::translate("Map_Localization", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Map_Localization: public Ui_Map_Localization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_LOCALIZATION_H
