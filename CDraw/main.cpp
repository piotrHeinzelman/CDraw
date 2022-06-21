#include <QApplication>
#include <QMainWindow>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
        printf ( "*** prepare ***\r\n" );

    QMainWindow *win = new QMainWindow();

    //QTextEdit textEdit = new QTextEdit( QWidget win );
    // hidden constructor ?? -> Window win = & ( new Window());
    //QLabel label;

    win->show();
    int result=app.exec();
    delete win;
    printf ( "*** destroy ***\r\n" );
    return result;

}
