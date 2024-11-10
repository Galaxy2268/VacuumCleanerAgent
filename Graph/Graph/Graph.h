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
    Vertex** graph;


public:

    Graph(int size);

    ~Graph();

    void addVertex(int id);

    void addEdge(int from, int to);

    int getVertexCount();

    int getEdgeCount();

    void print();

    List<int>* shortestPath(int start, int goal);

    void printShortestPath(int start, int goal);

    void printAgentActions(std::string roomState, int agentPos);

};

#include "Graph.cpp"
#endif //VACUMCLEANERAGENT_GRAPH_H