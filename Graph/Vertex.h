//
// Created by danie on 09/09/2024.
//

#ifndef VACUMCLEANERAGENT_VERTEX_H
#define VACUMCLEANERAGENT_VERTEX_H

#include "Edge.h"
#include "../PriorityQueue/PriorityQueue.h"


class Vertex {
private:
    int id;
    string name;
    PriorityQueue<Edge> neighbours;

public:
    Vertex(int id, string name);
    Vertex();

    int getId();

    string getName();

    void addNeighbour(Edge neighbour);

    PriorityQueue<Edge> getNeighbours();
};

#include "Vertex.cpp"
#endif //VACUMCLEANERAGENT_VERTEX_H