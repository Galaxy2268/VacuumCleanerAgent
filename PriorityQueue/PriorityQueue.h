#include "../List/List.h"
#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

//Priority queue is a data structure similar to queue with the difference that it adds elements in ascending order and returns the element of highest priority.
//Prioritātes rinda ir līdzīga datu struktūra parastai rindai, kas atšķirībā no rindas, pievieno elementus augošā secībā jeb pēc prioritātes. Atgriež elementu, kam ir augstākā prioritāte.

template <class T>
class PriorityQueue {


private:

    List<T> priorityQ;


public:

    /*
    Description:
        Constructor for priority queue that takes variable count of arguments and ads them to the priority queue.
        Prioritātes rindas konstruktors, kas pieņem dažādu skaitu ar argumentiem un pieliek tos klāt prioritāšu rindai.
    Complexity:
        Always: O(n) | Linear complexity.
        Vienmēr: O(n) | Lineārā sarežģītība.
    */

    template <typename... Args>
    PriorityQueue(Args... data);

    /*
    Description:
        Method that clears all priority queue elements.
        Metode, kas izdzēš visus prioritātes rindas elementus.
    Complexity:
        Always: O(n) | Linear complexity.
        Vienmēr: O(n) | Lineārā sarežģītība.
    */

    void clear();

    /*
    Description:
        Method that returns true if priority queue is empty, false if priority queue is not empty.
        Metode, kas atgriež true, ja prioritātes rinda ir tukša, false ja prioritātes rinda nav tukša.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    bool isEmpty();

    /*
    Description:
        Method that returns the amount of elements in priority queue.
        Metode, kas atgriež elementu skaitu prioritātes rindā.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    int size();

    /*
    Description:
        Method that prints the priority queue.
        Metode, kas izprintē prioritātes rindu.
    Complexity:
        Always: O(n) | Linear complexity
        Vienmēr: O(n) | Lineārā sarežģītība
    */

    void print();

    /*
    Description:
        Method that returns first element of priority queue.
        Metode, kas atgriež prioritātes rindas pirmo elementu.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    T peek();

    /*
    Description:
        Method that adds an element in ascending order.
        Metode, kas ievieto elementu augošā secībā.
    Complexity:
        Best case: O(1) | Worst case: O(n)
        Labākajā gadījumā: O(1) | Sliktākajā gadījumā: O(n)
    */

    void push(T data);

    /*
    Description:
        Method that removes and returns first element of priority queue.
        Metode, kas izdzēš un atgriež prioritātes rindas pirmo elementu.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    T pop();

    /*
    Description:
        Method that returns element of priority queue by given index.
        Metode, kas atgriež prioritātes rindas elementu pēc dotā indeksa.
    Complexity:
        Best case: O(1) | Worst case: O(n) | Depends on id.
        Labākajā gadījumā: O(1) | Sliktākajā gadījumā: O(n) | Atkarīgs no indeksa.
    */

    T getElById(int id);

    };


    #include "PriorityQueue.cpp"
    #endif