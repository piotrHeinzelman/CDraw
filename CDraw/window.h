#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QTextEdit>

class Window : public QMainWindow {
    Q_OBJECT

public:
    // constructor
    // Window();
    explicit Window(QWidget *parent = nullptr);



    //destructor
    ~Window();

signals:

};

#endif //WINDOW_H
