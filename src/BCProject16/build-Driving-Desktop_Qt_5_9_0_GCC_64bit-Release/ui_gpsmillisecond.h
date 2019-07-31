/********************************************************************************
** Form generated from reading UI file 'gpsmillisecond.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPSMILLISECOND_H
#define UI_GPSMILLISECOND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gpsmillisecond
{
public:
    QVBoxLayout *verticalLayout;
    QDateTimeEdit *dateTimeEdit_gps;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_gpsmillisecond;
    QLabel *label_gpsms;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *OkBtn;

    void setupUi(QWidget *Gpsmillisecond)
    {
        if (Gpsmillisecond->objectName().isEmpty())
            Gpsmillisecond->setObjectName(QStringLiteral("Gpsmillisecond"));
        Gpsmillisecond->resize(361, 122);
        verticalLayout = new QVBoxLayout(Gpsmillisecond);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dateTimeEdit_gps = new QDateTimeEdit(Gpsmillisecond);
        dateTimeEdit_gps->setObjectName(QStringLiteral("dateTimeEdit_gps"));
        dateTimeEdit_gps->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(dateTimeEdit_gps);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_gpsmillisecond = new QLabel(Gpsmillisecond);
        label_gpsmillisecond->setObjectName(QStringLiteral("label_gpsmillisecond"));
        QFont font;
        font.setPointSize(15);
        label_gpsmillisecond->setFont(font);

        horizontalLayout_2->addWidget(label_gpsmillisecond);

        label_gpsms = new QLabel(Gpsmillisecond);
        label_gpsms->setObjectName(QStringLiteral("label_gpsms"));
        label_gpsms->setMinimumSize(QSize(150, 0));
        label_gpsms->setFont(font);

        horizontalLayout_2->addWidget(label_gpsms);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(238, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        OkBtn = new QPushButton(Gpsmillisecond);
        OkBtn->setObjectName(QStringLiteral("OkBtn"));
        OkBtn->setFont(font);

        horizontalLayout->addWidget(OkBtn);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Gpsmillisecond);

        QMetaObject::connectSlotsByName(Gpsmillisecond);
    } // setupUi

    void retranslateUi(QWidget *Gpsmillisecond)
    {
        Gpsmillisecond->setWindowTitle(QApplication::translate("Gpsmillisecond", "Form", Q_NULLPTR));
        label_gpsmillisecond->setText(QApplication::translate("Gpsmillisecond", "Gps\346\257\253\347\247\222:", Q_NULLPTR));
        label_gpsms->setText(QString());
        OkBtn->setText(QApplication::translate("Gpsmillisecond", "Ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Gpsmillisecond: public Ui_Gpsmillisecond {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPSMILLISECOND_H
