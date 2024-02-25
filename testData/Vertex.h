#ifndef VERTEX_H
#define VERTEX_H

#include <iostream>
#include "../PriorityQueue/PriorityQueue.h"
#include "../Pair/Pair.h"
#include "GraphEdge.h"
#include "../Map/Map.h"
using namespace std;

class Vertex{

private:
int cityID;
string cityName;
Map<cityID, cityName> cities;
PriorityQueue<GraphEdge> neighbours;

public:
Vertex(Map<cityID, cityName> cities, PriorityQueue<GraphEdge> neighbours);

int getID();

string getName();

PriorityQueue<GraphEdge> getNeighbours();

};

#include "GraphEdge.cpp"
#endif