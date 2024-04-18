#include "Stack.h"

template<typename T>
Stack<T>::Stack(): stack(){}

template<typename T>
void Stack<T>::push(T data) {
    stack.addBack(data);
}

template<typename T>
T Stack<T>::peek() {
    return stack.getLast();
}

template<typename T>
T Stack<T>::pop() {
    if(stack.isEmpty()){
        throw out_of_range("Stack is empty");
    }
    T el = stack.getLast();
    stack.removeBack();
    return el;
}

template<typename T>
int Stack<T>::size() {
    return stack.size();
}

template<typename T>
void Stack<T>::clear() {
    stack.clear();
}

template<typename T>
bool Stack<T>::isEmpty() {
    return stack.isEmpty();
}

template<typename T>
bool Stack<T>::contains(T data) {
    return stack.exists(data);
}
