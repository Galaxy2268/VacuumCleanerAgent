//
// Created by danie on 09/09/2024.
//

#include "Vertex.h"


Vertex::Vertex(std::string name) {
    this->name = name;
}

string Vertex::getName() {
    return this->name;
}

PriorityQueue<Edge> Vertex::getNeighbours() {
    return this->neighbours;
}

void Vertex::addNeighbour(Edge neighbour) {
    this->neighbours.push(neighbour);
}

