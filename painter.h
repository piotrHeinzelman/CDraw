#ifndef PAINTER_H
#define PAINTER_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>


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
    void slotExit();
    void slotSave();
    void slotLoad();
    void slotAdd();
    void slotRemove();
    void clickCatch();




private:
    Ui::painter *ui;
    QPushButton *addBtn;
    QPushButton *delBtn;
    QPushButton *saveBtn;
    QPushButton *loadBtn;
    QPushButton *exitBtn;
    QStatusBar  *statBar;

    QLabel *labelW;




};
#endif // PAINTER_H
