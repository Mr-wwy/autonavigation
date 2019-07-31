#ifndef EMULATION_H
#define EMULATION_H

#include <QWidget>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QBoxLayout>
#include <QTableWidget>
#include <QtMath>
#include <QLabel>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QToolButton>

#include "myscene.h"
#include "myview.h"
#include "myitem.h"

namespace Ui {
class emulation;
}

class emulation : public QWidget
{
    Q_OBJECT

public:
    explicit emulation(QWidget *parent = 0);
    ~emulation();

    void setWidgetEnable(bool _enable);


public slots:
    void settable_slot(int table_index);

    void resetView();
    void setupMatrix();
    void setResetButtonEnabled();
    void togglePointerMode();
    void rotateLeft();
    void rotateRight();
    void zoomIn(int level = 1);
    void zoomOut(int level = 1);
    void go();
    void openmap();
    void closemap();

    void animation_valuechanged(QVariant value);
    void animation_finished();

signals:
    void emitrotate(int,qreal);

public:
    QSlider *zoomSlider;
    QSlider *rotateSlider;

    QLabel *label;
    QLabel *label2;

    QLabel *label4;
    QLabel *label6;
    QLabel *label8;
    QLabel *label10;
    QLabel *label12;
    QLabel *label14;
    QLabel *label16;

    QToolButton *resetButton;
    QToolButton *selectModeButton;
    QToolButton *dragModeButton;

    QToolButton *Go;
    QToolButton *Openmap;
    QToolButton *Closemap;

    bool ok;
    bool loaditemflag;//数据是否加载打开

    qreal x_min;
    qreal x_max;
    qreal y_min;
    qreal y_max;

private:
    Ui::emulation *ui;

    myscene *scene;//仿真场景类
    myview *graphicsView;//仿真窗体类


};

#endif // EMULATION_H
