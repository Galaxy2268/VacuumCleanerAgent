#include <iostream>
#include "GraphEdge.h"
using namespace std;

GraphEdge::GraphEdge(int cityID, Pair<int, int> cityPair){
    this->cityID = cityID;
    this->cityPair = cityPair;
}

void GraphEdge::setFrom(int cityID){
    this->cityID = cityID;
}

void GraphEdge::setPair(Pair<int, int> pair){
    this->cityPair = pair;
}

int GraphEdge::getFrom(){
    return this->cityID;
}

int GraphEdge::getTo(){
    return this->cityPair.getFirst();
}

int GraphEdge::getCost(){
    return this->cityPair.getSecond();
}

bool operator<(GraphEdge lhs, GraphEdge rhs) {
    return lhs.getCost() < rhs.getCost();
}
