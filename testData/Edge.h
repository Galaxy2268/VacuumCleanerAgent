#ifndef EDGE_H
#define EDGE_H

#include <iostream>
using namespace std;

class Edge{

private:
    int vertexTo;
    int cost;

public:
    Edge(int vertexTo, int cost);

    void setTo(int vertexTo);

    void setCost(int cost);

    int getTo();

    int getCost();

    friend bool operator<(Edge lhs, Edge rhs);
};

#include "Edge.cpp"
#endif