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
     Palīg metode, kura meklē elementu, izmantojot indeksu, no saraksta gala, lai izdzēstu to.

     Helper method which searches element by id from end of the list to delete it.

    Complexity:
     Labākajā gadijumā - O(1)
     Sliktākajā gadijumā - O(n)
     Atkarībā no elementa atrašanas vietas.

     In best case - O(1)
     In worst case - O(n)
     Depends on where element is placed.
     */
    void searchDeleteBack(int id);


    /*
    Description:
     Palīg metode, kura meklē elementu, izmantojot indeksu, no saraksta sākuma, lai izdzēstu to.

     Helper method, which searches element by id from start of the list to delete it.

    Complexity:
     Labākajā gadijumā - O(1)
     Sliktākajā gadijumā - O(n)
     Atkarībā no elementa atrašanas vietas.

     In best case - O(1)
     In worst case - O(n)
     Depends on where element is placed.
    */
    void searchDeleteFront(int id);


    /*
    Description:
     Metode, kura sadala sarakstu divās daļās, atgriežot rādītāju, kurš norāda uz saraksta vidus elementu.

     Method that splits list by returning pointer which points to the list middle element.
    */
    ListEl<T> * split(ListEl<T> * head);


    /*
    Description:
     Rekursīvā metode, kura savieno divas sakārtotās lista daļas.

     Recursive method which merges two sorted lists together.
    */
    ListEl<T> * merge(ListEl<T> *first, ListEl<T> *second);


    /*
    Description:
     Rekursīvā metode, kura izmanto split un merge metodes, lai skārtotu sarakstu.

     Recursive method which uses split and merge methods to sort list.
    */
    ListEl<T> * mergeSort(ListEl<T> * head);

public:

    /*
    Description:
     Saraksta konstruktors, kurš pieņem dažādu skaitu ar argumentiem un pieliek tos klāt sarakstam

     Constructor of the list which takes variable count of arguments and ads them to the list.

    Complexity:
     Vienmēr - O(n)
     Lineārā sarežģītība.

     In every case - O(n)
     Linear complexity.
    */
    template <typename... Args>
    List(Args... data);


    /*
    Description:
     Saraksta destruktors, kurš atbrīvo aizņemto atmiņu ar saraksta elementiem, izmanto clear metodi.

     Destructor of the list which deallocates memory taken by list elements, uses clear method.

    Complexity:
     Vienmēr - O(n)
     Lineārā sarežģītība.

     In every case - O(n)
     Linear complexity.
    */
    ~List();


    /*
    Description:
     Metode, kura ir pieejama publiski, saraksta sakārtošanai, izmanto mergeSort, lai sakārtotu sarakstu.

     Method which is public for list sorting and uses mergeSort.

    Complexity:
     Vienmēr - O(n log n)
     Logaritmiska sarežģītība.

     In every case - O(n log n)
     Logarithmic complexity.
     */
    void sort();


    /*
    Description:
     Metode, kura pieliek elementu no aizmugures, tā lai saraksts paliktu sakārtots.
     Strādā korekti, ja sarakts ir tukšs vai jau sakārtots.

     Method which ads element from the end of the list in way to save list being sorted.
     Works correctly if list is empty, or list is already sorted.

    Complexity:
     Labākajā gadijumā - O(1)
     Sliktākajā gadijumā - O(n)
     Atkarībā no tā, kur elementam ir jāatrodas.

     In best case - O(1)
     In worst case - O(n)
     Depends on where element has to be.
    */
    void addSortedBack(T data);


    /*
    Description:
     Metode, kura atbrīvo aizņemto atmiņu ar saraksta elementiem.
     Method which deallocates memory taken by list elements.

    Complexity:
     Vienmēr - O(n)
     Lineārā sarežģītība.

     In every case - O(n)
     Linear complexity.
    */
    void clear();


    /*
    Description:
     Metode, kura apgriež sarakstu.
     Method which reverses list.

    Complexity:
     Vienmēr - O(n)
     Lineārā sarežģītība.

     In every case - O(n)
     Linear complexity.
    */
    void reverse();


    /*
    Description:
     Metode, kura pieņem elementu un atgriež, pirmā atrastā, elementa  indeksu, kurš ir vienāds ar pieņemto elementu.
     Izmet kļūdu, ja saraksts ir tukšs vai sarakstā nav pieņemtā elementa.

     Method which takes an element and returns the first found element which is equal with taken element.
     Throws exception if list is empty or taken element was not found.

    Complexity:
     Labākajā gadijumā - O(1)
     Sliktākajā gadijumā - O(n)
     Atkarībā no elementa atrašanās vietas.

     In best case - O(1)
     In worst case - O(n)
     Depends where element is located.
    */
    int getIdOf(T data);


    /*
    Description:
     Metode, kura pieņem indeksu un atgriež, elementu pēc dotā indeksa.
     Izmet kļūdu, ja indeks ir ārpus saraksta robežām.

     Method which returns element by id.
     Throws exception if id out of bounds.

    Complexity:
     Labākajā gadijumā - O(1)
     Sliktākajā gadijumā - O(n)
     Atkarībā no elementa atrašanas vietas.

     In best case - O(1)
     In worst case - O(n)
     Depends where element is located.
    */
    T getElById(int id);

    /*
    Description:
        Method that returns reference of an element in list by id. Throws exeption if id is out of bounds.
        Metode, kas pieņem indeksu un atgriež atsauci uz elementu sarakstā pēc dotā indeksa. Izmet kļūdu, ja indekss ir ārpus saraksta robežām.
    Complexity:
        Best case: O(1) | Worst case: O(n) | Depends where element is located in list.
        Labākajā gadījumā: O(1) | Sliktākajā gadījumā: O(n) | Atkarīgs no elementa atrašanās vietas sarakstā.
    */

    T& getReferenceById(int id);

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
        Always: O(n) | Linear complexity.
        Vienmēr: O(n) | Lineārā sarežģītība.
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

    void addBack(T data);

    /*
    Description:
        Method that takes an element and adds it to the front of the list.
        Metode, kas saņem elementu un pievieno to saraksta priekšā.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    void addFront(T data);

    /*
    Description:
        Method that takes an element and an index, then adds the given element to the given index of the list. Throws exception if id is out of bounds.
        Metode, kas saņem elementu un indeksu, un pievieno sarakstam doto elementu pie dotā indeksa. Izmet kļūdu, ja indekss ir ārpus saraksta robežām.
    Complexity:
        Best case: O(1) | Worst case: O(n/2) | Depends where element is located in list.
        Labākajā gadījumā: O(1) | Sliktākajā gadījumā: O(n/2) | Atkarīgs no elementa atrašanās vietas sarakstā.
    */

    void add(T data, int index);

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
        Method that takes an element and removes the given element from the list.
        Metode, kas saņem elementu un noņem doto elementu no saraksta.
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

    void removeBack();

    /*
    Description:
        Method that removes the front element of the list.
        Metode, kas noņem priekšējo elementu sarakstā.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    void removeFront();

    /*
    Description:
     Metode, kura dzēš elementu pēc tā indeksa.
     Izmanto palīg metodes - searchDeleteBack un searchDeleteFront, priekš efektīvākas meklēšanas.

     Method which deletes element by that element id.
     Uses helper methods - searchDeleteBack and searchDeleteFront, for efficient search

    Complexity:
     Labākajā gadijumā - O(1)
     Sliktākajā gadijumā - O(n / 2)
     Atkarībā no tā, kur elements atrodas.

     In best case - O(1)
     In worst case - O(n / 2)
     Depends on where element is in the list.
    */
    void removeById(int id);

};

#include "List.cpp"
#endif