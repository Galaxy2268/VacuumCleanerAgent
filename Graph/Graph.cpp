
//
// Created by danie on 09/09/2024.
//

#include "Graph.h"


Graph::Graph(int size){
    this->edgeCount = 0;
    this->vertexCount = size;
    this->graph = new Vertex[size];
}

Graph::~Graph() {
    delete this->graph;
}


void Graph::addVertex(int id, string name)   {
    Vertex vertex(id, name);
    this->graph[id] = vertex;
}


void Graph::addEdge(int from, int to, int cost)  {
    Edge edge(from, to, cost);
    this->graph[from].addNeighbour(edge);
    this->edgeCount++;
}

int Graph::getVertexCount() {
    return this->vertexCount;
}

int Graph::getEdgeCount()   {
    return this->edgeCount;
}

void Graph::print() {
    if(this->vertexCount == 0) return;

    for(int i = 0; i < this->vertexCount; i++){
        cout << this->graph[i].getId();
        cout << " ||";
        for(int j = 0; j < this->graph[i].getNeighbours().size(); j++){
            cout << " -> ";
            cout << this->graph[i].getNeighbours().getElById(j).getTo();
        }
        cout << "\n";
    }
}
