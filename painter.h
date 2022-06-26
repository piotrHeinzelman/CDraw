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
#include "config.h"
#include "mlist.h"
#include <QListWidget>



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
    void drawSegment2( MSegment *seg );

    void drawFrame();


    void listRefresh();
    void bezier();
    double pow( double a, double b );



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
    QPushButton *drawBtn;
    QStatusBar  *statBar;

    QLabel *labelW;
    QPicture *pi;
    QPainter *p;

    QPen *redPen;
    QPen *greenPen;
    QPen *grayPen;

    MTree *tree;
    QListWidget *mList;

    int tick;

    MPoint *start;
    MPoint *center;
    MPoint *end;

    const int WIDTH=Config::WIDTH;
    const int HEIGHT=Config::HEIGHT;
    const int MOUSE_OFFSET_X=Config::MOUSE_OFFSET_X;
    const int MOUSE_OFFSET_Y=Config::MOUSE_OFFSET_Y;

public:
    void mouseReleaseEvent(QMouseEvent *event) override;

};
#endif // PAINTER_H
