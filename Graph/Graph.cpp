
//
// Created by danie on 09/09/2024.
//

#include "Graph.h"


Graph::Graph(){
    this->edgeCount = 0;
    this->vertexCount = 0;
}


void Graph::addVertex(int id, string name)   {
    Vertex vertex(id, name);
    this->graph.addLast(vertex);
    this->vertexCount++;
}


void Graph::addEdge(int from, int to, int cost)  {
    Edge edge(from, to, cost);
    this->graph.getReference(from).addNeighbour(edge);
    this->edgeCount++;
}

int Graph::getVertexCount() {
    return this->vertexCount;
}

int Graph::getEdgeCount()   {
    return this->edgeCount;
}

void Graph::print() {
    if(this->graph.isEmpty()) return;

    for(int i = 0; i < this->graph.size(); i++){
        cout << this->graph.getEl(i).getId();
        cout << " ||";
        for(int j = 0; j < this->graph.getEl(i).getNeighbours().size(); j++){
            cout << " -> ";
            cout << this->graph.getEl(i).getNeighbours().getElById(j).getTo();
        }
        cout << "\n";
    }
}
