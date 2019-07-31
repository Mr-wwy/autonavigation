/********************************************************************************
** Form generated from reading UI file 'taskmode.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKMODE_H
#define UI_TASKMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskMode
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label_taskmode;
    QLabel *label_taskmode_2;

    void setupUi(QWidget *TaskMode)
    {
        if (TaskMode->objectName().isEmpty())
            TaskMode->setObjectName(QStringLiteral("TaskMode"));
        TaskMode->resize(624, 68);
        horizontalLayout = new QHBoxLayout(TaskMode);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_taskmode = new QLabel(TaskMode);
        label_taskmode->setObjectName(QStringLiteral("label_taskmode"));
        label_taskmode->setMinimumSize(QSize(300, 50));
        QFont font;
        font.setPointSize(33);
        label_taskmode->setFont(font);

        horizontalLayout->addWidget(label_taskmode);

        label_taskmode_2 = new QLabel(TaskMode);
        label_taskmode_2->setObjectName(QStringLiteral("label_taskmode_2"));
        label_taskmode_2->setMinimumSize(QSize(300, 50));
        label_taskmode_2->setFont(font);

        horizontalLayout->addWidget(label_taskmode_2);


        retranslateUi(TaskMode);

        QMetaObject::connectSlotsByName(TaskMode);
    } // setupUi

    void retranslateUi(QWidget *TaskMode)
    {
        TaskMode->setWindowTitle(QApplication::translate("TaskMode", "Form", Q_NULLPTR));
        label_taskmode->setText(QApplication::translate("TaskMode", "\350\257\267\346\261\202\351\201\245\346\216\247\346\250\241\345\274\217", Q_NULLPTR));
        label_taskmode_2->setText(QApplication::translate("TaskMode", "\345\256\236\351\231\205\351\201\245\346\216\247\346\250\241\345\274\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TaskMode: public Ui_TaskMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKMODE_H
