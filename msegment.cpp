#include "msegment.h"
#include "mpoint.h"

MSegment::MSegment() {
};


MSegment::MSegment( MPoint *start , MPoint *center, MPoint *end ){

    this->start=start;
    this->center=center;
    this->end=end;

};


MSegment::~MSegment(){
    delete start;
    delete center;
    delete end;
};


MPoint* MSegment::getStart(){ return this->start; };
MPoint* MSegment::getCenter(){ return this->center; };
MPoint* MSegment::getEnd(){ return this->end; };


QString MSegment::toString(){
    QString out="";
    out.append( "{" );
    out.append( this->start->toString() );
    //out.append( ", c:" );
    out.append( this->center->toString() );
    //out.append( ", e:" );
    out.append( this->end->toString() );
    out.append( "}" );
    return out;
};


