#include <iostream>
#include "Vertex.h"
using namespace std;

Vertex::Vertex(int vertexId, string vertexName){
    this->vertexId = vertexId;
    this->vertexName = vertexName;
}

Vertex::Vertex(int vertexId, PriorityQueue<Edge> vertexNeighbours){
    this->vertexId = vertexId;
    this->vertexNeighbours = vertexNeighbours;
}

void Vertex::setId(int vertexId){
    this->vertexId = vertexId;
}

void Vertex::setName(string vertexName){
    this->vertexName = vertexName;
}

void Vertex::addNeighbour(Edge neighbour){
    this->vertexNeighbours.push(neighbour);
}

int Vertex::getId(){
    return this->vertexId;
}

string Vertex::getName(){
    return this->vertexName;
}

PriorityQueue<Edge> Vertex::getNeighbours(){
    return this->vertexNeighbours;
}