#ifndef LIST_H
#define LIST_H
#include "ListEl.h"
#include <iostream>

template <class T>
class List{

private:
    ListEl<T> * head;
    ListEl<T> * tail;
    int length;

    /*
    Description:
        Helper method for removeAt() which searches element by id from end of the list to delete it.
        Palīg metode priekš removeAt(), kura meklē elementu, izmantojot indeksu, no saraksta gala, lai izdzēstu to.
    Complexity:
        Best case: O(1) | Worst case: O(n) | Depends on where element is placed.
        Labākajā gadijumā: O(1) | Sliktākajā gadijumā: O(n) | Atkarībā no elementa atrašanas vietas.
     */
    void searchDeleteBack(int id);


    /*
    Description:
        Helper method for removeAt() which searches element by id from start of the list to delete it.
        Palīg metode priekš removeAt(), kura meklē elementu, izmantojot indeksu, no saraksta sākuma, lai izdzēstu to.
    Complexity:
        Best case: O(1) | Worst case: O(n) | Depends on where element is placed.
        Labākajā gadijumā: O(1) | Sliktākajā gadijumā: O(n) | Atkarībā no elementa atrašanas vietas.
    */
    void searchDeleteFront(int id);


    /*
    Description:
        Method that splits list by returning pointer which points to the list middle element.
        Metode, kura sadala sarakstu divās daļās, atgriežot rādītāju, kurš norāda uz saraksta vidus elementu.
    */
    ListEl<T> * split(ListEl<T> * head);


    /*
    Description:
        Recursive method which merges two sorted lists together.
        Rekursīvā metode, kura savieno divas sakārtotās lista daļas.
    */
    ListEl<T> * merge(ListEl<T> *first, ListEl<T> *second);


    /*
    Description:
        Recursive method which uses split and merge methods to sort list.
        Rekursīvā metode, kura izmanto split un merge metodes, lai skārtotu sarakstu.
    */
    ListEl<T> * mergeSort(ListEl<T> * head);

public:
    /*
    Description:
        Constructor of the list which takes variable count of arguments and ads them to the list.
        Saraksta konstruktors, kurš pieņem dažādu skaitu ar argumentiem un pieliek tos klāt sarakstam
    Complexity:
        Always: O(n) | Linear complexity.
        Vienmēr: O(n) | Lineārā sarežģītība.
    */
    template <typename... Args>
    List(Args... data);


    /*
    Description:
        Destructor of the list which deallocates memory taken by list elements, uses clear method.
        Saraksta destruktors, kurš atbrīvo aizņemto atmiņu ar saraksta elementiem, izmanto clear metodi.
    Complexity:
        Vienmēr: O(n) | Lineārā sarežģītība
        Always: O(n) | Linear complexity
    */
    ~List();

    /*
    Description:
        Copy constructor. Is called when object is copied.
        Kopijas konstruktors. Tiek izsaukts, kad obejkts tiek kopēts.
    Complexity:
        Vienmēr: O(n) | Lineārā sarežģītība
        Always: O(n) | Linear complexity
    */
    List(const List &obj);


    /*
    Description:
        Method which is public for list sorting and uses mergeSort.
        Metode, kura ir pieejama publiski, saraksta sakārtošanai, izmanto mergeSort, lai sakārtotu sarakstu.
    Complexity:
        Always: O(n log n) | Logarithmic complexity.
        Vienmēr: O(n log n) | Logaritmiska sarežģītība.
     */
    void sort();


    /*
    Description:
        Method which ads element from the end of the list in way to save list being sorted. Works correctly if list is empty, or list is already sorted.
        Metode, kura pieliek elementu no aizmugures, tā lai saraksts paliktu sakārtots. Strādā korekti, ja sarakts ir tukšs vai jau sakārtots.
    Complexity:
        Best case: O(1) | Worst case: O(n) | Depends on where element has to be.
        Labākajā gadijumā: O(1) | Sliktākajā gadijumā: O(n) | Atkarībā no tā, kur elementam ir jāatrodas.
    */
    void addSorted(T data);


    /*
    Description:
        Method which clears all list elements.
        Metode, kura izdzēš visus saraksta elementus.
    Complexity:
        Always: O(n) | Linear complexity.
        Vienmēr: O(n) | Lineārā sarežģītība.
    */
    void clear();


    /*
    Description:
        Method which reverses list.
        Metode, kura apgriež sarakstu.
    Complexity:
        Always: O(n) | Linear complexity.
        Vienmēr: O(n) | Lineārā sarežģītība.
    */
    void reverse();


    /*
    Description:
        Method which returns element by id. Throws exception if id out of bounds.
        Metode, kura pieņem indeksu un atgriež, elementu pēc dotā indeksa. Izmet kļūdu, ja indeks ir ārpus saraksta robežām.
    Complexity:
        Best case: O(1) | Worst case: O(n / 2) | Depends where element is located.
        Labākajā gadijumā: O(1) | Sliktākajā gadijumā: O(n / 2) | Atkarībā no elementa atrašanas vietas.
    */
    T getEl(int id);

    /*
    Description:
        Method that returns reference of an element in list by id. Throws exeption if id is out of bounds.
        Metode, kas pieņem indeksu un atgriež atsauci uz elementu sarakstā pēc dotā indeksa. Izmet kļūdu, ja indekss ir ārpus saraksta robežām.
    Complexity:
        Best case: O(1) | Worst case: O(n / 2) | Depends where element is located in list.
        Labākajā gadījumā: O(1) | Sliktākajā gadījumā: O(n / 2) | Atkarīgs no elementa atrašanās vietas sarakstā.
    */

    T& getReference(int id);

    /*
    Description:
        Method that returns first element in list. Throws exception if list is empty.
        Metode, kas atgriež pirmo elementu sarakstā. Izmet kļūdu, ja saraksts ir tukšs. 
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    T getFirst();

    /*
    Description:
        Method that returns last element in list. Throws exception if list is empty.
        Metode, kas atgriež pēdējo elementu sarakstā. Izmet kļūdu, ja saraksts ir tukšs. 
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    T getLast();

    /*
    Description:
        Method that returns true if list is empty, false if list is not empty.
        Metode, kas atgriež true, ja saraksts ir tukšs, false ja saraksts nav tukšs.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    bool isEmpty();

    /*
    Description:
        Method that returns the amount of elements in list.
        Metode, kas atgriež elementu skaitu sarakstā.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    int size();

    /*
    Description:
        Method that takes an element and adds it to the back of the list.
        Metode, kas saņem elementu un pievieno to saraksta aizmugurē.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    void addLast(T data);

    /*
    Description:
        Method that takes an element and adds it to the front of the list.
        Metode, kas saņem elementu un pievieno to saraksta priekšā.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    void addFirst(T data);

    /*
    Description:
        Method that takes an element and an id, then adds the given element to the given id of the list. Throws exception if id is out of bounds.
        Metode, kas saņem elementu un indeksu, un pievieno sarakstam doto elementu pie dotā indeksa. Izmet kļūdu, ja indekss ir ārpus saraksta robežām.
    Complexity:
        Best case: O(1) | Worst case: O(n/2) | Depends on id.
        Labākajā gadījumā: O(1) | Sliktākajā gadījumā: O(n/2) | Atkarīgs no indeksa.
    */

    void insert(T data, int id);

    /*
    Description:
        Method that prints the list.
        Metode, kas izprintē sarakstu.
    Complexity:
        Always: O(n) | Linear complexity
        Vienmēr: O(n) | Lineārā sarežģītība
    */

    void print();

    /*
    Description:
        Method that takes an element and removes all the same elements from the list.
        Metode, kas saņem elementu un noņem visus tādus elementus no saraksta.
    Complexity:
        Best case: O(1) | Worst case: O(n) | Depends where element is located in list.
        Labākajā gadījumā: O(1) | Sliktākajā gadījumā: O(n) | Atkarīgs no elementa atrašanās vietas sarakstā.
    */

    void remove(T data);

    /*
    Description:
        Method that removes the back element of the list.
        Metode, kas noņem aizmugurējo elementu sarakstā.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    void removeLast();

    /*
    Description:
        Method that removes the front element of the list.
        Metode, kas noņem priekšējo elementu sarakstā.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    void removeFirst();

    /*
    Description:
        Method which deletes element by that element id. Uses helper methods - searchDeleteBack and searchDeleteFront, for efficient search.
        Metode, kura dzēš elementu pēc tā indeksa. Izmanto palīg metodes - searchDeleteBack un searchDeleteFront, priekš efektīvākas meklēšanas.
    Complexity:
        Best case: O(1) | Worst case: O(n / 2) | Depends on where element is in the list.
        Labākajā gadijumā: O(1) | Sliktākajā gadijumā: O(n / 2) | Atkarībā no tā, kur elements atrodas.
    */
    void removeAt(int id);


    /*
    Description:
        Method that checks if a given element exists in the list.
        Metode, kas pārbauda, vai dotais elements eksistē sarakstā.
    Complexity:
        Best case: O(1) | Worst case: O(n) | Depends on where the element is in the list. Or if element doesn't exist.
        Labākajā gadijumā: O(1) | Sliktākajā gadijumā: O(n) | Atkarībā no tā, kur elements atrodas. Vai, ja elements nav sarakstā.
    */

    bool exists(T element);

};

#include "List.cpp"
#endif