#ifndef PAINTER_H
#define PAINTER_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QMouseEvent>
#include <QPen>
#include "mpoint.h"
#include "msegment.h"
#include "mtree.h"



QT_BEGIN_NAMESPACE
namespace Ui { class painter; }
QT_END_NAMESPACE

class Painter : public QMainWindow
{
  //  Q_OBJECT

public:
    Painter(QWidget *parent = nullptr);
    ~Painter();

    void draw();
    void drawSegment( MSegment *seg );
    void drawFrame();


    void setStatusBarText( const QString &str );

    MSegment * readSegmentFromInput();


    // events
    void mainSlotAddPoint( QEvent *e );

    // Slots
    void slotExit();
    void slotSave();
    void slotLoad();
    void slotAdd();
    void slotRemove();
    void clickCatch();




private:
    Ui::painter *ui;
    QPushButton *addBtn;
    QPushButton *delBtn;
    QPushButton *saveBtn;
    QPushButton *loadBtn;
    QPushButton *exitBtn;
    QStatusBar  *statBar;

    QLabel *labelW;
    QPicture *pi;
    QPainter *p;

    QPen *redPen;
    QPen *greenPen;
    QPen *grayPen;

    MTree *tree;

    const int WIDTH=400;
    const int HEIGHT=300;
    const int MOUSE_OFFSET_X=0;
    const int MOUSE_OFFSET_Y=0;

public:
    void mouseReleaseEvent(QMouseEvent *event) override;

};
#endif // PAINTER_H
