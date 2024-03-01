#include <iostream>
#include "Vertex.h"

Vertex::Vertex(string cityName, PriorityQueue<GraphEdge> edges){
    this->cityName = cityName;
    this->edges = edges;
}

void Vertex::setName(int cityID, string cityName){
    this->cityName = cityName;
}

void Vertex::setEdges(PriorityQueue<GraphEdge> edges){
    this->edges = edges;
}

string Vertex::getName(){
    return this->cityName;
}

PriorityQueue<GraphEdge> Vertex::getEdges(){
    return this->edges;
}