#ifndef VERTEX_H
#define VERTEX_H

#include <iostream>
#include "Edge.h"
#include "../PriorityQueue/PriorityQueue.h"
using namespace std;

class Vertex{

private:
    int vertexId;
    string vertexName;
    PriorityQueue<Edge> vertexNeighbours;

public:
    Vertex(int vertexId, string vertexName, PriorityQueue<Edge> vertexNeighbours);

    void setId(int vertexId);

    void setName(string vertexName);

    void setNeighbours(PriorityQueue<Edge> vertexNeighbours);

    int getId();

    string getName();

    PriorityQueue<Edge> getNeighbours();
};

#include "Vertex.cpp"
#endif