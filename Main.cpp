#include <iostream>
#include <string>
#include "Graph/GraphBuilder/GraphBuilder.h"

using namespace std;

//Main function
int main() {
    GraphBuilder graphBuilder;

    Graph* graph = graphBuilder
            .readFile("Data/test.txt")
            .build();




    graph->printAgentActions("0101", 3);
    delete graph;

    return 0;


}