#ifndef PAINTER_H
#define PAINTER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class painter; }
QT_END_NAMESPACE

class painter : public QMainWindow
{
    Q_OBJECT

public:
    painter(QWidget *parent = nullptr);
    ~painter();

private:
    Ui::painter *ui;
};
#endif // PAINTER_H
