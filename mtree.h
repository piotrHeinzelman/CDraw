#ifndef MTREE_H
#define MTREE_H

#include "msegment.h"

class MTree
{
public:
    MTree();
    void addSegment( MSegment *seg );
    bool isLast();
    MSegment* getNextSegment();
    void reset();
    void removeChildren();

    QString toString();
    void fromString( QString *string );

    void save();
    void load();

private:
    int position;

    MSegment* head;
    MSegment* current;

};

#endif // MTREE_H
