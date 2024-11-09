//
// Created by danie on 09/09/2024.
//

#include "Vertex.h"


Vertex::Vertex(int id) {
    this->id = id;
    Queue<Edge>* queue = new Queue<Edge>;
    this->neighbours = queue;
}

Vertex::Vertex() {
    this->id = 0;
    Queue<Edge>* queue = new Queue<Edge>;
    this->neighbours = queue;
}

Vertex::~Vertex(){
    delete this->neighbours;
}



int Vertex::getId() {
    return this->id;
}


Queue<Edge>* Vertex::getNeighbours() {
    return this->neighbours;
}



void Vertex::addNeighbour(Edge neighbour) {
    this->neighbours->push(neighbour);
}

int Vertex::getSize() {
    return this->neighbours->size();
}