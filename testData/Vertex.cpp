#include <iostream>
#include "Vertex.h"

Vertex::Vertex(int cityID, string cityName, PriorityQueue<GraphEdge> neighbours){
    this->cityID = cityID;
    this->cityName = cityID;
    this->neighbours = neighbours;
}


void Vertex::setID(int cityID){
    this->cityID = cityID;
}

void Vertex::setName(string cityName){
    this->cityName = cityName;
}

void Vertex::setNeighbours(PriorityQueue<GraphEdge> neighbours){
    this->neighbours = neighbours;
}

int Vertex::getID(){
    return cityID;
}

string Vertex::getName(){
    return cityName;
}

PriorityQueue<GraphEdge> Vertex::getNeighbours(){
    return neighbours;
}