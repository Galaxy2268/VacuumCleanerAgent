#ifndef PAIR_H
#define PAIR_H

//Pair is a data structure that stores two (mostly) connected elements eficently.
//Pāris ir data struktūra, kas glabā (parasti) divus saistītus elementus.

template <typename T1, typename T2>
class Pair{

private:
T1 first;
T2 second;

public:

/*
Description:
    Pair constructor that initially sets two elements.
    Pāra konstruktors, kas iestata divus padotos elementus.
Complexity:
    Always: O(1)
    Vienmēr: O(1)
*/

Pair(T1 first, T2 second);

/*
Description:
    Pair empty constructor
    Pāra tukšais konstruktors
Complexity:
    Always: O(1)
    Vienmēr: O(1)
*/

Pair();

/*
Description:
    Method that returns first element of pair.
    Metode, kas atgriež pirmo elementu pārī
Complexity:
    Always: O(1)
    Vienmēr: O(1)
*/

T1 getFirst();

/*
Description:
    Method that returns second element of pair.
    Metode, kas atgriež otro elementu pārī
Complexity:
    Always: O(1)
    Vienmēr: O(1)
*/

T2 getSecond();

/*
Description:
    Method that sets given element as pair's first element.
    Metode, kas iestata doto elemente, kā pirmo pāra elementu
Complexity:
    Always: O(1)
    Vienmēr: O(1)
*/

void setFirst(T1 first);

/*
Description:
    Method that sets given element as pair's second element.
    Metode, kas iestata doto elemente, kā otro pāra elementu
Complexity:
    Always: O(1)
    Vienmēr: O(1)
*/

void setSecond(T2 second);

/*
Description:
    Method that prints the pair.
    Metode, kas izprintē pāri
Complexity:
    Always: O(1)
    Vienmēr: O(1)
*/

void print();


};

#include "Pair.cpp"
#endif