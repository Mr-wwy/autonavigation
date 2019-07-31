/********************************************************************************
** Form generated from reading UI file 'settime.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTIME_H
#define UI_SETTIME_H

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

class Ui_SetTime
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox_time;
    QLabel *label_danwei;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *sureBtn;
    QPushButton *cancelBtn;

    void setupUi(QWidget *SetTime)
    {
        if (SetTime->objectName().isEmpty())
            SetTime->setObjectName(QStringLiteral("SetTime"));
        SetTime->resize(348, 163);
        verticalLayout = new QVBoxLayout(SetTime);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_title = new QLabel(SetTime);
        label_title->setObjectName(QStringLiteral("label_title"));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu"));
        font.setPointSize(20);
        label_title->setFont(font);

        horizontalLayout_3->addWidget(label_title);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(SetTime);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(90, 30));
        label->setMaximumSize(QSize(120, 16777215));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        spinBox_time = new QSpinBox(SetTime);
        spinBox_time->setObjectName(QStringLiteral("spinBox_time"));
        spinBox_time->setMinimumSize(QSize(120, 0));
        spinBox_time->setFont(font1);
        spinBox_time->setMaximum(999999999);

        horizontalLayout->addWidget(spinBox_time);

        label_danwei = new QLabel(SetTime);
        label_danwei->setObjectName(QStringLiteral("label_danwei"));
        label_danwei->setMaximumSize(QSize(70, 16777215));
        label_danwei->setFont(font1);

        horizontalLayout->addWidget(label_danwei);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sureBtn = new QPushButton(SetTime);
        sureBtn->setObjectName(QStringLiteral("sureBtn"));
        sureBtn->setMinimumSize(QSize(100, 40));
        sureBtn->setFont(font1);

        horizontalLayout_2->addWidget(sureBtn);

        cancelBtn = new QPushButton(SetTime);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setMinimumSize(QSize(100, 40));
        cancelBtn->setFont(font1);

        horizontalLayout_2->addWidget(cancelBtn);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(SetTime);

        QMetaObject::connectSlotsByName(SetTime);
    } // setupUi

    void retranslateUi(QWidget *SetTime)
    {
        SetTime->setWindowTitle(QApplication::translate("SetTime", "Form", Q_NULLPTR));
        label_title->setText(QApplication::translate("SetTime", "\351\205\215\347\275\256\345\220\257\345\212\250\346\227\266\351\227\264", Q_NULLPTR));
        label->setText(QApplication::translate("SetTime", "\345\220\257\345\212\250\346\227\266\351\227\264:", Q_NULLPTR));
        label_danwei->setText(QApplication::translate("SetTime", "ms", Q_NULLPTR));
        sureBtn->setText(QApplication::translate("SetTime", "\347\241\256\345\256\232", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("SetTime", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SetTime: public Ui_SetTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTIME_H
