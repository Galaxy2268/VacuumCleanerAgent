//
// Created by danie on 09/09/2024.
//

#include "Edge.h"

Edge::Edge(int from, int to, int cost) {
    this->from = from;
    this->to = to;
    this->cost = cost;
}


int Edge::getFrom() {
    return this->from;
}

int Edge::getTo() {
    return this->to;
}

int Edge::getCost() {
    return this->cost;
}

bool operator==(Edge e1, Edge e2){
    return e1.getCost() == e2.getCost();
}

bool operator!=(Edge e1, Edge e2){
    return e1.getCost() != e2.getCost();
}

bool operator<(Edge e1, Edge e2){
    return e1.getCost() < e2.getCost();
}

bool operator>(Edge e1, Edge e2){
    return e1.getCost() > e2.getCost();
}

bool operator<=(Edge e1, Edge e2){
    return e1.getCost() <= e2.getCost();
}

bool operator>=(Edge e1, Edge e2){
    return e1.getCost() >= e2.getCost();
}
