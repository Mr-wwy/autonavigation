/********************************************************************************
** Form generated from reading UI file 'emulation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMULATION_H
#define UI_EMULATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_emulation
{
public:

    void setupUi(QWidget *emulation)
    {
        if (emulation->objectName().isEmpty())
            emulation->setObjectName(QStringLiteral("emulation"));
        emulation->resize(400, 300);
        emulation->setStyleSheet(QStringLiteral(""));

        retranslateUi(emulation);

        QMetaObject::connectSlotsByName(emulation);
    } // setupUi

    void retranslateUi(QWidget *emulation)
    {
        emulation->setWindowTitle(QApplication::translate("emulation", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class emulation: public Ui_emulation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMULATION_H
