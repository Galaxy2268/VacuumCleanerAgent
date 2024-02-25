#ifndef VECTOR_H
#define VECTOR_H
#include "../List/List.h"

template <class T>
class Vector{

private:
List<T> vector;



public:

template <typename... Args>
Vector(Args... data);

void clear();

int size();

void pushBack(T data);

T popBack();

T getEl(int index);

T getFirst();

T getLast();


};


#include "Vector.cpp"
#endif