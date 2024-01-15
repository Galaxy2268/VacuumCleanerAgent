#include "List.h"
#include <iostream>
#include <string>

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











template <typename T>
template <typename... Args>
List<T>::List(Args... data){
    this->length = 0;
    this->head = nullptr;
    this->tail = nullptr;
    (this->addBack(data), ...);
}

template <typename T>
T List<T>::getElById(int index){
    if(index < 0 || index > size() - 1 || isEmpty()){
        throw out_of_range("Index out of bounds");
    }


    if(this->size() / 2 < index){
        ListEl<T> * current = this->tail;
        for(int i = this->size() - 1; i > index; i--){
            current = current->getPrev();
        }
        return current->getData();
    }else{
        ListEl<T> * current = this->head;
        for(int i = 1; i <= index; i++){
            current = current->getNext();
            
        }
        return current->getData();
    }



}

template <typename T>
T List<T>::getFirst(){
    return this->head->getData();
}

template <typename T>
T List<T>::getLast(){
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
void List<T>::addBack(T data){
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
void List<T>::addFront(T data){
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
void List<T>::removeBack(){  
    if(this->isEmpty()){
        return;
    }
    ListEl<T> * prevNode  = this->tail->getPrev();

    if(prevNode != nullptr){
        prevNode->setNext(nullptr);
    }else{
        this->head = nullptr;
    }

    delete this->tail;
    this->tail = prevNode;
    this->length--;
}


template <typename T>
void List<T>::removeFront(){  
    if(this->isEmpty()){
        return;
    }
    ListEl<T> * nextNode  = this->head->getNext();

    if(nextNode != nullptr){
        nextNode->setPrev(nullptr);
    }else{
        this->head = nullptr;
    }

    delete this->head;
    this->head = nextNode;
    this->length--;
}



template <typename T>
void List<T>::removeById(int id){
    if(this->isEmpty()){
        return;
    }

    if(this->size() / 2 < id){
        this->searchDeleteBack(id);
    }else{
        this->searchDeleteFront(id);
    }

}


