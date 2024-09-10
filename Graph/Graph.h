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

    List<Vertex> graph;
    int vertexCount;

public:

    Graph(string filename);

};


#include "Graph.cpp"
#endif //VACUMCLEANERAGENT_GRAPH_H