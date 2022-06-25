#ifndef MPOINT_H
#define MPOINT_H

#include <QPoint>
#include <QLineEdit>




class MPoint : public QPoint
{
public:
    MPoint();
    MPoint( QLineEdit *input );
    QString toString();
};

#endif // MPOINT_H
