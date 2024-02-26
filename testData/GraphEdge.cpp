#include <iostream>
#include "GraphEdge.h"
using namespace std;

GraphEdge::GraphEdge(int cityID, Pair<int, int> cityPair){
    this->cityID = cityID;
    this->cityPair = cityPair;
}

void GraphEdge::setFrom(int cityID){}

void GraphEdge::setPair(Pair<int, int>){}

int GraphEdge::getFrom(){
    return cityID;
}

int GraphEdge::getTo(){
    return this->cityPair.getFirst();
}

int GraphEdge::getCost(){
    return this->cityPair.getSecond();
}