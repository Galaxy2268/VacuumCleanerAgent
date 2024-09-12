//
// Created by danie on 09/09/2024.
//

#ifndef VACUMCLEANERAGENT_GRAPH_H
#define VACUMCLEANERAGENT_GRAPH_H

#include "../List/List.h"
#include "Vertex.h"
#include <fstream>

class Graph {

private:
    int vertexCount;
    int edgeCount;
    List<Vertex> graph;

public:

    Graph(int vertexCount);

    void addVertex(int id, string name);

    void addEdge(int from, int to, int cost);

    int getVertexCount();

    int getEdgeCount();

};

#include "Graph.cpp"
#endif //VACUMCLEANERAGENT_GRAPH_H