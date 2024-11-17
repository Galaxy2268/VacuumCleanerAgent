#include <iostream>
#include "Environment/Environment.h"
#include "Agent/VacuumCleanerAgent.h"
#include "Graph/GraphBuilder/GraphBuilder.h"


//Main function
int main() {
    //call kotlin code, graph generator
    //system(R"(java -Xmx6g -jar GraphGenerator\out\artifacts\GraphGenerator_jar\GraphGenerator.jar 19 room_19.txt)");


    GraphBuilder graphBuilder;

    Graph* graph = graphBuilder
            .readFile("Data/room_18.txt")
            .build();

    VacuumCleanerAgent agent("111111111111111111", 0);
    Environment environment(graph, agent);
    environment.turnAgentOn();

    delete graph;



    return 0;


}