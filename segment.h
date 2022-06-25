#ifndef SEGMENT_H
#define SEGMENT_H

#include <QPoint>
#include "point.h"


class segment {
   // Q_OBJECT
public:
    // constructors / destructors
    segment();
    segment( Point *start, Point *center, Point *end );
    ~segment();
    // methods
    QString toString();

    // properties
    Point *start;
    Point *center;
    Point *end;


};

#endif // SEGMENT_H
