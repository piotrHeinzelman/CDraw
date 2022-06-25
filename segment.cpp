#include "segment.h"
#include "point.h"

segment::segment() {}

segment::~segment() {
    delete this->start;
    delete this->center;
    delete this->end;
}


segment::segment( Point *start, Point *center, Point *end ){
    this->start = start;
    this->center = center;
    this->end = end;
}

QString segment::toString(){


    return  QString("{")
            .append( start->toString() )
            .append( center->toString() )
            .append( end->toString() )
            .append("}");
}
