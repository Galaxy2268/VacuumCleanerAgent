
//
// Created by danie on 09/09/2024.
//

#include "Graph.h"


Graph::Graph(int size){
    this->edgeCount = 0;
    this->vertexCount = size;
    this->roomCount = 0;
    this->graph = new Vertex*[size];
}

Graph::~Graph() {
    for(int i = 0; i < this->vertexCount; i++){
        delete this->graph[i];
    }
    delete[] this->graph;
}


void Graph::addVertex(int id)   {
    this->graph[id] = new Vertex (id);
}


void Graph::addEdge(int from, int to)  {
    this->graph[from]->addNeighbour(Edge(from, to));
    this->edgeCount++;
}

void Graph::setRoomCount(int roomCount) {
    this->roomCount = roomCount;
}

int Graph::getVertexCount() {
    return this->vertexCount;
}

int Graph::getEdgeCount()   {
    return this->edgeCount;
}

int Graph::getRoomCount() {
    return this->roomCount;
}

void Graph::print() {
    if(this->vertexCount == 0) return;

    for(int i = 0; i < this->vertexCount; i++){
        std::cout << this->graph[i]->getId();
        std::cout << " ||";
        for(int j = 0; j < this->graph[i]->getNeighbours()->size(); j++){
            std::cout << " -> ";
            std::cout << this->graph[i]->getNeighbours()->getElById(j).getTo();
        }
        std::cout << "\n";
    }
}

Vertex *Graph::getVertex(int index) {
    return this->graph[index];
}
