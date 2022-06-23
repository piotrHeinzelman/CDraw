#ifndef PAINTER_H
#define PAINTER_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class painter; }
QT_END_NAMESPACE

class painter : public QMainWindow
{
    Q_OBJECT

public:
    painter(QWidget *parent = nullptr);
    ~painter();

    void setStatusBarText( const QString &str );


private:
    Ui::painter *ui;
    QPushButton *add;
    QPushButton *del;
    QStatusBar  *statBar;
};
#endif // PAINTER_H
