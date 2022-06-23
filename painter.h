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

    // events
    void mainSlotAddPoint( QEvent *e );

    // Slots
    void slotQuit();
    void slotSave();
    void slotAdd();
    void slotRemove();





private:
    Ui::painter *ui;
    QPushButton *addBtn;
    QPushButton *delBtn;
    QStatusBar  *statBar;





};
#endif // PAINTER_H
