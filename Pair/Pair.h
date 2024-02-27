#ifndef PAIR_H
#define PAIR_H

template <typename T1, typename T2>
class Pair{

private:
T1 first;
T2 second;


public:
Pair(T1 first, T2 second);

Pair();

T1 getFirst();

T2 getSecond();

void setFirst(T1 first);

void setSecond(T2 second);

void print();


};

#include "Pair.cpp"
#endif