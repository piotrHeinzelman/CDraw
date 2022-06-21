#include "qarray.h"



void QArray::push( QObject *obj ){
    inth = head;
    if ( inth == NULL ) {
            head = new elem();
            head->obj = obj;
            head->next=NULL;
            return;
    }
    /*
    else {
        QObject *
        QObject *last = this->head;
    }
*/
  // head=obj;
}


QArray::QArray(){

}

QArray::~QArray(){
    while ( head!=NULL ) {
       elem *next=head->next;
       delete head;
       head=next;
    }
}
