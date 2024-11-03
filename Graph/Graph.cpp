
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
    delete[] this->graph;
}


void Graph::addVertex(int id, string name)   {
    this->graph[id] = Vertex (id, name);;
}


void Graph::addEdge(int from, int to, int cost)  {
    this->graph[from].addNeighbour(Edge(from, to, cost));
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
