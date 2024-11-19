//
// Created by danie on 05/11/2024.
//
#include "../List/List.h"

#ifndef VACUMCLEANERAGENT_QUEUE_H
#define VACUMCLEANERAGENT_QUEUE_H



template <class T>
class Queue {


private:

    List<T> queue;


public:

    template <typename... Args>
    Queue(Args... data);

    void clear();

    bool isEmpty();

    int size();

    void print();

    T peek();

    void push(T data);

    T pop();

    T getElById(int id);
};

#include "Queue.cpp"
#endif //VACUMCLEANERAGENT_QUEUE_H
