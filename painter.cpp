#include "painter.h"
#include "ui_painter.h"
#include <QPushButton>


painter::painter(QWidget *parent) : QMainWindow(parent) , ui(new Ui::painter) {
    ui->setupUi(this);

    this->add = ui->addButton;
    this->del = ui->delButton;

    this->statBar = ui->statusbar;

    QAction *addPointAction = new QAction("ADD_POINT_ACTION", parent );
//    QAction *addPointAction = new QAction("ADD_POINT_ACTION", parent );

        //    addPointAction->connect()


          add->addAction( addPointAction );
    this->statBar->showMessage("abc");

}


void painter::setStatusBarText( const QString &str ){
    this->statBar->showMessage( str );
}

painter::~painter() {
    delete ui;
}

