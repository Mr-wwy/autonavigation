#include "bcwidget.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile qss(":/qss/myself.qss");
    if(qss.open(QIODevice::ReadOnly))
        a.setStyleSheet(qss.readAll());

    BCWidget w;
    w.show();

    return a.exec();
}
