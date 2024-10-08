#ifndef LIST_H
#define LIST_H
#include "ListEl.h"

template <class T>
class List{

private:
    ListEl<T> * head;
    ListEl<T> * tail;
    int length;

    /*
    Description:
     Palīg funkcija, kura meklē elementu, izmantojot indeksu, no saraksta gala, lai izdzēstu to.
     Helper function which searches element by id from end of the list to delete it.

    Complexety:
     Labākajā gadijumā - O(1)
     Sliktākajā gadijumā - O(n)
     Atkarībā no elementa atrašanas vietas.

     In best case - O(1)
     In worst case - O(n)
     Depends on element id.
    */
    void searchDeleteBack(int id);


    /*
    Description:
     Palīg funkcija, kura meklē elementu, izmantojot indeksu, no saraksta sākuma, lai izdzēstu to.
     Helper function which searches element by id from start of the list to delete it.

    Complexety:
     Labākajā gadijumā - O(1)
     Sliktākajā gadijumā - O(n)
     Atkarībā no elementa atrašanas vietas.

     In best case - O(1)
     In worst case - O(n)
     Depends on element id.
    */
    void searchDeleteFront(int id);


    ListEl<T> * split(ListEl<T> * head);

    ListEl<T> * merge(ListEl<T> *first, ListEl<T> *second);

    ListEl<T> * mergeSort(ListEl<T> * head);

public:

    template <typename... Args>
    List(Args... data);

    ~List();

    void sort();

//use if your list is already sorted
    void addSortedBack(T data);

    void clear();

    void reverse();

    int getIdOf(T data);

    T getElById(int index);

    T& getReferenceById(int index);

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