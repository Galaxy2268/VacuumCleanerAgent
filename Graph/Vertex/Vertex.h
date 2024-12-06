//
// Created by danie on 09/09/2024.
//

#ifndef VACUMCLEANERAGENT_VERTEX_H
#define VACUMCLEANERAGENT_VERTEX_H

#include "../Edge/Edge.h"
#include "../../Queue/Queue.h"

//Vertex class used to represent vertices in graph
//Virsotnes klase, ko izmanto virsotņu reprezentācijai grafā

class Vertex {
private:
    int id;
    Queue<Edge>* neighbours;

public:

    /*
    Description:
        Vertex construcor that creates ertex instance with given id
        Virsotnes konstruktors, kas izveido virsotnes instanci ar padoto indeksu
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    Vertex(int id);

    /*
    Description:
        Empty vertex constructor
        Tukšais virsotnes konstruktors
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    Vertex();

    /*
    Description:
        Vertex destructors
        Virsotnes destruktors
    Complexity:
        Always: O(n)
        Vienmēr: O(n)
    */

    ~Vertex();

    /*
    Description:
        Method that returns vertex id
        Metode, kas atgriež virsotnes indeksu
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    int getId();

    /*
    Description:
        Method that adds neighbour
        Metode, kas pieieno kaimiņu
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    void addNeighbour(Edge neighbour);

    /*
    Description:
        Method that returns queue of vertex's neighbours
        Metode, kas atgriež virsotnes kaimiņus
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    Queue<Edge>* getNeighbours();

    /*
    Description:
        Method that returns size of vertex's neighbours
        Metode, kas atgriež virsotnes kaimiņu daudzumu
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    int getSize();
};

#include "Vertex.cpp"
#endif //VACUMCLEANERAGENT_VERTEX_H