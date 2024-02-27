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
PriorityQueue<GraphEdge> neighbours;

public:
Vertex(int cityID, string cityName, PriorityQueue<GraphEdge> neighbours);


void setID(int cityID);

void setName(string cityName);

void setNeighbours(PriorityQueue<GraphEdge> neighbours);

int getID();

string getName();

PriorityQueue<GraphEdge> getNeighbours();

};

#include "Vertex.cpp"
#endif