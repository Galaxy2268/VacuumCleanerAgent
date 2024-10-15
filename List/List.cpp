#include "List.h"
#include <iostream>

using namespace std;


template<typename T>
void List<T>::searchDeleteBack(int id){
    ListEl<T> * current = this->tail;
    int idCount = this->length - 1;
    while(current != nullptr){
        if(idCount == id){


            if(current->getPrev() == nullptr){
                this->head = current->getNext();
            }
            if(current->getNext() == nullptr){
                this->tail = current->getPrev();
            }

            if(current->getPrev() != nullptr){
                current->getPrev()->setNext(current->getNext());
            }

            if(current->getNext() != nullptr){
                current->getNext()->setPrev(current->getPrev());
            }

            delete current;
            this->length--;
            return;

        }
        
        current = current->getPrev();
        idCount--;
        
    }

}



template<typename T>
void List<T>::searchDeleteFront(int id){
    ListEl<T> * current = this->head;
    int idCount = 0;
    while(current != nullptr){
        if(idCount == id){


            if(current->getPrev() == nullptr){
                this->head = current->getNext();
            }
            if(current->getNext() == nullptr){
                this->tail = current->getPrev();
            }

            if(current->getPrev() != nullptr){
                current->getPrev()->setNext(current->getNext());
            }

            if(current->getNext() != nullptr){
                current->getNext()->setPrev(current->getPrev());
            }

            delete current;
            this->length--;
            return;

        }
        
        current = current->getNext();
        idCount++;
        
    }

}

template<typename T>
ListEl<T> * List<T>::split(ListEl<T> * head){
    ListEl<T> * fast = head, * slow = head; 
    while (fast->getNext() != nullptr && fast->getNext()->getNext() != nullptr) { 
        fast = fast->getNext()->getNext(); 
        slow = slow->getNext(); 
    } 
    ListEl<T> * temp = slow->getNext(); 
    slow->setNext(nullptr); 
    return temp;
}

template<typename T>
ListEl<T> * List<T>::merge(ListEl<T> *first, ListEl<T> *second){
    if (first == nullptr) 
        return second; 
 
    if (second == nullptr) 
        return first; 
 
    if (first->getData() < second->getData()) { 
        first->setNext(merge(first->getNext(),second));
        first->getNext()->setPrev(first); 
        first->setPrev(nullptr);
        return first; 
    }else{ 
        second->setNext(merge(first,second->getNext())); 
        second->getNext()->setPrev(second); 
        second->setPrev(nullptr); 
        return second; 
    } 
}



template <typename T>
ListEl<T> * List<T>::mergeSort(ListEl<T> * head){
    if (head == nullptr || head->getNext() == nullptr) {
        return head; 
    }

    ListEl<T>* second = split(head);

    ListEl<T>* sortedFirst = mergeSort(head);
    ListEl<T>* sortedSecond = mergeSort(second);

    ListEl<T>* newHead = merge(sortedFirst, sortedSecond);

    ListEl<T>* tail = newHead;
    while (tail->getNext() != nullptr) {
        tail = tail->getNext();
    }

    this->head = newHead;
    this->tail = tail;

    return newHead;
}






template <typename T>
template <typename... Args>
List<T>::List(Args... data){
    this->length = 0;
    this->head = nullptr;
    this->tail = nullptr;
    (this->addLast(data), ...);
}


template <typename T>
List<T>::~List(){
    this->clear();
}




template <typename T>
void List<T>::clear(){
    int size = this->size();
    if(!this->isEmpty()){
        for(int i = 0; i < size; i++){
            this->removeFirst();
        }
    }
    
}


template <typename T>
void List<T>::sort(){
    mergeSort(this->head);
}

template<typename T>
void List<T>::reverse(){
    if(this->size() <= 1){
        return;
    }

    ListEl<T> * current = this->head;

    while (current->getNext() != nullptr){
        ListEl<T> * temp = current->getNext();
        current->setNext(current->getPrev());
        current->setPrev(temp);
        current = current->getPrev();
    }

    this->tail->setNext(tail->getPrev());
    this->tail->setPrev(nullptr);

    current = this->head;
    this->head = this->tail;
    this->tail = current;
    
}

template <typename T>
void List<T>::addSorted(T data){
    if(this->size() < 1 || data >= this->tail->getData()){
        this->addLast(data);
        return;
    }
    if(data <= this->head->getData()){
        this->addFirst(data);
        return;
    }

    ListEl<T> * newNode  = new ListEl<T>(data);
    ListEl<T> * current  = this->tail;

    while (data < current->getData()){
        current = current->getPrev();
    }
    newNode->setPrev(current);
    newNode->setNext(current->getNext());
    current->getNext()->setPrev(newNode);
    current->setNext(newNode);
    this->length++;



}


template <typename T>
T List<T>::getEl(int id){
    if(id < 0 || id > size() - 1 || isEmpty()){
        throw out_of_range("Index out of bounds");
    }


    if(this->size() / 2 < id){
        ListEl<T> * current = this->tail;
        for(int i = this->size() - 1; i > id; i--){
            current = current->getPrev();
        }
        return current->getData();
    }else{
        ListEl<T> * current = this->head;
        for(int i = 0; i < id; i++){
            current = current->getNext();
            
        }
        return current->getData();
    }

}

template <typename T>
T& List<T>::getReference(int id){
    if(id < 0 || id > size() - 1 || isEmpty()){
        throw out_of_range("Index out of bounds");
    }


    if(this->size() / 2 < id){
        ListEl<T> * current = this->tail;
        for(int i = this->size() - 1; i > id; i--){
            current = current->getPrev();
        }
        return current->getReference();
    }else{
        ListEl<T> * current = this->head;
        for(int i = 0; i < id; i++){
            current = current->getNext();
            
        }
        return current->getReference();
    }

}

template <typename T>
T List<T>::getFirst(){
    if(this->isEmpty()){
        throw out_of_range("List is empty");
    }
    return this->head->getData();
}

template <typename T>
T List<T>::getLast(){
    if(this->isEmpty()){
        throw out_of_range("List is empty");
    }
    return this->tail->getData();
}


template <typename T>
bool List<T>::isEmpty(){
    if(this->length == 0){
        return true;
    }
    return false;
}

template <typename T>
int List<T>::size(){
    return this->length;
}

template <typename T>
void List<T>::addLast(T data){
    ListEl<T> * newNode  = new ListEl<T>(data);
    newNode->setPrev(tail);
    if(this->isEmpty()){
        this->head = newNode;
    }else{
        this->tail->setNext(newNode);
    }
    this->tail = newNode;
    this->length++;


}

template <typename T>
void List<T>::addFirst(T data){
    ListEl<T> * newNode  = new ListEl<T>(data);
    newNode->setNext(head);
    if(this->isEmpty()){
        this->tail = newNode;
    }else{
        this->head->setPrev(newNode);
    }
    this->head = newNode;
    this->length++;

}

template <typename T>
void List<T>::insert(T data, int id){
    if(id < 0 || id > size() || isEmpty()){
        throw out_of_range("Index out of bounds");
    }
    if(id == 0){
        addFirst(data);
    }else if (id == size()){
        addLast(data);
    }else{
        ListEl<T> * newNode  = new ListEl<T>(data);
        if(this->size() / 2 < id){
            ListEl<T> * current = this->tail;
            for(int i = this->size() - 1; i > id; i--){
                current = current->getPrev();
            }
            newNode->setNext(current);
            newNode->setPrev(current->getPrev());
            current->getPrev()->setNext(newNode);
            current->setPrev(newNode);
            this->length++;
        }else{
            ListEl<T> * current = this->head;
            for(int i = 0; i < id; i++){
                current = current->getNext();
            
            }
            newNode->setNext(current);
            newNode->setPrev(current->getPrev());
            current->getPrev()->setNext(newNode);
            current->setPrev(newNode);
            this->length++;

        }

    }
}



template <typename T>
void List<T>::print(){
    ListEl<T> * current = this->head;
    while(current != nullptr){
        cout << current->getData() << " ";
        current = current->getNext();
        
    }
    cout << "\n";
}

template <typename T>
void List<T>::remove(T data){

    if(this->isEmpty()){
        return;
    }
    bool sw = false;
    ListEl<T> * current = this->head;
    while(current != nullptr){
        ListEl<T> * temp = current;
        if(current->getData() == data){


            if(current->getPrev() == nullptr){
                this->head = current->getNext();
            }
            if(current->getNext() == nullptr){
                this->tail = current->getPrev();
            }

            if(current->getPrev() != nullptr){
                current->getPrev()->setNext(current->getNext());
            }

            if(current->getNext() != nullptr){
                current->getNext()->setPrev(current->getPrev());
            }

    
            sw = true;
            this->length--;

        }else{
            sw = false;
        }
        
        current = current->getNext();
        if(sw){
            delete temp;
        }
        
    }

}


template <typename T>
void List<T>::removeLast(){
    if(this->isEmpty()){
        return;
    }
    ListEl<T> * prevNode  = this->tail->getPrev();

    if(prevNode != nullptr){
        prevNode->setNext(nullptr);
    }else{
        this->head = nullptr;
        this->tail = nullptr;
    }

    delete this->tail;
    this->tail = prevNode;
    this->length--;
}


template <typename T>
void List<T>::removeFirst(){
    if(this->isEmpty()){
        return;
    }
    ListEl<T> * nextNode  = this->head->getNext();

    if(nextNode != nullptr){
        nextNode->setPrev(nullptr);
    }else{
        this->head = nullptr;
        this->tail = nullptr;
    }

    delete this->head;
    this->head = nextNode;
    this->length--;
}



template <typename T>
void List<T>::removeAt(int id){
    if(this->isEmpty()){
        return;
    }

    if(this->size() / 2 < id){
        this->searchDeleteBack(id);
    }else{
        this->searchDeleteFront(id);
    }

}


