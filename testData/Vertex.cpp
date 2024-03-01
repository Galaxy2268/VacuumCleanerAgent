#include <iostream>
#include "Vertex.h"
using namespace std;

Vertex::Vertex(int vertexId, string vertexName, PriorityQueue<Edge> vertexNeighbours){
    this->vertexId = vertexId;
    this->vertexName = vertexName;
    this->vertexNeighbours = vertexNeighbours;
}

void Vertex::setId(int vertexId){
    this->vertexId = vertexId;
}

void Vertex::setName(string vertexName){
    this->vertexName = vertexName;
}

void Vertex::setNeighbours(PriorityQueue<Edge> vertexNeighbours){
    this->vertexNeighbours = vertexNeighbours;
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