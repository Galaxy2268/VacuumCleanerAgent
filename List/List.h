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
     Metode, kura ir pieejama publiski, saraksta sakārtišanai, izmanto mergeSort, lai sakārtotu sarakstu.

     Method which is public for list sorting and uses mergeSort.

    Complexity:
     Vienmēr - O(n log n)
     Logarifmiska sarežģītība.

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
     Atkarībā no elementa atrašanas vietas.

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

    T& getReferenceById(int id);

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


    /*
    Description:
     Metode, kura dzēs elementu pēc tā indeksa.
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