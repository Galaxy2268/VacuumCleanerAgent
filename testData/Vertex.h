#ifndef VERTEX_H
#define VERTEX_H

#include <iostream>
#include "../PriorityQueue/PriorityQueue.h"
#include "GraphEdge.h"
using namespace std;

class Vertex{

private:
int cityID;
string cityName;
PriorityQueue<GraphEdge> edges;

public:
Vertex(string cityName, PriorityQueue<GraphEdge> edges);

void setName(int cityID, string cityName);

void setEdges(PriorityQueue<GraphEdge> edges);

string getName();

PriorityQueue<GraphEdge> getEdges();

};

#include "Vertex.cpp"
#endif