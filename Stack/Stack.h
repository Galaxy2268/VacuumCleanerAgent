#ifndef VACUMCLEANERAGENT_STACK_H
#define VACUMCLEANERAGENT_STACK_H
#include "../List/List.h"

template<typename T>
class Stack {
private:
    List<T> stack;

public:
    Stack();

    void push(T data);

    T peek();

    T pop();

    int size();

    void clear();

    bool isEmpty();

    bool contains(T data);



};

#include "Stack.cpp"
#endif //VACUMCLEANERAGENT_STACK_H
