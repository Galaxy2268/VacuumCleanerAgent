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
    Vertex(int vertexId, string vertexName);

    Vertex(int vertexId, PriorityQueue<Edge> vertexNeighbours);

    void setId(int vertexId);

    void setName(string vertexName);

    void addNeighbour(Edge neighbour);

    int getId();

    string getName();

    PriorityQueue<Edge> getNeighbours();
};

#endif