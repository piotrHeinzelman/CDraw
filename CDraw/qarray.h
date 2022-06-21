#ifndef ARRAY_H
#define ARRAY_H
#include <QObject>


class QArray {

private:

    struct elem{
    QObject *obj= NULL;
      elem *next=NULL;
    };

      elem *head = NULL;
      elem *last = NULL;
      elem *inth = NULL;

public:

    QArray();
    ~QArray();

    void push( QObject * obj );
    void show();

    QObject pop();

};

#endif // ARRAY_H
