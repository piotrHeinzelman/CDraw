#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include "textbox.h"

class Window : public QMainWindow
{
    Q_OBJECT

private:
    textBox *myTextBox;

public:
    explicit Window(QWidget *parent = nullptr);
    void setTitle( QString name );
signals:

};

#endif // WINDOW_H
