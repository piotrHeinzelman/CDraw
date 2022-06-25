#include "painter.h"
#include "ui_painter.h"
#include <QPushButton>
#include <QLabel>
#include <QPicture>
#include <QGraphicsWidget>
#include <QGraphicsView>
#include <QLine>
#include <QPoint>
#include <QPen>
#include <QPicture>
#include <QPainter>
#include <QMouseEvent>
#include <iostream>
#include "msegment.h"
#include "mpoint.h"
#include <QPen>




Painter::Painter(QWidget *parent) : QMainWindow(parent) , ui(new Ui::painter) {
    ui->setupUi(this);

    this->addBtn = ui->addButton;
    this->delBtn = ui->delButton;
    this->saveBtn = ui->saveButton;
    this->loadBtn = ui->loadButton;
    this->exitBtn = ui->exitButton;

    this->labelW = ui->labelWgt;


    this->statBar = ui->statusbar;


    connect( addBtn , &QPushButton::released, this, &Painter::slotAdd );
    connect( delBtn , &QPushButton::released, this, &Painter::slotRemove );
    connect( saveBtn , &QPushButton::released, this, &Painter::slotSave );
    connect( loadBtn , &QPushButton::released, this, &Painter::slotLoad );
    connect( exitBtn , &QPushButton::released, this, &Painter::slotExit );

   // connect( this , &QMouseEvevent::mousePressEvent, this, &Painter::slotExit );

    redPen   = new QPen(Qt::darkGreen, 2);
    greenPen = new QPen(Qt::red, 2);

    pi = new QPicture();
    p  = new QPainter( pi );
    p->setRenderHint(QPainter::Antialiasing);
    p->setPen( *redPen );

}


// Slots
void Painter::slotExit(){
    setStatusBarText( "slot QUIT activated !" );
}

void Painter::slotSave(){
    setStatusBarText( "slot Save activated !" );
}

void Painter::slotLoad(){
    setStatusBarText( "slot Load activated !" );
}

void Painter::slotAdd(){

    MPoint *p = new MPoint( ui->inputStart );
    setStatusBarText( p->toString() );
}

void Painter::slotRemove(){

    MPoint *start =  new MPoint( ui->inputStart );
    MPoint *center = new MPoint( ui->inputCenter );
    MPoint *end =   new MPoint( ui->inputEnd );

    //MSegment *seg = new MSegment( start, center, end );

    //drawSegment( seg );
    draw();

    //delete seg;
    delete start;
    delete center;
    delete end;
    return;

}




void Painter::clickCatch(){
    setStatusBarText( "click" );
}





void Painter::setStatusBarText( const QString &str ){
    this->statBar->showMessage( str );
}

Painter::~Painter() {
    delete ui;
}




void Painter::mouseReleaseEvent(QMouseEvent *event) {

    QPointF point = event->localPos();

    const QString info = QString().asprintf( "%0.f", point.x());
   this->setStatusBarText( info );
};

/*
void Painter::drawSegment( MSegment *seg ){
    p->drawLine( seg->start->x(), seg->start->y(), seg->end->x(), seg->end->y() );
}
*/


void Painter::draw(){

    p->drawLine(0, 0, 200, 200);
    p->end(); // Don't forget this line!

    labelW->clear();
    labelW->setPicture(*pi);
    labelW->setPicture(*pi);
    labelW->show();

};

