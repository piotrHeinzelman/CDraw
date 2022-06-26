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
#include <QRectF>
#include "config.h"
#include "mitem.h"



Painter::Painter(QWidget *parent) : QMainWindow(parent) , ui(new Ui::painter) {
    ui->setupUi(this);

    this->addBtn = ui->addButton;
    this->delBtn = ui->delButton;
    this->saveBtn = ui->saveButton;
    this->loadBtn = ui->loadButton;
    this->exitBtn = ui->exitButton;
    this->drawBtn = ui->drawButton;

    this->mList = ui->listView;

    this->labelW = ui->labelWgt;

    this->statBar = ui->statusbar;

    this->tree = new MTree();

    connect( addBtn , &QPushButton::released, this, &Painter::slotAdd );
    connect( delBtn , &QPushButton::released, this, &Painter::slotRemove );
    connect( saveBtn , &QPushButton::released, this, &Painter::slotSave );
    connect( loadBtn , &QPushButton::released, this, &Painter::slotLoad );
    connect( exitBtn , &QPushButton::released, this, &Painter::slotExit );
    connect( drawBtn , &QPushButton::released, this, &Painter::draw );

   // connect( this , &QMouseEvevent::mousePressEvent, this, &Painter::slotExit );

    redPen   = new QPen(Qt::darkGreen, 2);
    greenPen = new QPen(Qt::red, 2);
    grayPen = new QPen(Qt::gray, 2);


    pi = new QPicture();
    p  = new QPainter( pi );
    p->setRenderHint(QPainter::Antialiasing);
    p->setPen( *grayPen );

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
    draw();
}

void Painter::slotAdd(){

    MSegment* seg=readSegmentFromInput();
    if (seg==NULL) return;
    tree->addSegment( seg );
    draw();
}

void Painter::slotRemove(){
    tree->removeChildren();
    draw();

  setStatusBarText( "All children removed ! slot Remove All activated !" );
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






void Painter::draw(){


    delete p;
    delete pi;
    pi = new QPicture();
    p  = new QPainter( pi );
    p->setRenderHint(QPainter::Antialiasing);
    p->setPen( *grayPen );


    tree->reset();
    drawFrame();
    p->setPen( *greenPen );


    MSegment* seg = tree->getNextSegment();
    while ( seg!=NULL ) {
        // draw
        drawSegment( seg );
        this->setStatusBarText( seg->toString()  );
        seg=seg->next;
    }

    p->end(); // Don't forget this line!

    labelW->clear();
    labelW->setPicture(*pi);
    labelW->setPicture(*pi);
    labelW->show();

    this->setStatusBarText( tree->toString() );
    listRefresh();
};


void Painter::drawFrame(){
    p->setPen(*redPen);
    this->p->drawLine(0,0,WIDTH,0);
    this->p->drawLine(WIDTH,0,WIDTH,HEIGHT);
    this->p->drawLine(WIDTH,HEIGHT,0,HEIGHT);
    this->p->drawLine(0,HEIGHT,0,0);

}



void Painter::drawSegment( MSegment *seg ){
    MPoint *s = seg->getStart();
    MPoint *c = seg->getCenter();
    MPoint *e = seg->getEnd();

    setStatusBarText( seg->toString() );
    this->p->drawLine( s->x(), s->y(), e->x(), e->y() );
    this->p->drawPoint( c->x(), c->y() );

}







// **********************

void Painter::listRefresh(){

    //mList->currentIndex();
    mList->clear();
    qint8 i=0;

    tree->reset();
    MSegment* seg = tree->getNextSegment();
    while ( seg!=NULL ) {
    mList->addItem( QString::number(i).append( " : " ).append(seg->toString()) ); i++;
    seg=seg->next;
    }
    mList->update();



}







