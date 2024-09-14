
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
    this->graph.addBack(vertex);
    this->vertexCount++;
}


void Graph::addEdge(int from, int to, int cost)  {
    Edge edge(from, to, cost);
    this->graph.getReferenceById(from).addNeighbour(edge);
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
        cout << this->graph.getElById(i).getId();
        cout << " ||";
        for(int j = 0; j < this->graph.getElById(i).getNeighbours().size(); j++){
            cout << " -> ";
            cout << this->graph.getElById(i).getNeighbours().getElById(j).getTo();
        }
        cout << "\n";
    }
}
