#include "../List/List.h"
#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H


//Same complexity as queue, but inserts element in order where best case O(1) and worst case O(n)
//Tāda paša sarežģītība, kā rindai, bet elements tiek ievietos augošā secībā, kur labākajā gadījumā O(1) un sliktākajā O(n)
template <class T>
class PriorityQueue {


private:

List<T> priorityQ;


public:

template <typename... Args>
PriorityQueue(Args... data);

void clear();

bool isEmpty();

int size();
  
void print();

T peek();

void push(T data);

T pop();

T getElById(int id);

};

  
#include "PriorityQueue.cpp"
#endif