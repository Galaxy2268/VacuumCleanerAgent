//
// Created by danie on 05/11/2024.
//

#include "Queue.h"

#include <iostream>

template<class T>
template <typename... Args>
Queue<T>::Queue(Args... data) : queue(data...){
    queue.sort();
}




template<class T>
void Queue<T>::clear(){
    queue.clear();
}



template<class T>
bool Queue<T>::isEmpty(){
    return queue.isEmpty();
}



template<class T>
int Queue<T>::size(){
    return queue.size();
}



template<class T>
void Queue<T>::print(){
    while (!queue.isEmpty()){
        std::cout<< this->pop() << " ";
    }
}



template<class T>
T Queue<T>::peek(){
    if (queue.isEmpty()){
        throw out_of_range("Priority Queue is empty");
    }
    return queue.getFirst();
}



template <class T>
void Queue<T>::push(T data){
    queue.addLast(data);
}



template<class T>
T Queue<T>::pop(){
    if (queue.isEmpty()){
        throw out_of_range("Priority Queue is empty");
    }
    T data = queue.getFirst();
    queue.removeFirst();

    return data;

}

template<class T>
T Queue<T>::getElById(int id) {
    return this->priorityQ.getEl(id);
}