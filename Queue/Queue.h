//
// Created by danie on 05/11/2024.
//
#include "../List/List.h"

#ifndef VACUMCLEANERAGENT_QUEUE_H
#define VACUMCLEANERAGENT_QUEUE_H

//Queue is a FiFo (First in - First out) data structure that returns the element that has been first added to the queue. Queue uses linked list to store elements.
//Rinda ir data struktūra, kas seko "Pirmais iekšā - Pirmais ārā" principam, kur pirmais elements tiek atgriezts tas, kurš pirmais jeb visilgāk atrodas rindā. Rinda izmanto saistīto sarakstu, lai glabātu elementus.

template <class T>
class Queue {


private:

    List<T> queue;


public:

    /*
    Description:
        Constructor for queue that takes variable count of arguments and ads them to the queue. Queue uses list to store elements.
        Rindas konstruktors, kas pieņem dažādu skaitu ar argumentiem un pieliek tos klāt rindai. Rinda izmanto sarakstu, lai glabātu elementus.
    Complexity:
        Always: O(n) | Linear complexity.
        Vienmēr: O(n) | Lineārā sarežģītība.
    */

    template <typename... Args>
    Queue(Args... data);

    /*
    Description:
        Method which clears all queue elements.
        Metode, kas izdzēš visus rindas elementus.
    Complexity:
        Always: O(n) | Linear complexity.
        Vienmēr: O(n) | Lineārā sarežģītība.
    */

    void clear();

    /*
    Description:
        Method that returns true if queue is empty, false if queue is not empty.
        Metode, kas atgriež true, ja rinda ir tukša, false ja rinda nav tukša.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    bool isEmpty();

    /*
    Description:
        Method that returns the amount of elements in queue.
        Metode, kas atgriež elementu skaitu rindā.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    int size();

    /*
    Description:
        Method that prints the queue.
        Metode, kas izprintē rindu.
    Complexity:
        Always: O(n) | Linear complexity
        Vienmēr: O(n) | Lineārā sarežģītība
    */

    void print();

    /*
    Description:
        Method that returns first element of queue.
        Metode, kas atgriež rindas pirmo elementu.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    T peek();

    /*
    Description:
        Method that adds an element to back of queue.
        Metode, kas ievieto elementu rindas aizmugurē.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    void push(T data);

    /*
    Description:
        Method that removes and returns first element of queue.
        Metode, kas izdzēš un atgriež rindas pirmo elementu.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    T pop();

    /*
    Description:
        Method that returns element of queue by given index.
        Metode, kas atgriež rindas elementu pēc dotā indeksa.
    Complexity:
        Best case: O(1) | Worst case: O(n) | Depends on id.
        Labākajā gadījumā: O(1) | Sliktākajā gadījumā: O(n) | Atkarīgs no indeksa.
    */

    T getElById(int id);
};

#include "Queue.cpp"
#endif //VACUMCLEANERAGENT_QUEUE_H
