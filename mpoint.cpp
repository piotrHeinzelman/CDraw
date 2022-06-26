#include "mpoint.h"
#include <QPoint>
#include "pain"



MPoint::MPoint(){};

MPoint::MPoint( QLineEdit *input ){
    QString string = input->text();
    QStringList ary = string.split(",");
    if ( ary.length()<2 ) return;

     int x, y;
     x=ary[0].toInt();
     if ( x > )
     y=ary[1].toInt();

    this->setX(x);
    this->setY(y);
    }


QString MPoint::toString() {
    return  QString("[").append(QString().asprintf( "%i" , this->x())).append(", ").append( QString().asprintf( "%i" , this->y() )).append("]");
}
