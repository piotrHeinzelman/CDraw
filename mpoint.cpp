#include "mpoint.h"
#include <QPoint>




MPoint::MPoint(){};

MPoint::MPoint( QLineEdit *input ){
    QString string = input->text();
    QStringList ary = string.split(",");
    if ( ary.length()<2 ) return;

     int x, y;
     x=ary[0].toInt();
     if ( x > WIDTH ) x=WIDTH-2;
     if ( x < 2) x=2;

     y=ary[1].toInt();
     if ( y > HEIGHT ) y=HEIGHT-2;
     if ( y < 2 ) y=2;

    this->setX(x);
    this->setY(y);
    }


MPoint::MPoint( int x, int y ){
    this->setX(x);
    this->setY(y);
    }




QString MPoint::toString() {
    return  QString("[").append(QString().asprintf( "%i" , this->x())).append(", ").append( QString().asprintf( "%i" , this->y() )).append("]");
}


