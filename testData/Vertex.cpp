#include <iostream>
#include "Vertex.h"

Vertex::Vertex(int cityID, string cityName, PriorityQueue<GraphEdge> neighbours){
    this->cityID = cityID;
    this->cityName = cityID;
    this->neighbours = neighbours;
}

Vertex::Vertex(){}

int Vertex::setID(int cityID){}

string Vertex::setName(string cityName){}

PriorityQueue<GraphEdge> Vertex::setNeighbours(PriorityQueue<GraphEdge> neighbours){}

int Vertex::getID(){
    return cityID;
}

string Vertex::getName(){
    return cityName;
}

PriorityQueue<GraphEdge> Vertex::getNeighbours(){
    return neighbours;
}