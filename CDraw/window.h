#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>

class Window : public QMainWindow {
    Q_OBJECT

public:
    //explicit Window(QWidget *parent = nullptr);

    // constructor
    Window(){

    }

    //destructor
    ~Window(){
     printf("\r\nwhy?","%s");
    }

signals:

};

#endif // WINDOW_H
