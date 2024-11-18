//
// Created by danie on 14/11/2024.
//

#ifndef VACUMCLEANERAGENT_ENVIRONMENT_H
#define VACUMCLEANERAGENT_ENVIRONMENT_H
#include "../Graph/Graph/Graph.h"
#include "../Agent/VacuumCleanerAgent.h"


class Environment {
private:
    Graph *environment;
    VacuumCleanerAgent *agent;

public:
    Environment(Graph *environment, std::string roomState, int position);

    Environment(Graph *environment, VacuumCleanerAgent *agent);

    ~Environment();

    VacuumCleanerAgent *getAgent();

    void setEnvironment(Graph *environment);

    void turnAgentOn();

    void turnAgentOn(std::string roomState, int position);

};

#include "Environment.cpp"
#endif //VACUMCLEANERAGENT_ENVIRONMENT_H
