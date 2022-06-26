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

    this->tree = new MTree();


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
    this->close();
}

void Painter::slotSave(){
    setStatusBarText( "slot Save activated !" );
}

void Painter::slotLoad(){
    setStatusBarText( "slot Load activated !" );
}

void Painter::slotAdd(){

    MSegment* seg=readSegmentFromInput();
    if (seg==NULL) return;
    tree->addSegment( seg );

  //  setStatusBarText( tree );

    //MPoint *p = new MPoint( ui->inputStart );
    //setStatusBarText( p->toString() );
}

void Painter::slotRemove(){
    draw();
    return;

}















void Painter::setStatusBarText( const QString &str ){
    this->statBar->showMessage( str );
}

Painter::~Painter() {
    delete ui;
}



MSegment* Painter::readSegmentFromInput(){
    MPoint *start =  new MPoint( ui->inputStart );
    MPoint *center = new MPoint( ui->inputCenter );
    MPoint *end =   new MPoint( ui->inputEnd );
    MSegment *seg = new MSegment( start, center, end );
    setStatusBarText(  seg->toString() );

    return seg;
}



void Painter::mouseReleaseEvent(QMouseEvent *event) {

    QPointF point = event->localPos();

    const QString info = QString().asprintf( "%0.f", point.x());
   this->setStatusBarText( info );
};


void Painter::drawSegment( MSegment *seg ){
    MPoint *s = seg->getStart();
    MPoint *c = seg->getCenter();
    MPoint *e = seg->getEnd();

    p->drawLine( s->x(), s->y(), e->x(), e->y() );
}



void Painter::draw(){

    int i=0;
    tree->reset();
    MSegment* tmp;
    while ( !tree->isLast() ) {
        tmp=tree->getNextSegment();
        drawSegment( tmp );
        setStatusBarText( QString().asprintf("%i",i) ); i++;
    }




  /*  while( !tree->isLast() ) {
        MSegment* current=tree->getNextSegment();
        drawSegment( current ); }
    this->setStatusBarText( tree->toString() );
*/

    p->end(); // Don't forget this line!

    labelW->clear();
    labelW->setPicture(*pi);
    labelW->setPicture(*pi);
    labelW->show();

    this->setStatusBarText( tree->toString() );

};

