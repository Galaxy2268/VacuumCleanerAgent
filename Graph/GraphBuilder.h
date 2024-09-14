//
// Created by danie on 14/09/2024.
//

#ifndef VACUMCLEANERAGENT_GRAPHBUILDER_H
#define VACUMCLEANERAGENT_GRAPHBUILDER_H
#include "Graph.h"


class GraphBuilder {
private:
    string fileName;

public:
    GraphBuilder();

    GraphBuilder readFile(string fileName);

    Graph build();

};


#include "GraphBuilder.cpp"
#endif //VACUMCLEANERAGENT_GRAPHBUILDER_H
