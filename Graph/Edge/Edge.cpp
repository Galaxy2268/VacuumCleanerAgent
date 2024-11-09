//
// Created by danie on 09/09/2024.
//

#include "Edge.h"

Edge::Edge(int from, int to) {
    this->from = from;
    this->to = to;
}


int Edge::getFrom() {
    return this->from;
}

int Edge::getTo() {
    return this->to;
}



bool operator==(Edge e1, Edge e2){
    return false;
}

bool operator!=(Edge e1, Edge e2){
    return false;
}

bool operator<(Edge e1, Edge e2){
    return false;
}

bool operator>(Edge e1, Edge e2){
    return false;
}

bool operator<=(Edge e1, Edge e2){
    return false;
}

bool operator>=(Edge e1, Edge e2){
    return false;
}
