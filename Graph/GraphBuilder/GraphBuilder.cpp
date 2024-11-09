//
// Created by danie on 14/09/2024.
//

#include "GraphBuilder.h"

GraphBuilder::GraphBuilder() {
    this->fileName = "";
}

GraphBuilder& GraphBuilder::readFile(std::string fileName) {
    this->fileName = fileName;
    return *this;
}

Graph* GraphBuilder::build() {
    fstream file;
    int from, to;

    int vertexCount, edgeCount;


    file.open(this->fileName);

    if (!file.is_open())    {
        throw runtime_error("Error opening file");
    }

    file >> vertexCount >> edgeCount;

    Graph* graph = new Graph(vertexCount);

    for (int i = 0; i < vertexCount; i++)   {
        graph->addVertex(i);
    }

    for (int i = 0; i < edgeCount; i++) {
        file >> from >> to;
        graph->addEdge(from, to);
    }

    file.close();


    return graph;
}