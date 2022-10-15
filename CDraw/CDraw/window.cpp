#include "window.h"
#include "textbox.h"
#include <QString>

Window::Window( QWidget *parent ) : QMainWindow(parent) {

//this->addToolBar("working");
this->resize(400,300);
this->setWindowTitle("** Notatnik **");


this->myTextBox = new textBox();
this->setCentralWidget( new textBox() );


}


void Window::setTitle( QString name ){//const QString &
 this->setWindowTitle( name );


}
 //QTextEdit textEdit = new QTextEdit( QWidget win );
