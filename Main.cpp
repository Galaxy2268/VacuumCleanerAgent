#include <iostream>
#include "Environment/Environment.h"
#include "Agent/VacuumCleanerAgent.h"
#include "Graph/GraphBuilder/GraphBuilder.h"
#include "util/Timer/Timer.h"
#include "util/Logger/Logger.h"

//Main function
int main() {
    //call kotlin code, graph generator
    //system(R"(java -Xmx6g -jar GraphGenerator\out\artifacts\GraphGenerator_jar\GraphGenerator.jar 1 room_1.txt)");


    for(int i = 0; i < 100; i++){
        Timer timer;
        GraphBuilder graphBuilder;

        Graph* graph = graphBuilder
                .readFile("Data/room_13.txt")
                .build();

        VacuumCleanerAgent *agent = new VacuumCleanerAgent("1111111111111", 0);
        Environment environment(graph, agent);
        timer.startTimer();
        environment.turnAgentOn();
        timer.stopTimer();
        Logger::getInstance()->log(timer.getTimeInMs()) ;
    }
    return 0;


}