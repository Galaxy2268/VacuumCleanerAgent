
//
// Created by danie on 09/09/2024.
//

#include "Graph.h"

<<<<<<< HEAD
Graph::Graph(int vertexCount)   {
    this->vertexCount = vertexCount;
=======
Graph::Graph(string filename) {

    string vertexName;
    int from, to, cost;

    fstream file;


    file.open(filename);

    if (!file.is_open())  {
        throw runtime_error("Error opening file");
    }

    file >> this->vertexCount >> this->edgeCount;

    for (int i = 0; i < this->vertexCount; i++)   {
        file >> vertexName;
        Vertex vertex(i, vertexName);
        this->graph.addBack(vertex);
    }

    int j = 0;
    for (int i = 0; i <= this->edgeCount; i++)  {
        file >> from >> to >> cost;
        if (from == this->graph.getElById(j).getId())    {
            Edge edge(from, to, cost);
            this->graph.getElById(j).addNeighbour(edge);
        } else{
            j++;
        }

    }


    file.close();

>>>>>>> 9168e408c5de3ada5ca426ac9d959b101d686408
}

Graph::addVertex(int id, string name)   {
    Vertex vertex(id, name);
    this->graph.add(vertex);
}

<<<<<<< HEAD
Graph::addEdge(int from, int to, int cost)  {
    Edge edge(from, to, cost);
    this->graph.getElById(from).addNeighbour(edge);
}

int Graph::getVertexCount() {
    return this->vertexCount;
}

int Graph::getEdgeCount()   {
    return this->edgeCount;
}
=======
*/
>>>>>>> 9168e408c5de3ada5ca426ac9d959b101d686408
