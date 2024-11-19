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
    std::ifstream file;
    int from, to;

    int roomCount, vertexCount, edgeCount;


    file.open(this->fileName);

    if (!file.is_open())    {
        throw std::runtime_error("Error opening file");
    }

    file >> roomCount >> vertexCount >> edgeCount;

    Graph* graph = new Graph(vertexCount);
    graph->setRoomCount(roomCount);

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