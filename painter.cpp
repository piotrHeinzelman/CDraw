#include "painter.h"
#include "ui_painter.h"
#include <QPushButton>


painter::painter(QWidget *parent) : QMainWindow(parent) , ui(new Ui::painter) {
    ui->setupUi(this);

    QPushButton *add = ui->addButton;
    QPushButton *del = ui->delButton;



    //add->addAction(  )
}

painter::~painter() {
    delete ui;
}

