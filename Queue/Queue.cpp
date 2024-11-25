//
// Created by danie on 05/11/2024.
//

#include "Queue.h"


template<class T>
template <typename... Args>
Queue<T>::Queue(Args... data) : queue(data...){
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
    for(int i = 0; i < queue.size(); i++){
        std::cout << queue.getEl(i) << " ";
    }
}



template<class T>
T Queue<T>::peek(){
    if (queue.isEmpty()){
        throw std::out_of_range("Priority Queue is empty");
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
        throw std::out_of_range("Priority Queue is empty");
    }
    T data = queue.getFirst();
    queue.removeFirst();

    return data;

}

template<class T>
T Queue<T>::getElById(int id) {
    return this->queue.getEl(id);
}