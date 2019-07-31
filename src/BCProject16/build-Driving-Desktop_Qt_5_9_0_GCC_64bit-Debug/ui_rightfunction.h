/********************************************************************************
** Form generated from reading UI file 'rightfunction.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIGHTFUNCTION_H
#define UI_RIGHTFUNCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RightFunction
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_T0_1;
    QLabel *label_T0_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_cmd_t0;
    QHBoxLayout *horizontalLayout;
    QLabel *label_gpsweek1;
    QLabel *label_gpsweek2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_gpsms1;
    QLabel *label_gpsms2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_time;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_lati;
    QLabel *label_latitude;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_longti;
    QLabel *label_longtitude;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_gauss1;
    QLabel *label_gauss2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_azimuth1;
    QLabel *label_azimuth2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_pitch1;
    QLabel *label_pitch2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_roll1;
    QLabel *label_roll2;

    void setupUi(QWidget *RightFunction)
    {
        if (RightFunction->objectName().isEmpty())
            RightFunction->setObjectName(QStringLiteral("RightFunction"));
        RightFunction->resize(312, 390);
        verticalLayout = new QVBoxLayout(RightFunction);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_T0_1 = new QLabel(RightFunction);
        label_T0_1->setObjectName(QStringLiteral("label_T0_1"));
        label_T0_1->setMinimumSize(QSize(70, 0));
        label_T0_1->setMaximumSize(QSize(120, 16777215));
        QFont font;
        font.setPointSize(16);
        label_T0_1->setFont(font);

        horizontalLayout_10->addWidget(label_T0_1);

        label_T0_2 = new QLabel(RightFunction);
        label_T0_2->setObjectName(QStringLiteral("label_T0_2"));
        label_T0_2->setMinimumSize(QSize(200, 0));
        label_T0_2->setFont(font);

        horizontalLayout_10->addWidget(label_T0_2);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_cmd_t0 = new QLabel(RightFunction);
        label_cmd_t0->setObjectName(QStringLiteral("label_cmd_t0"));
        QFont font1;
        font1.setPointSize(15);
        label_cmd_t0->setFont(font1);

        horizontalLayout_11->addWidget(label_cmd_t0);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_gpsweek1 = new QLabel(RightFunction);
        label_gpsweek1->setObjectName(QStringLiteral("label_gpsweek1"));
        label_gpsweek1->setMaximumSize(QSize(120, 16777215));
        QFont font2;
        font2.setPointSize(15);
        font2.setItalic(true);
        label_gpsweek1->setFont(font2);

        horizontalLayout->addWidget(label_gpsweek1);

        label_gpsweek2 = new QLabel(RightFunction);
        label_gpsweek2->setObjectName(QStringLiteral("label_gpsweek2"));
        label_gpsweek2->setMinimumSize(QSize(200, 0));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        label_gpsweek2->setFont(font3);
        label_gpsweek2->setFrameShadow(QFrame::Plain);

        horizontalLayout->addWidget(label_gpsweek2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_gpsms1 = new QLabel(RightFunction);
        label_gpsms1->setObjectName(QStringLiteral("label_gpsms1"));
        label_gpsms1->setMaximumSize(QSize(120, 16777215));
        label_gpsms1->setFont(font2);

        horizontalLayout_2->addWidget(label_gpsms1);

        label_gpsms2 = new QLabel(RightFunction);
        label_gpsms2->setObjectName(QStringLiteral("label_gpsms2"));
        label_gpsms2->setMinimumSize(QSize(200, 0));
        label_gpsms2->setFont(font3);
        label_gpsms2->setFrameShadow(QFrame::Plain);

        horizontalLayout_2->addWidget(label_gpsms2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_time = new QLabel(RightFunction);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setFont(font1);

        horizontalLayout_9->addWidget(label_time);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_lati = new QLabel(RightFunction);
        label_lati->setObjectName(QStringLiteral("label_lati"));
        label_lati->setMaximumSize(QSize(120, 16777215));
        label_lati->setFont(font2);

        horizontalLayout_3->addWidget(label_lati);

        label_latitude = new QLabel(RightFunction);
        label_latitude->setObjectName(QStringLiteral("label_latitude"));
        label_latitude->setMinimumSize(QSize(200, 0));
        label_latitude->setFont(font3);
        label_latitude->setFrameShadow(QFrame::Plain);

        horizontalLayout_3->addWidget(label_latitude);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_longti = new QLabel(RightFunction);
        label_longti->setObjectName(QStringLiteral("label_longti"));
        label_longti->setMaximumSize(QSize(120, 16777215));
        label_longti->setFont(font2);

        horizontalLayout_4->addWidget(label_longti);

        label_longtitude = new QLabel(RightFunction);
        label_longtitude->setObjectName(QStringLiteral("label_longtitude"));
        label_longtitude->setMinimumSize(QSize(200, 0));
        label_longtitude->setFont(font3);
        label_longtitude->setFrameShadow(QFrame::Plain);

        horizontalLayout_4->addWidget(label_longtitude);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_gauss1 = new QLabel(RightFunction);
        label_gauss1->setObjectName(QStringLiteral("label_gauss1"));
        label_gauss1->setMaximumSize(QSize(120, 16777215));
        label_gauss1->setFont(font2);

        horizontalLayout_5->addWidget(label_gauss1);

        label_gauss2 = new QLabel(RightFunction);
        label_gauss2->setObjectName(QStringLiteral("label_gauss2"));
        label_gauss2->setMinimumSize(QSize(200, 0));
        label_gauss2->setFont(font3);
        label_gauss2->setFrameShadow(QFrame::Plain);

        horizontalLayout_5->addWidget(label_gauss2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_azimuth1 = new QLabel(RightFunction);
        label_azimuth1->setObjectName(QStringLiteral("label_azimuth1"));
        label_azimuth1->setMaximumSize(QSize(120, 16777215));
        label_azimuth1->setFont(font2);

        horizontalLayout_6->addWidget(label_azimuth1);

        label_azimuth2 = new QLabel(RightFunction);
        label_azimuth2->setObjectName(QStringLiteral("label_azimuth2"));
        label_azimuth2->setMinimumSize(QSize(200, 0));
        label_azimuth2->setFont(font3);
        label_azimuth2->setFrameShadow(QFrame::Plain);

        horizontalLayout_6->addWidget(label_azimuth2);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_pitch1 = new QLabel(RightFunction);
        label_pitch1->setObjectName(QStringLiteral("label_pitch1"));
        label_pitch1->setMaximumSize(QSize(120, 16777215));
        label_pitch1->setFont(font2);

        horizontalLayout_7->addWidget(label_pitch1);

        label_pitch2 = new QLabel(RightFunction);
        label_pitch2->setObjectName(QStringLiteral("label_pitch2"));
        label_pitch2->setMinimumSize(QSize(200, 0));
        label_pitch2->setFont(font3);
        label_pitch2->setFrameShadow(QFrame::Plain);

        horizontalLayout_7->addWidget(label_pitch2);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_roll1 = new QLabel(RightFunction);
        label_roll1->setObjectName(QStringLiteral("label_roll1"));
        label_roll1->setMaximumSize(QSize(120, 16777215));
        label_roll1->setFont(font2);

        horizontalLayout_8->addWidget(label_roll1);

        label_roll2 = new QLabel(RightFunction);
        label_roll2->setObjectName(QStringLiteral("label_roll2"));
        label_roll2->setMinimumSize(QSize(200, 0));
        label_roll2->setFont(font3);
        label_roll2->setFrameShadow(QFrame::Plain);

        horizontalLayout_8->addWidget(label_roll2);


        verticalLayout->addLayout(horizontalLayout_8);


        retranslateUi(RightFunction);

        QMetaObject::connectSlotsByName(RightFunction);
    } // setupUi

    void retranslateUi(QWidget *RightFunction)
    {
        RightFunction->setWindowTitle(QApplication::translate("RightFunction", "Form", Q_NULLPTR));
        label_T0_1->setText(QApplication::translate("RightFunction", "T0:", Q_NULLPTR));
        label_T0_2->setText(QString());
        label_cmd_t0->setText(QString());
        label_gpsweek1->setText(QApplication::translate("RightFunction", "Gps\345\221\250: ", Q_NULLPTR));
        label_gpsweek2->setText(QString());
        label_gpsms1->setText(QApplication::translate("RightFunction", "Gps\346\257\253\347\247\222: ", Q_NULLPTR));
        label_gpsms2->setText(QString());
        label_time->setText(QString());
        label_lati->setText(QApplication::translate("RightFunction", "\347\272\254\345\272\246:", Q_NULLPTR));
        label_latitude->setText(QString());
        label_longti->setText(QApplication::translate("RightFunction", "\347\273\217\345\272\246:", Q_NULLPTR));
        label_longtitude->setText(QString());
        label_gauss1->setText(QApplication::translate("RightFunction", "\351\253\230\346\226\257\345\235\220\346\240\207:", Q_NULLPTR));
        label_gauss2->setText(QString());
        label_azimuth1->setText(QApplication::translate("RightFunction", "\350\210\252\345\220\221\350\247\222:", Q_NULLPTR));
        label_azimuth2->setText(QString());
        label_pitch1->setText(QApplication::translate("RightFunction", "\344\277\257\344\273\260\350\247\222:", Q_NULLPTR));
        label_pitch2->setText(QString());
        label_roll1->setText(QApplication::translate("RightFunction", "\347\277\273\346\273\232\350\247\222:", Q_NULLPTR));
        label_roll2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RightFunction: public Ui_RightFunction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIGHTFUNCTION_H
