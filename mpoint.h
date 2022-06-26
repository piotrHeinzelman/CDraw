#ifndef MPOINT_H
#define MPOINT_H

#include <QPoint>
#include <QLineEdit>
#include "config.h"




class MPoint : public QPoint
{
public:
    MPoint();
    MPoint( QLineEdit *input );
    MPoint( int x, int y );
    QString toString();

    const int WIDTH=Config::WIDTH;
    const int HEIGHT=Config::HEIGHT;
    const int MOUSE_OFFSET_X=Config::MOUSE_OFFSET_X;
    const int MOUSE_OFFSET_Y=Config::MOUSE_OFFSET_Y;

};

#endif // MPOINT_H
