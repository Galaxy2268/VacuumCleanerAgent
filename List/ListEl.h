#ifndef LISTEL_H
#define LISTEL_H

//List element is a data holder with connections to previous and next element to construct linked list.
//Saraksta elements ir datu glabātājs ar norādēm uz iepriekšējo un nākamo elementu, lai konstruētu saistīto sarakstu.

template <class T>
class ListEl{

private:
T data;
ListEl<T> * prev;
ListEl<T> * next;


public:

/*
Description:
    Construcor for list element that sets given data.
    Konstruktors saraksta elementam, kas iestata padotos datus.
Complexity:
    Always: O(1)
    Vienmēr: O(1)
*/

ListEl(T data);

/*
Description:
    Method that sets pointer to previous element.
    Metode, kas iestata norādi uz iepriekšējo elementu.
Complexity:
    Always: O(1)
    Vienmēr: O(1)
*/

void setPrev(ListEl<T> * prev);


/*
Description:
    Method that sets pointer to next element.
    Metode, kas iestata norādi uz nākamo elementu.
Complexity:
    Always: O(1)
    Vienmēr: O(1)
*/


void setNext(ListEl<T> * next);

/*
Description:
    Method that sets given data.
    Metode, kas iestata padotos datus.
Complexity:
    Always: O(1)
    Vienmēr: O(1)
*/

void setData(T);

/*
Description:
    Method that returns copy of data of list element
    Metode, kas atgriež datu kopiju no saraksta elementa.
Complexity:
    Always: O(1)
    Vienmēr: O(1)
*/

T getData();

/*
Description:
    Method that returns reference of data of list element
    Metode, kas atgriež datu referenci no saraksta elementa.
Complexity:
    Always: O(1)
    Vienmēr: O(1)
*/

T& getReference();

/*
Description:
    Method that returns pointer to next element.
    Metode, kas atgriež norādi uz nākamo elementu.
Complexity:
    Always: O(1)
    Vienmēr: O(1)
*/

ListEl<T> * getNext();

/*
Description:
    Method that returns pointer to previous element.
    Metode, kas atgriež norādi uz iepriekšejo elementu.
Complexity:
    Always: O(1)
    Vienmēr: O(1)
*/

ListEl<T> * getPrev();


};

#include "ListEl.cpp"
#endif