//
// Created by danie on 12/11/2024.
//

#ifndef VACUMCLEANERAGENT_VACUUMCLEANERAGENT_H
#define VACUMCLEANERAGENT_VACUUMCLEANERAGENT_H
#include "../Graph/Graph/Graph.h"



class VacuumCleanerAgent {
private:
    int currentState;
    List<int> *goalStates;
    List<std::string> *performedActions;
    bool *cleaned;


    void goToRoom(int nextState, int roomCount);

    bool isRoomDirty(int connectionCount, int roomCount, int stateToCheck);

    void cleanRoom(int nextState, int roomCount);


public:

    VacuumCleanerAgent(std::string roomState, int position);

    ~VacuumCleanerAgent();

    VacuumCleanerAgent();

    void setCurrentState(std::string roomState, int position);

    int getCurrentState();

    List<int> const *getGoalStates();

    void cleanEnvironment(Graph *environment);

    void cleanEnvironmentWithoutSensors(Graph *environment);


};



#include "VacuumCleanerAgent.cpp"
#endif //VACUMCLEANERAGENT_VACUUMCLEANERAGENT_H
