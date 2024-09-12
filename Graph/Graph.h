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
<<<<<<< HEAD
    List<Vertex> graph;
=======
>>>>>>> 9168e408c5de3ada5ca426ac9d959b101d686408

public:

    Graph(int vertexCount);

    void addVertex(int id, string name);

    void addEdge(int from, int to, int cost);

    int getVertexCount();

    int getEdgeCount();

};

#include "Graph.cpp"
#endif //VACUMCLEANERAGENT_GRAPH_H