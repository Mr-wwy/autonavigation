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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetSpeed
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_speed;
    QSpinBox *spinBox_speed;
    QLabel *label_danwei;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *sureBtn;
    QPushButton *cancleBtn;

    void setupUi(QWidget *SetSpeed)
    {
        if (SetSpeed->objectName().isEmpty())
            SetSpeed->setObjectName(QStringLiteral("SetSpeed"));
        SetSpeed->resize(357, 171);
        verticalLayout = new QVBoxLayout(SetSpeed);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_title = new QLabel(SetSpeed);
        label_title->setObjectName(QStringLiteral("label_title"));
        QFont font;
        font.setPointSize(22);
        label_title->setFont(font);

        horizontalLayout_2->addWidget(label_title);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_speed = new QLabel(SetSpeed);
        label_speed->setObjectName(QStringLiteral("label_speed"));
        label_speed->setMinimumSize(QSize(110, 20));
        QFont font1;
        font1.setPointSize(15);
        label_speed->setFont(font1);

        horizontalLayout->addWidget(label_speed);

        spinBox_speed = new QSpinBox(SetSpeed);
        spinBox_speed->setObjectName(QStringLiteral("spinBox_speed"));
        spinBox_speed->setMinimumSize(QSize(80, 26));
        spinBox_speed->setFont(font1);

        horizontalLayout->addWidget(spinBox_speed);

        label_danwei = new QLabel(SetSpeed);
        label_danwei->setObjectName(QStringLiteral("label_danwei"));
        label_danwei->setMinimumSize(QSize(80, 17));
        label_danwei->setFont(font1);

        horizontalLayout->addWidget(label_danwei);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        sureBtn = new QPushButton(SetSpeed);
        sureBtn->setObjectName(QStringLiteral("sureBtn"));
        sureBtn->setMinimumSize(QSize(120, 50));
        sureBtn->setFont(font1);

        horizontalLayout_3->addWidget(sureBtn);

        cancleBtn = new QPushButton(SetSpeed);
        cancleBtn->setObjectName(QStringLiteral("cancleBtn"));
        cancleBtn->setMinimumSize(QSize(120, 50));
        cancleBtn->setFont(font1);

        horizontalLayout_3->addWidget(cancleBtn);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(SetSpeed);

        QMetaObject::connectSlotsByName(SetSpeed);
    } // setupUi

    void retranslateUi(QWidget *SetSpeed)
    {
        SetSpeed->setWindowTitle(QApplication::translate("SetSpeed", "Form", Q_NULLPTR));
        label_title->setText(QApplication::translate("SetSpeed", "\350\256\276\347\275\256\346\234\237\346\234\233\351\200\237\345\272\246", Q_NULLPTR));
        label_speed->setText(QApplication::translate("SetSpeed", "\346\234\237\346\234\233\351\200\237\345\272\246\357\274\232", Q_NULLPTR));
        label_danwei->setText(QApplication::translate("SetSpeed", "Km/h", Q_NULLPTR));
        sureBtn->setText(QApplication::translate("SetSpeed", "\347\241\256\345\256\232", Q_NULLPTR));
        cancleBtn->setText(QApplication::translate("SetSpeed", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SetSpeed: public Ui_SetSpeed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETSPEED_H
