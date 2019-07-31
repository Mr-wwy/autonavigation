/********************************************************************************
** Form generated from reading UI file 'drivingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVINGWIDGET_H
#define UI_DRIVINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DrivingWidget
{
public:
    QAction *action;
    QAction *action_tip;
    QAction *action2;
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menu_help;

    void setupUi(QMainWindow *DrivingWidget)
    {
        if (DrivingWidget->objectName().isEmpty())
            DrivingWidget->setObjectName(QStringLiteral("DrivingWidget"));
        DrivingWidget->resize(904, 635);
        action = new QAction(DrivingWidget);
        action->setObjectName(QStringLiteral("action"));
        action_tip = new QAction(DrivingWidget);
        action_tip->setObjectName(QStringLiteral("action_tip"));
        action2 = new QAction(DrivingWidget);
        action2->setObjectName(QStringLiteral("action2"));
        centralWidget = new QWidget(DrivingWidget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 9, 881, 581));
        label->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        label->setScaledContents(true);
        DrivingWidget->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DrivingWidget);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 904, 25));
        menu_help = new QMenu(menuBar);
        menu_help->setObjectName(QStringLiteral("menu_help"));
        DrivingWidget->setMenuBar(menuBar);

        menuBar->addAction(menu_help->menuAction());
        menu_help->addAction(action_tip);

        retranslateUi(DrivingWidget);

        QMetaObject::connectSlotsByName(DrivingWidget);
    } // setupUi

    void retranslateUi(QMainWindow *DrivingWidget)
    {
        DrivingWidget->setWindowTitle(QApplication::translate("DrivingWidget", "DrivingWidget", Q_NULLPTR));
        action->setText(QApplication::translate("DrivingWidget", "\346\217\220\347\244\272", Q_NULLPTR));
        action_tip->setText(QApplication::translate("DrivingWidget", "\346\217\220\347\244\272", Q_NULLPTR));
        action2->setText(QApplication::translate("DrivingWidget", "2", Q_NULLPTR));
        label->setText(QString());
        menu_help->setTitle(QApplication::translate("DrivingWidget", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DrivingWidget: public Ui_DrivingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVINGWIDGET_H
