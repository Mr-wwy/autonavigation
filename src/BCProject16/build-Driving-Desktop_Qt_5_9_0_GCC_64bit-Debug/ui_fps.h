/********************************************************************************
** Form generated from reading UI file 'fps.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FPS_H
#define UI_FPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fps
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Fps)
    {
        if (Fps->objectName().isEmpty())
            Fps->setObjectName(QStringLiteral("Fps"));
        Fps->resize(99, 109);
        Fps->setStyleSheet(QStringLiteral(""));
        label = new QLabel(Fps);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 30, 30));
        label->setScaledContents(true);
        label_2 = new QLabel(Fps);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 120, 20));
        label_2->setStyleSheet(QStringLiteral(""));

        retranslateUi(Fps);

        QMetaObject::connectSlotsByName(Fps);
    } // setupUi

    void retranslateUi(QWidget *Fps)
    {
        Fps->setWindowTitle(QApplication::translate("Fps", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("Fps", "Ping:-1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Fps: public Ui_Fps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FPS_H
