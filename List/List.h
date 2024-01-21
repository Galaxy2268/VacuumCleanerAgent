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

ListEl<T> * split(ListEl<T> * head);

ListEl<T> * merge(ListEl<T> *first, ListEl<T> *second);

void insert(ListEl<T> **head, T data);

void swap(T * a, T * b);

ListEl<T> * mergeSort(ListEl<T> * head);

public:

template <typename... Args>
List(Args... data);

~List();

void sort();

void clear();

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