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

class Graph {

private:
    int vertexCount;
    int edgeCount;
    int roomCount;
    Vertex** graph;


public:

    Graph(int size);

    ~Graph();

    void addVertex(int id);

    void addEdge(int from, int to);

    void setRoomCount(int roomCount);

    int getRoomCount();

    int getVertexCount();

    int getEdgeCount();

    void print();

    Vertex* getVertex(int index);

};

#include "Graph.cpp"
#endif //VACUMCLEANERAGENT_GRAPH_H