/********************************************************************************
** Form generated from reading UI file 'leftdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEFTDISPLAY_H
#define UI_LEFTDISPLAY_H

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

class Ui_LeftDisplay
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_speed1;
    QLabel *label_speed2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_recordcmd1;
    QLabel *label_recordcmd2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_recordstatus1;
    QLabel *label_recordstatus2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_enable1;
    QLabel *label_enable2;

    void setupUi(QWidget *LeftDisplay)
    {
        if (LeftDisplay->objectName().isEmpty())
            LeftDisplay->setObjectName(QStringLiteral("LeftDisplay"));
        LeftDisplay->resize(326, 152);
        verticalLayout = new QVBoxLayout(LeftDisplay);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_speed1 = new QLabel(LeftDisplay);
        label_speed1->setObjectName(QStringLiteral("label_speed1"));
        label_speed1->setMinimumSize(QSize(100, 0));
        QFont font;
        font.setPointSize(15);
        label_speed1->setFont(font);

        horizontalLayout->addWidget(label_speed1);

        label_speed2 = new QLabel(LeftDisplay);
        label_speed2->setObjectName(QStringLiteral("label_speed2"));
        label_speed2->setMinimumSize(QSize(200, 0));
        label_speed2->setFont(font);

        horizontalLayout->addWidget(label_speed2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_recordcmd1 = new QLabel(LeftDisplay);
        label_recordcmd1->setObjectName(QStringLiteral("label_recordcmd1"));
        label_recordcmd1->setMinimumSize(QSize(100, 0));
        label_recordcmd1->setFont(font);

        horizontalLayout_2->addWidget(label_recordcmd1);

        label_recordcmd2 = new QLabel(LeftDisplay);
        label_recordcmd2->setObjectName(QStringLiteral("label_recordcmd2"));
        label_recordcmd2->setMinimumSize(QSize(200, 0));
        label_recordcmd2->setFont(font);

        horizontalLayout_2->addWidget(label_recordcmd2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_recordstatus1 = new QLabel(LeftDisplay);
        label_recordstatus1->setObjectName(QStringLiteral("label_recordstatus1"));
        label_recordstatus1->setMinimumSize(QSize(100, 0));
        label_recordstatus1->setFont(font);

        horizontalLayout_3->addWidget(label_recordstatus1);

        label_recordstatus2 = new QLabel(LeftDisplay);
        label_recordstatus2->setObjectName(QStringLiteral("label_recordstatus2"));
        label_recordstatus2->setMinimumSize(QSize(200, 0));
        label_recordstatus2->setFont(font);

        horizontalLayout_3->addWidget(label_recordstatus2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_enable1 = new QLabel(LeftDisplay);
        label_enable1->setObjectName(QStringLiteral("label_enable1"));
        label_enable1->setMinimumSize(QSize(95, 0));
        label_enable1->setFont(font);

        horizontalLayout_4->addWidget(label_enable1);

        label_enable2 = new QLabel(LeftDisplay);
        label_enable2->setObjectName(QStringLiteral("label_enable2"));
        label_enable2->setMinimumSize(QSize(200, 0));
        label_enable2->setFont(font);

        horizontalLayout_4->addWidget(label_enable2);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(LeftDisplay);

        QMetaObject::connectSlotsByName(LeftDisplay);
    } // setupUi

    void retranslateUi(QWidget *LeftDisplay)
    {
        LeftDisplay->setWindowTitle(QApplication::translate("LeftDisplay", "Form", Q_NULLPTR));
        label_speed1->setText(QApplication::translate("LeftDisplay", "\346\234\237\346\234\233\351\200\237\345\272\246\357\274\232", Q_NULLPTR));
        label_speed2->setText(QString());
        label_recordcmd1->setText(QApplication::translate("LeftDisplay", "\350\256\260\345\275\225\346\214\207\344\273\244\357\274\232", Q_NULLPTR));
        label_recordcmd2->setText(QString());
        label_recordstatus1->setText(QApplication::translate("LeftDisplay", "\350\256\260\345\275\225\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        label_recordstatus2->setText(QString());
        label_enable1->setText(QApplication::translate("LeftDisplay", "\350\203\275\345\220\246\350\207\252\344\270\273\357\274\232", Q_NULLPTR));
        label_enable2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LeftDisplay: public Ui_LeftDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEFTDISPLAY_H
