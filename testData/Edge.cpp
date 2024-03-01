#include <iostream>
#include "Edge.h"
using namespace std;

Edge::Edge(int vertexTo, int cost){
    this->vertexTo = vertexTo;
    this->cost = cost;
}

void Edge::setTo(int vertexTo){
    this->vertexTo = vertexTo;
}

void Edge::setCost(int cost){
    this->cost = cost;
}

int Edge::getTo(){
    return this->vertexTo;
}

int Edge::getCost(){
    return this->cost;
}

bool operator<(Edge lhs, Edge rhs){
    return lhs.getCost() < rhs.getCost();
}