//
// Created by danie on 09/09/2024.
//

#ifndef VACUMCLEANERAGENT_GRAPH_H
#define VACUMCLEANERAGENT_GRAPH_H

#include "../../List/List.h"
#include "../Vertex/Vertex.h"
#include "../../Map/Map.h"
#include "../../Queue/Queue.h"
#include <cmath>
#include <fstream>

//Non-linear data structure that consists of vertices and edges. Graph stores a dynamic array to store vertices.
//Nelineāra data struktūra, kas sastāv no virsotnēm un pārejām. Grafs izmanto dinamisku masīvu, lai glabātu virsotnes.

class Graph {

private:
    int vertexCount;
    int edgeCount;
    int roomCount;
    Vertex** graph;

public:

    /*
    Description:
        Graph constructor that creates graph instance with given size
        Grafa konstruktors, kas izveido grafa instanci pēc padotā izmēra
    Complexity:
        Always: O(n)
        Vienmēr: O(n)
    */

    Graph(int size);

    /*
    Description:
        Graph destructor
        Grafa destruktors
    Complexity:
        Always: O(n)
        Vienmēr: O(n)
    */

    ~Graph();

    /*
    Description:
        Method that adds a new vertex to graph
        Metode, kas pievieno jaunu virsotni grafam
    Complexity:
        Awlays: O(1)
        Vienmēr: O(1)
    */

    void addVertex(int id);

    /*
    Description:
        Method that adds a new edge to graph
        Metode, kas pievieno jaunu pāreju grafam
    Complexity:
        Awlays: O(1)
        Vienmēr: O(1)
    */

    void addEdge(int from, int to);

    /*
    Description:
        Method that sets room count
        Metode, kas iestata istabu skaitu
    Complexity:
        Awlays: O(1)
        Vienmēr: O(1)
    */

    void setRoomCount(int roomCount);

    /*
    Description:
        Method that returns room count
        Metode, kas atgriež istabu skaitu
    Complexity:
        Awlays: O(1)
        Vienmēr: O(1)
    */

    int getRoomCount();

    /*
    Description:
        Method that returns vertex count
        Metode, kas atgriež virsotņu skaitu
    Complexity:
        Awlays: O(1)
        Vienmēr: O(1)
    */

    int getVertexCount();

    /*
    Description:
        Method that returns edge count
        Metode, kas atgriež pāreju skaitu
    Complexity:
        Awlays: O(1)
        Vienmēr: O(1)
    */

    int getEdgeCount();

    /*
    Description:
        Method that prints graph
        Metode, kas izprintē grafu
    Complexity:
        Awlays: O(n)
        Vienmēr: O(n)
    */

    void print();

    /*
    Description:
        Method that returns specif vertex by given id in graph
        Metode, kas atgriež konkrētu virsotni pēc padotā indeksa grafā
    Complexity:
        Awlays: O(1)
        Vienmēr: O(1)
    */

    Vertex* getVertex(int index);

};

#include "Graph.cpp"
#endif //VACUMCLEANERAGENT_GRAPH_H