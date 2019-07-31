/********************************************************************************
** Form generated from reading UI file 'setspeed.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETSPEED_H
#define UI_SETSPEED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setspeed
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_min;
    QSpinBox *spinBox_min;
    QLabel *label_max;
    QSpinBox *spinBox_max;
    QPushButton *pushButton;

    void setupUi(QWidget *setspeed)
    {
        if (setspeed->objectName().isEmpty())
            setspeed->setObjectName(QStringLiteral("setspeed"));
        setspeed->resize(202, 103);
        verticalLayout = new QVBoxLayout(setspeed);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(setspeed);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_min = new QLabel(setspeed);
        label_min->setObjectName(QStringLiteral("label_min"));

        horizontalLayout->addWidget(label_min);

        spinBox_min = new QSpinBox(setspeed);
        spinBox_min->setObjectName(QStringLiteral("spinBox_min"));

        horizontalLayout->addWidget(spinBox_min);

        label_max = new QLabel(setspeed);
        label_max->setObjectName(QStringLiteral("label_max"));

        horizontalLayout->addWidget(label_max);

        spinBox_max = new QSpinBox(setspeed);
        spinBox_max->setObjectName(QStringLiteral("spinBox_max"));

        horizontalLayout->addWidget(spinBox_max);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(setspeed);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(setspeed);

        QMetaObject::connectSlotsByName(setspeed);
    } // setupUi

    void retranslateUi(QWidget *setspeed)
    {
        setspeed->setWindowTitle(QApplication::translate("setspeed", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("setspeed", "\350\256\276\347\275\256\351\200\237\345\272\246\350\214\203\345\233\264:", Q_NULLPTR));
        label_min->setText(QApplication::translate("setspeed", "\346\234\200\345\260\217:", Q_NULLPTR));
        label_max->setText(QApplication::translate("setspeed", "\346\234\200\345\244\247:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("setspeed", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class setspeed: public Ui_setspeed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETSPEED_H
