#include "mtree.h"

MTree::MTree(){
    this->position=0;
    this->head=NULL;
    this->current=NULL;
}

void MTree::reset(){
    this->position=0;
    this->current=head;
}


void MTree::addSegment( MSegment *seg ) {

    MSegment *newSeg = seg;
    newSeg->next=NULL;

    if ( head==NULL ) {
        newSeg->prev=NULL;
        head=newSeg;
        return;
    }
    MSegment* tmp;
    tmp = head;
    while( tmp->next!=NULL ) { tmp=tmp->next; }
    tmp->next = newSeg;
    newSeg->prev=tmp;
}


MSegment* MTree::getNextSegment(){
    if ( current->next != NULL ) {
        current=current->next;
    }
    if ( current!=NULL ) return current;
    return NULL;
}


bool MTree::isLast(){
    if ( current == NULL ) return true;
    if ( current->next == NULL) return true;
    return false;
};


QString MTree::toString(){

    QString out="{";
    this->reset();
    while ( current!=NULL ){ out.append( current->getStart()->toString() ); current=current->next;}
    out.append("}");
    return out;
};

void MTree::save(){
};

void MTree::load(){
};
