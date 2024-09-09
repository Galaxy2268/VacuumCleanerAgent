//
// Created by danie on 09/09/2024.
//

#ifndef VACUMCLEANERAGENT_VERTEX_H
#define VACUMCLEANERAGENT_VERTEX_H

#include "Edge.h"
#include "../PriorityQueue/PriorityQueue.h"


class Vertex {
private:
    string name;
    PriorityQueue<Edge> neighbours;

public:
    Vertex(string name);

    void addNeighbour(Edge neighbour);

    string getName();

    PriorityQueue<Edge> getNeighbours();
};

#include "Vertex.cpp"
#endif //VACUMCLEANERAGENT_VERTEX_H
