
//
// Created by danie on 09/09/2024.
//

#include "Graph.h"

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

}



/*

Graph::printGraph() {

    for(int i = 0; i < vertex_count; i++)   {
        cout << this->graph.getElById(i).getName();
        cout << " -> ";
        cout << << this->graph.getElById(i).getNeighbours().getTo().getName();
        cout << " = ";
        cout << this->graph.getElById(i).getNeighbours().getCost()
    }
}

*/
