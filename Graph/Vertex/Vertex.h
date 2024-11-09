//
// Created by danie on 09/09/2024.
//

#ifndef VACUMCLEANERAGENT_VERTEX_H
#define VACUMCLEANERAGENT_VERTEX_H

#include "../Edge/Edge.h"
#include "../../Queue/Queue.h"


class Vertex {
private:
    int id;
    Queue<Edge>* neighbours;

public:
    Vertex(int id);

    Vertex();

    ~Vertex();

    int getId();


    void addNeighbour(Edge neighbour);

    Queue<Edge>* getNeighbours();

    int getSize();
};

#include "Vertex.cpp"
#endif //VACUMCLEANERAGENT_VERTEX_H