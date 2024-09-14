
//
// Created by danie on 09/09/2024.
//

#include "Graph.h"


Graph::Graph(){}


void Graph::addVertex(int id, string name)   {
    Vertex vertex(id, name);
    this->graph.addBack(vertex);
    this->vertexCount++;
}


void Graph::addEdge(int from, int to, int cost)  {
    Edge edge(from, to, cost);
    this->graph.getReferenceById(from).addNeighbour(edge);
    this->edgeCount++;
}

int Graph::getVertexCount() {
    return this->vertexCount;
}

int Graph::getEdgeCount()   {
    return this->edgeCount;
}
