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
        //Reading and adding logic
    }
    return graph;
}