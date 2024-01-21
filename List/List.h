#ifndef LIST_H
#define LIST_H
#include "ListEl.h"

template <class T>
class List{

private:
ListEl<T> * head;
ListEl<T> * tail;
int length;


void searchDeleteBack(int id);

void searchDeleteFront(int id);

public:

template <typename... Args>
List(Args... data);

~List();


void clear();

void sort();

int getIdOf(T data);

T getElById(int index);

T getFirst();

T getLast();

bool isEmpty();

int size();

void addBack(T data);

void addFront(T data);

void add(T data, int index);

void print();

void remove(T data);

void removeBack();

void removeFront();

void removeById(int id);

};

#include "List.cpp"
#endif