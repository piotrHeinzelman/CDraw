#ifndef MSEGMENT_H
#define MSEGMENT_H

#include <QObject>
#include "mpoint.h"

class MSegment : public QObject {
    //Q_OBJECT
public:
    MSegment();
    MSegment( MPoint * start , MPoint * center, MPoint  * end );
    ~MSegment();


    MPoint* getStart();
    MPoint* getCenter();
    MPoint* getEnd();

    MSegment* next;
    MSegment* prev;

    QString toString();

private:
    MPoint *start;
    MPoint *center;
    MPoint *end;

};

#endif // MSEGMENT_H
