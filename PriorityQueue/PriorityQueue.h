#include "../List/List.h"
#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include <iostream>


template <class T>
class PriorityQueue {


private:

List<T> priorityQ;


public:

template <typename... Args>
PriorityQueue(Args... data);

~PriorityQueue();

bool isEmpty();

int size();
  
void print();

T peek();

void push(T data);

T pop();

};

  
#include "PriorityQueue.cpp"
#endif