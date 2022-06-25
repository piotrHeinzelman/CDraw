#ifndef POINT_H
#define POINT_H

#include <QPointF>
#include <QLineEdit>
#include "painter.h"

class Point : public QPoint
{
public:
    //Point();
    Point( QLineEdit *input /*, Painter *painter*/);
    QString toString();
};

#endif // POINT_H
