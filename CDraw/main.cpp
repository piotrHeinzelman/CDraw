#include <QApplication>
#include <QtWidgets>
#include "Window.h"
#include <QLabel>


int main(int argc, char *argv[]){
    QApplication app(argc, argv);
        printf ( "*** prepare ***\r\n" );


    Window win; // hidden constructor ?? -> Window win = & ( new Window());
    QLabel label;
    QTextEdit *textEdit = new QTextEdit() ;


    win.setCentralWidget( textEdit );
    win.resize(400,300);
    win.show();
   // Dialog w = new Dialog();
   // w.show();

    return app.exec();
}
