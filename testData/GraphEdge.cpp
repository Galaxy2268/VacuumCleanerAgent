#include <iostream>
#include "GraphEdge.h"
using namespace std;

GraphEdge::GraphEdge(Pair<int, int> edge){
    this->edge = edge;
}

void GraphEdge::setPair(Pair<int, int> edge){
    this->edge = edge;
}

int GraphEdge::getTo(){
    return this->edge.getFirst();
}

int GraphEdge::getCost(){
    return this->edge.getSecond();
}

Pair<int, int> GraphEdge::getPair(){
    return this->edge;
}

bool operator<(GraphEdge lhs, GraphEdge rhs) {
    return lhs.getCost() < rhs.getCost();
}