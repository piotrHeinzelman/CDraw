#include "painter.h"
#include "ui_painter.h"
#include <QPushButton>
#include <QLabel>

painter::painter(QWidget *parent) : QMainWindow(parent) , ui(new Ui::painter) {
    ui->setupUi(this);

    this->addBtn = ui->addButton;
    this->delBtn = ui->delButton;
    this->saveBtn = ui->saveButton;
    this->loadBtn = ui->loadButton;
    this->exitBtn = ui->exitButton;

    this->labelW = ui->labelWgt;


    this->statBar = ui->statusbar;


    connect( addBtn , &QPushButton::released, this, &painter::slotExit );
    connect( delBtn , &QPushButton::released, this, &painter::slotRemove );
    connect( saveBtn , &QPushButton::released, this, &painter::slotSave );
    connect( loadBtn , &QPushButton::released, this, &painter::slotLoad );
    connect( exitBtn , &QPushButton::released, this, &painter::slotExit );


}


// Slots
void painter::slotExit(){
    setStatusBarText( "slot QUIT activated !" );
}

void painter::slotSave(){
    setStatusBarText( "slot Save activated !" );
}

void painter::slotLoad(){
    setStatusBarText( "slot Load activated !" );
}

void painter::slotAdd(){
    setStatusBarText( "slot Add activated !" );
}

void painter::slotRemove(){
    setStatusBarText( "slot Remove activated !" );
}




void painter::clickCatch(){
    setStatusBarText( "click" );
}





void painter::setStatusBarText( const QString &str ){
    this->statBar->showMessage( str );
}

painter::~painter() {
    delete ui;
}






/*

QPicture pi;
QPainter p(&pi);
p.setRenderHint(QPainter::Antialiasing);
p.setPen(QPen(Qt::black, 12, Qt::DashDotLine, Qt::RoundCap));
p.drawLine(0, 0, 200, 200);
p.end(); // Don't forget this line!

QLabel l;
l.setPicture(pi);
l.show();
*/
