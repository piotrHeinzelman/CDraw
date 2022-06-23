#include "painter.h"
#include "ui_painter.h"
#include <QPushButton>


painter::painter(QWidget *parent) : QMainWindow(parent) , ui(new Ui::painter) {
    ui->setupUi(this);

    this->addBtn = ui->addButton;
    this->delBtn = ui->delButton;

    QAction *saveBtn = ui->saveMenuItem;
    QAction *quitBtn = ui->QuitMenuItem;

    this->statBar = ui->statusbar;




    connect( addBtn , &QPushButton::released, this, &painter::slotQuit );
    connect( saveBtn , &QAction::toggled, this, &painter::slotSave );
    connect( quitBtn , &QAction::toggled, this, &painter::slotAdd );
    connect( delBtn , &QPushButton::released, this, &painter::slotRemove );


    // addBtn->addAction( addAct );






    // CREATE ACTIONS !!!

    // Create action ( name )
//    QAction *addAct = new QAction("ACT ADD SEGMENT", parent );
//    QAction *delAct = new QAction("ACT DELETE SEGMENT", parent );
//    QAction *saveAct = new QAction("ACT SAVE", parent );
//    QAction *quitAct = new QAction("ACT QUIT", parent );



    //connect( addBtn, &QAction::triggered , this , &this::close  );

         //    addAct->connect( addBtn , &QAction::triggered , this, &this::setStatusBarText("?") );
             //addAct->setShortcut(QKeySequence::Quit);
            //addAct->setStatusTip("add point");
   //Connecy ( action, signal , this , slot );
   //connect( addAct, &QAction::triggered, this,  &this::close );

    // button to action


}


// Slots
void painter::slotQuit(){
    setStatusBarText( "slot QUIT activated !" );
}

void painter::slotSave(){
    setStatusBarText( "slot Save activated !" );
}

void painter::slotAdd(){
    setStatusBarText( "slot Add activated !" );
}

void painter::slotRemove(){
    setStatusBarText( "slot Remove activated !" );
}





void painter::setStatusBarText( const QString &str ){
    this->statBar->showMessage( str );
}

painter::~painter() {
    delete ui;
}

