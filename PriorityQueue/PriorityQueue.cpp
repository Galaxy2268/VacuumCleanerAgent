#include "PriorityQueue.h"



template<class T>
template <typename... Args>
PriorityQueue<T>::PriorityQueue(Args... data) : priorityQ(data...){
  priorityQ.sort();
}




template<class T>
void PriorityQueue<T>::clear(){
  priorityQ.clear();
}



template<class T>
bool PriorityQueue<T>::isEmpty(){
  return priorityQ.isEmpty();
}



template<class T>
int PriorityQueue<T>::size(){
  return priorityQ.size();
}



template<class T>
void PriorityQueue<T>::print(){
  for(int i = 0; i < priorityQ.size(); i++){
        std::cout << priorityQ.getEl(i) << " ";
    }
}



template<class T>
T PriorityQueue<T>::peek(){
  if (priorityQ.isEmpty()){
    throw std::out_of_range("Priority Queue is empty");
  }
  return priorityQ.getFirst();
}



template <class T>
void PriorityQueue<T>::push(T data){
    priorityQ.addSorted(data);
}



template<class T>
T PriorityQueue<T>::pop(){
  if (priorityQ.isEmpty()){
    throw std::out_of_range("Priority Queue is empty");
  }
  T data = priorityQ.getFirst();
    priorityQ.removeFirst();
  
  return data;
  
}

template<class T>
T PriorityQueue<T>::getElById(int id) {
    return this->priorityQ.getEl(id);
}