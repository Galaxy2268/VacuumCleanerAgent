#include <iostream>
#include "Graph/GraphBuilder/GraphBuilder.h"



//Main function
int main() {

    system(R"(java -jar GraphGenerator\out\artifacts\GraphGenerator_jar\GraphGenerator.jar 16)");


    GraphBuilder graphBuilder;

    Graph* graph = graphBuilder
            .readFile("Data/test.txt")
            .build();




    graph->printAgentActions("0000000000000000", 0);
    delete graph;



    return 0;


}