//
// Created by danie on 14/09/2024.
//

#include "GraphBuilder.h"

GraphBuilder::GraphBuilder() {
    this->fileName = "";
}

GraphBuilder GraphBuilder::readFile(std::string fileName) {
    this->fileName = fileName;
    return *this;
}

Graph GraphBuilder::build() {
    Graph graph;
    if(!this->fileName.empty()){
        
        fstream file;
        int id;
        string name;
        int from, to, cost;

        int vertexCount, edgeCount;


        file.open(this->fileName);

            if (!file.is_open())    {
                throw runtime_error("Error opening file");
            }

            file >> vertexCount >> edgeCount;

            for (int i = 0; i < vertexCount; i++)   {
                file >> id >> name;
                graph.addVertex(id, name);
            }

            for (int i = 0; i < edgeCount; i++) {
                file >> from >> to >> cost;
                graph.addEdge(from, to, cost);
            }

        file.close();

    }
    return graph;
}