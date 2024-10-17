//
// Created by danie on 09/09/2024.
//

#include "Vertex.h"


Vertex::Vertex(int id, std::string name) {
    this->id = id;
    this->name = name;
}

Vertex::Vertex() {
    this->id = 0;
    this->name = "";
}

int Vertex::getId() {
    return this->id;
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