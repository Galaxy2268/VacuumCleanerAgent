#ifndef GRAPHEDGE_H
#define GRAPHEDGE_H

#include <iostream>
#include "../PriorityQueue/PriorityQueue.h"
#include "../Pair/Pair.h"
#include "Vertex.h"
using namespace std;
class GraphEdge{ 

private:
Pair<int, int> cities;
int cost;

public:
GraphEdge(Pair<int, int> cities, int cost);

int getFrom();

int getTo();

int getCost();

};

#include "GraphEdge.cpp"
#endif