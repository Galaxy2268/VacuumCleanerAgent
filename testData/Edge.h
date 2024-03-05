#ifndef EDGE_H
#define EDGE_H

#include <iostream>
using namespace std;

class Edge{

private:
    int source;
    int destination;
    int cost;

public:
    Edge(int source, int destination, int cost);

    Edge (int destination, int cost);

    void setSource(int source);

    void setDestination(int destination);

    void setCost(int cost);

    int getSource();

    int getDestination();

    int getCost();

    friend bool operator<(Edge edge1, Edge edge2);

    friend bool operator<=(Edge edge1, Edge edge2);

    friend bool operator>=(Edge edge1, Edge edge2);
};

#endif