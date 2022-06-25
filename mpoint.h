#ifndef MPOINT_H
#define MPOINT_H

#include <QPoint>
#include <QLineEdit>
#include "painter.h"


class MPoint : public QPoint
{
public:
    MPoint();
    MPoint( QLineEdit *input /*, Painter *painter*/);
    QString toString();
};

#endif // MPOINT_H
