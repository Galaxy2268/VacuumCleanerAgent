#ifndef LISTEL_H
#define LISTEL_H
template <class T>
class ListEl{

private:
T data;
ListEl<T> * prev;
ListEl<T> * next;


public:
ListEl(T data);


void setPrev(ListEl<T> * prev);

void setNext(ListEl<T> * next);

void setData(T);

T getData();

ListEl<T> * getNext();

ListEl<T> * getPrev();


};

#include "ListEl.cpp"
#endif