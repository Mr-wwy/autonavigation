#ifndef VIEW_H
#define VIEW_H

#include <QFrame>
#include <QGraphicsView>
#include <QToolButton>
#include <QSlider>
#include <QLabel>
#include <QWheelEvent>
#include <QStyle>
#include <QLayout>
#include <QButtonGroup>

class QLabel;
class QSlider;
class QToolButton;
class View;

class GraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    GraphicsView(View *v) : QGraphicsView(), view(v) { }

protected:
    void wheelEvent(QWheelEvent *) override;

private:
    View *view;
};

class View : public QFrame
{
    Q_OBJECT
public:
    explicit View(const QString &name, QWidget *parent = 0);

    QGraphicsView *view() const;

public slots:
    void zoomIn(int level = 1);
    void zoomOut(int level = 1);

private slots:
    void resetView();
    void setResetButtonEnabled();
    void setupMatrix();
    void togglePointerMode();
    void rotateLeft();
    void rotateRight();

private:
    GraphicsView *graphicsView;
    QLabel *label;
    QLabel *label2;
    QToolButton *selectModeButton;
    QToolButton *dragModeButton;
    QToolButton *resetButton;
    QSlider *zoomSlider;
    QSlider *rotateSlider;
};

#endif // VIEW_H
