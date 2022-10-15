#ifndef DRAWONE_H
#define DRAWONE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class drawOne; }
QT_END_NAMESPACE

class drawOne : public QMainWindow
{
    Q_OBJECT

public:
    drawOne(QWidget *parent = nullptr);
    ~drawOne();

private:
    Ui::drawOne *ui;

};
#endif // DRAWONE_H
