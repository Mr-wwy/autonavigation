#ifndef DRIVING_MAP_LOCALIZATION_H_
#define DRIVING_MAP_LOCALIZATION_H_

#include <QWidget>
#include <QGraphicsScene>
#include <QPointF>
#include <QVector>
#include <QLabel>
#include <QMouseEvent>
#include <QMenu>
#include <QAction>

class MapView;
class LocalLineItem;
class SelfPosItem;
class DangerItem;

namespace Ui {
class Map_Localization;
}

class Map_Localization : public QWidget
{
    Q_OBJECT

public:
    explicit Map_Localization(QWidget *parent = 0,QString filename="");
    ~Map_Localization();

protected:
    void paintEvent(QPaintEvent *event);

public:
    void  load_map(QString filename);

    bool read_localline(QString filename);

    void add_localitem();

    void add_selfpositem();

    void add_dangeritem();

    void change_Map_Localization(qreal gaussX,qreal gaussY,float azimuth,int key_id);

public slots:
    void mousedoubleclick_centeronslot();
    void customContextMenuRequested_slot(QPoint p);
    void openaction_slot(bool);


private:
    Ui::Map_Localization *ui;

    MapView *m_view;

    QGraphicsScene *m_scene;

    LocalLineItem *m_locallineItem;

    SelfPosItem *m_selfposItem;

    DangerItem *m_dangerItem;

    QMenu *m_menu;

    QAction *m_openaction;

    QPointF m_startpoint;

    QPointF m_realstart;

    QPointF m_dangerpoint;

    qreal m_radius;

    QVector<QPointF> m_localline;

//    QVector<QPointF> m_self;

    QPointF m_selfpos;

    bool havelocallineitem;

    bool haveselfpositem;

    bool is_first_read_data;

    bool is_loadmap_success;

    float m_azimuth;    //航向角，单位0.01度，向东为0，逆时针0～36000

    int unique_key_id;

    long x_min;

    long x_max;

    long y_min;

    long y_max;

};

#endif // DRIVING_MAP_LOCALIZATION_H_
























