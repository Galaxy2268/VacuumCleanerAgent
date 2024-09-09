//
// Created by danie on 09/09/2024.
//

#ifndef VACUMCLEANERAGENT_GRAPH_H
#define VACUMCLEANERAGENT_GRAPH_H

#include "../List/List.h"
#include "Vertex.h"

class Graph {
private:
    List<Vertex> graph;

public:
    Graph(string file);

};



#include "Graph.cpp"
#endif //VACUMCLEANERAGENT_GRAPH_H
