#ifndef DRIVING_MAPVIEW_H_
#define DRIVING_MAPVIEW_H_

#include <QGraphicsView>
#include <QWheelEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QScrollBar>


class MapView : public QGraphicsView
{
    Q_OBJECT

public:
    MapView(QWidget *parent = 0);
    ~MapView();


public:
    //平移速度
    void setTranslateSpeed(qreal speed);
    qreal translateSpeed() const;
   //缩放增量
    void setZoomDelta(qreal delta);

    qreal zoomDelta() const;

    void toemit_view_changedSignals();

    void setZoomRange(double _min, double _max);

signals:
   // void view_changed(qreal left,qreal top,qreal width,qreal height);
    void mousedoubleclick_centeron();

public slots:
    void zoomIn(); //放大
    void zoomOut();//缩小
    void zoom(double scaleFactor); //缩放--scaleFactor：缩放比例因子
    void key_translate(QPointF delta);//平移

    void horizontalBar(int value);
    void verticallBar(int value);


protected:
    //键盘事件  上/下/左/右键向各个方向移动、加/减进行缩放、空格键/回车键旋转
    void keyPressEvent(QKeyEvent *event)   Q_DECL_OVERRIDE;
    //鼠标平移
    void mouseMoveEvent(QMouseEvent *event)    Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *event)    Q_DECL_OVERRIDE;
    void mouseReleaseEvent(QMouseEvent *event)    Q_DECL_OVERRIDE;
    //缩放
    void wheelEvent(QWheelEvent *event)   Q_DECL_OVERRIDE;
    //鼠标双击
    void mouseDoubleClickEvent(QMouseEvent *event)   Q_DECL_OVERRIDE;

private:
    Qt::MouseButton m_translateButton;//平移按钮
    qreal m_translateSpeed;//平移速度
    qreal m_zoomDelta;//缩放增量
    bool m_bMouseTranslate;//平移标识
    bool m_isfirst_mousepress;//
    QPoint m_lastMousePos;//鼠标最后按下的位置
    qreal m_scale;//缩放值

    qreal center_x;
    qreal center_y;

    int current_horizontalvalue;
    int current_verticalvalue;

    double scale_min;
    double scale_max;

};

#endif // DRIVING_MAPVIEW_H_




























































































