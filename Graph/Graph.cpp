//
// Created by danie on 09/09/2024.
//

#include "Graph.h"

Graph::Graph(int vertexCount)   {
    this->vertexCount = vertexCount;
}

Graph::addVertex(int id, string name)   {
    Vertex vertex(id, name);
    this->graph.add(vertex);
}

Graph::addEdge(int from, int to, int cost)  {
    Edge edge(from, to, cost);
    this->graph.getElById(from).addNeighbour(edge);
}

int Graph::getVertexCount() {
    return this->vertexCount;
}

int Graph::getEdgeCount()   {
    return this->edgeCount;
}