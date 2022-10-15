#include "drawone.h"
#include "ui_drawone.h"

drawOne::drawOne( QWidget *parent ) : QMainWindow(parent), ui(new Ui::drawOne) {
    ui->setupUi(this);
    //printf( "\r\n >> %s" , ui->menubar );


    ui->statusbar->showMessage("(c) 2022");

    QAction *actionPlik = new QAction("Plik", ui->menubar );
        //     actionPlik->set


    ui->menubar->addAction( actionPlik );
//    ui->centralwidget=T




   // QToolBar *toolbar = new QToolBar( *this, "this" );
   // this->addToolB022( QToolBar toolBar(this) );

    //this->setMenuBar( menuOne );

}

drawOne::~drawOne()
{
    delete ui;
}


