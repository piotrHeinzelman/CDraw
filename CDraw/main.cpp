#include <QApplication>
#include <QMainWindow>
#include "qarray.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
        printf ( "*** prepare ***\r\n" );

    QMainWindow *win = new QMainWindow();

    //QTextEdit textEdit = new QTextEdit( QWidget win );
    // hidden constructor ?? -> Window win = & ( new Window());
    //QLabel label;

    win->show();

    QArray ary;
  //          ary.push( win );

    int result = app.exec();
    delete win;
    printf ( "*** destroy ***\r\n" );
    if (false) return result;
    return 1; //result;

}
