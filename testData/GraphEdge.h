#ifndef GRAPHEDGE_H
#define GRAPHEDGE_H

#include <iostream>
#include "../Pair/Pair.h"
using namespace std;

class GraphEdge{ 

private:
Pair<int, int> edge;

public:
GraphEdge(Pair<int, int> edge);

void setPair(Pair<int, int> edge);

int getTo();

int getCost();

Pair<int, int> getPair();

};

#include "GraphEdge.cpp"
#endif