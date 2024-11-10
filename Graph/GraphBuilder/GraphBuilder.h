//
// Created by danie on 14/09/2024.
//

#ifndef VACUMCLEANERAGENT_GRAPHBUILDER_H
#define VACUMCLEANERAGENT_GRAPHBUILDER_H
#include "../Graph/Graph.h"



//Use to write data to graph from file!
class GraphBuilder {
private:
    std::string fileName;

public:
    GraphBuilder();

    GraphBuilder& readFile(std::string fileName);

    Graph* build();

};


#include "GraphBuilder.cpp"
#endif //VACUMCLEANERAGENT_GRAPHBUILDER_H