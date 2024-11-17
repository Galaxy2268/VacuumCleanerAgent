//
// Created by danie on 14/11/2024.
//

#include "Environment.h"

Environment::Environment(Graph *environment, std::string roomState, int position) {
    this->environment = environment;
    this->agent = VacuumCleanerAgent(roomState, position);
}

Environment::Environment(Graph *environment, VacuumCleanerAgent agent) {
    this->environment = environment;
    this->agent = agent;
}

VacuumCleanerAgent &Environment::getAgent() {
    return this->agent;
}

void Environment::setEnvironment(Graph *environment) {
    delete this->environment;
    this->environment = environment;
}

void Environment::turnAgentOn() {
    this->agent.cleanEnvironment(this->environment);
}

void Environment::turnAgentOn(std::string roomState, int position) {
    this->agent.setCurrentState(roomState, position);
    this->agent.cleanEnvironment(this->environment);
}