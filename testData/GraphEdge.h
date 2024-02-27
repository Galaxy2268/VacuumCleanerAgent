#ifndef GRAPHEDGE_H
#define GRAPHEDGE_H

#include <iostream>
#include "../Pair/Pair.h"
using namespace std;

class GraphEdge{ 

private:
int cityID;
int cost;
Pair<int, int> cityPair;

public:
GraphEdge(int cityID, Pair<int, int> cityPair);

void setFrom(int cityID);

void setPair(Pair<int, int>);

int getFrom();

int getTo();

int getCost();

friend bool operator<(GraphEdge lhs, GraphEdge rhs);

};

#include "GraphEdge.cpp"
#endif