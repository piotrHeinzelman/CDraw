#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>

class Window : public QMainWindow
{
    Q_OBJECT

private:
    QObject children[10];

public:
    explicit Window(QWidget *parent = nullptr);

signals:

};

#endif // WINDOW_H
