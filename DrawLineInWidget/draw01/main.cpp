#include "drawone.h"

#include <QApplication>
#include <QPainter>
#include <QWidget>
#include <QPicture>
#include <QLabel>


int main(int argc, char *argv[]) {

    QApplication a(argc, argv);

    QPicture pi;
    QPainter p(&pi);
    p.setRenderHint(QPainter::Antialiasing);
    p.setPen(QPen(Qt::black, 12, Qt::DashDotLine, Qt::RoundCap));
    p.drawLine(0, 0, 200, 200);
    p.end(); // Don't forget this line!

    QLabel l;
    l.setPicture(pi);
    l.show();
    return a.exec();
}
