#include "Pair.h"
#include <iostream>

template <typename T1, typename T2>
Pair<T1,T2>::Pair(T1 first, T2 second){
    this->first = first;
    this->second = second;
}

template <typename T1, typename T2>
T1 Pair<T1,T2>::getFirst(){
    return this->first;
}

template <typename T1, typename T2>
T2 Pair<T1,T2>::getSecond(){
    return this->second;
}

template <typename T1, typename T2>
void Pair<T1,T2>::setFirst(T1 first){
    this->first = first;
}

template <typename T1, typename T2>
void Pair<T1,T2>::setSecond(T2 second){
    this->second = second;
}

template <typename T1, typename T2>
void Pair<T1,T2>::print(){
    std::cout << getFirst() << " " << getSecond() << "\n";
}




