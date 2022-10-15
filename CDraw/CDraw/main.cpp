#include <QApplication>
#include <QMainWindow>
#include <QFileDialog>
#include "window.h"
//#include "qarray.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
        printf ( "*** prepare ***\r\n" );

    Window win;
           win.show();

    int result = app.exec();

    printf ( "*** destroy ***\r\n" );
    if (false) return result;
    return 1; //result;
}






// QFileDialog fDialog;
// fDialog.show();



// QArray ary;
     //   ary.push( win );
