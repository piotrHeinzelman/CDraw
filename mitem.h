#ifndef MITEM_H
#define MITEM_H

#include <QListWidgetItem>
#include "msegment.h"

class MItem : public QListWidgetItem
{

public:
    MItem( MSegment* link, QString label );
    MSegment* linkToSegment;
};

#endif // MITEM_H
