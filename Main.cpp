#include <iostream>
#include "Environment/Environment.h"
#include "Agent/VacuumCleanerAgent.h"
#include "Graph/GraphBuilder/GraphBuilder.h"
#include "util/Timer/Timer.h"


//Main function
int main() {
    //call kotlin code, graph generator
    //system(R"(java -Xmx6g -jar GraphGenerator\out\artifacts\GraphGenerator_jar\GraphGenerator.jar 16 room_16.txt)");

    Timer timer;
    GraphBuilder graphBuilder;

    Graph* graph = graphBuilder
            .readFile("Data/room_16.txt")
            .build();

    VacuumCleanerAgent *agent = new VacuumCleanerAgent("1111111111111111", 0);
    Environment environment(graph, agent);
    timer.startTimer();
    environment.turnAgentOnWithoutSensors();
    std::cout << "\n";
    std::cout << timer.getTimeInMs();




    return 0;


}