#include <iostream>
#include "Graph/GraphBuilder/GraphBuilder.h"



//Main function
int main() {
    //call kotlin code, graph generator
    //system(R"(java -jar GraphGenerator\out\artifacts\GraphGenerator_jar\GraphGenerator.jar 8 room_8.txt)");


    GraphBuilder graphBuilder;

    Graph* graph = graphBuilder
            .readFile("Data/room_4.txt")
            .build();




    graph->printAgentActions("0000", 0);
    delete graph;



    return 0;


}