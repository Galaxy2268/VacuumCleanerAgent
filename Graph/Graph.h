//
// Created by danie on 09/09/2024.
//

#ifndef VACUMCLEANERAGENT_GRAPH_H
#define VACUMCLEANERAGENT_GRAPH_H

#include "../List/List.h"
#include "Vertex.h"
#include "../Map/Map.h"
#include "../Queue/Queue.h"
#include <fstream>

class Graph {

private:
    int vertexCount;
    int edgeCount;
    Vertex* graph;


public:

    Graph(int size);

    ~Graph();

    void addVertex(int id, string name);

    void addEdge(int from, int to, int cost);

    int getVertexCount();

    int getEdgeCount();

    void print();

    List<int>* shortestPath(int start, int goal);

    void printShortestPath(int start, int goal);

};

#include "Graph.cpp"
#endif //VACUMCLEANERAGENT_GRAPH_H