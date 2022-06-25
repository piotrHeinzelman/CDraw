#include "point.h"
#include <QPointF>
#include "painter.h"


Point::Point( QLineEdit *input /*, Painter *painter */){
    QString string = input->text();
    QStringList ary = string.split(",");
    if ( ary.length()<2 ) return;

     int x, y;
     x=ary[0].toInt();
     y=ary[1].toInt();

    this->setX(x);
    this->setY(y);
    }


QString Point::toString() {
    return  QString("[").append(QString().asprintf( "%i" , this->x())).append(", ").append( QString().asprintf( "%i" , this->y() )).append("]\r\n");
}
