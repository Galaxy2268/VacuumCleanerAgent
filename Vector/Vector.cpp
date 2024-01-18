#include "Vector.h"



template <class T>
template <typename... Args>
Vector<T>::Vector(Args... data) : vector(data...){
    
}

template <class T>
Vector<T>::~Vector(){
    this->vector.clear();
}

template <class T>
int Vector<T>::size(){
    return vector.size();
}

template <class T>
void Vector<T>::pushBack(T data){
    vector.addBack(data);
}

template <class T>
T Vector<T>::popBack(){
    if(this->size() == 0) return -1;
    T data = vector.getLast();
    vector.removeBack();

    return data;
}

template <class T>
T Vector<T>::getEl(int index){
    return vector.getElById(index);
}

template <class T>
T Vector<T>::getFirst(){
    return vector.getFirst();
}

template <class T>
T Vector<T>::getLast(){
    return vector.getLast();
}