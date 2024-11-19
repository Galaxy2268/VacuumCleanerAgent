//
// Created by danie on 09/09/2024.
//

#ifndef VACUMCLEANERAGENT_EDGE_H
#define VACUMCLEANERAGENT_EDGE_H


class Edge {
private:
    int from;
    int to;

public:
    Edge(int from, int to);
    int getFrom();
    int getTo();

    friend bool operator==(Edge e1, Edge e2);
    friend bool operator!=(Edge e1, Edge e2);
    friend bool operator<(Edge e1, Edge e2);
    friend bool operator>(Edge e1, Edge e2);
    friend bool operator<=(Edge e1, Edge e2);
    friend bool operator>=(Edge e1, Edge e2);

};

#include "Edge.cpp"
#endif //VACUMCLEANERAGENT_EDGE_H
