#include <QApplication>
#include <QtWidgets>
#include "Window.h"
#include <QLabel>


int main(int argc, char *argv[]){
    QApplication app(argc, argv);
        printf ( "*** prepare ***\r\n" );

    Window *win = new Window( NULL );
    QTextEdit textEdit = new QTextEdit( QWidget win );

    // hidden constructor ?? -> Window win = & ( new Window());
    QLabel label;




    return app.exec();
}
