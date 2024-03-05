#include <iostream>
#include "Edge.h"
using namespace std;

Edge::Edge(int source, int destination, int cost){
    this->source = source;
    this->destination = destination;
    this->cost = cost;
}

Edge::Edge(int destination, int cost){
    this->destination = destination;
    this->cost = cost;
}

void Edge::setSource(int source){
    this->source = source;
}

void Edge::setDestination(int destination){
    this->destination = destination;
}

void Edge::setCost(int cost){
    this->cost = cost;
}

int Edge::getSource(){
    return this->source;
}

int Edge::getDestination(){
    return this->destination;
}

int Edge::getCost(){
    return this->cost;
}

bool operator<(Edge edge1, Edge edge2){
    return edge1.getCost() < edge2.getCost();
}

bool operator<=(Edge edge1, Edge edge2) {
    return edge1.getCost() <= edge2.getCost();
}

bool operator>=(Edge edge1, Edge edge2) {
    return edge1.getCost() >= edge2.getCost();
}
