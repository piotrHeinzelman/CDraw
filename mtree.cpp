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
    if ( current==NULL ) return NULL;
    MSegment* tmp=current;
    current->next;
    return tmp;
    }



QString MTree::toString(){

    QString out="{";
    this->reset();
    while ( current!=NULL ){ out.append( current->getStart()->toString() ); current=current->next;}
    out.append("}");
    return out;
};

void MTree::fromString( QString *string=nullptr ){

    QString out="{[0,0][150,150][450,300]}";
    this->reset();
    while ( current!=NULL ){ out.append( current->getStart()->toString() ); current=current->next;}
    out.append("}");

};

void MTree::removeChildren() {
    current=head;
    while ( current!=NULL ) {
        MSegment *tmp=current;
        current=current->next;
        delete tmp;
    }
    this->head=NULL;
    this->current=NULL;


}



void MTree::save(){
};

void MTree::load(){
};
