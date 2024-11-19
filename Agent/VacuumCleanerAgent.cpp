//
// Created by danie on 12/11/2024.
//

#include "VacuumCleanerAgent.h"


VacuumCleanerAgent::VacuumCleanerAgent(std::string roomState, int position) {
    this->timer = Timer();
    int roomCount = roomState.size();
    this->cleaned = new bool[roomCount];
    int stateCount = pow(2, roomCount) * roomCount;
    for(int i = 0; i < roomCount; i++){
        this->cleaned[i] = false;
        if(roomState[i] == '0'){
            roomState[i] = '1';
        } else{
            roomState[i] = '0';
        }
    }
    int state = (stoi(roomState, nullptr, 2) * roomCount) + position;

    this->currentState = state;
    this->goalStates = new List<int>();
    for(int i = 1; i <= roomCount; i++){
        this->goalStates->addLast(stateCount - i);
    }
    this->performedActions = new List<std::string>();
}

VacuumCleanerAgent::VacuumCleanerAgent() {
    this->currentState = 0;
    this->goalStates = new List<int>();
    this->performedActions = new List<std::string>();
    this->cleaned = new bool[1];
}

VacuumCleanerAgent::~VacuumCleanerAgent(){
    delete this->performedActions;
    delete this->goalStates;
    delete[] this->cleaned;
}

void VacuumCleanerAgent::setCurrentState(std::string roomState, int position) {
    delete[] this->cleaned;
    int roomCount = roomState.size();
    this->cleaned = new bool[roomCount];
    int stateCount = pow(2, roomCount) * roomCount;
    for(int i = 0; i < roomCount; i++){
        this->goalStates->addLast(stateCount - i + 1);
        this->cleaned[i] = false;
        if(roomState[i] == '0'){
            roomState[i] = '1';
        } else{
            roomState[i] = '0';
        }
    }
    int state = (stoi(roomState, nullptr, 2) * roomCount) + position;

    this->currentState = state;
    this->goalStates->clear();
}

int VacuumCleanerAgent::getCurrentState() {
    return this->currentState;
}

List<int> const *VacuumCleanerAgent::getGoalStates() {
    return this->goalStates;
}

void VacuumCleanerAgent::cleanEnvironment(Graph *environment) {
    this->timer.startTimer();
    if(this->goalStates->exists(this->currentState)){
        std::cout << "Rooms already clean";
        return;
    }

    int currentEdgeCount = environment->getVertex(this->currentState)->getSize();
    if(this->isRoomDirty(currentEdgeCount, environment->getRoomCount(), this->currentState)) {
        for (int i = 0; i < currentEdgeCount; i++) {
            int connection = environment->getVertex(this->currentState)->getNeighbours()->getElById(i).getTo();
            if (connection - environment->getRoomCount() >= this->currentState) {
                this->cleanRoom(connection, environment->getRoomCount());
                break;
            }
        }
    }

    while(!this->goalStates->exists(this->currentState)){
        currentEdgeCount = environment->getVertex(this->currentState)->getSize();

        for(int i = 0; i < currentEdgeCount; i++){
            int neighbour = environment->getVertex(this->currentState)->getNeighbours()->getElById(i).getTo();
            int neighbourId = neighbour % environment->getRoomCount();
            int nextConnectionsCount = environment->getVertex(neighbour)->getSize();
            if(!cleaned[neighbourId] && this->isRoomDirty(nextConnectionsCount, environment->getRoomCount(), neighbour)){
                this->goToRoom(neighbour, environment->getRoomCount());
                for(int j = 0; j < currentEdgeCount; j++){
                    int connection = environment->getVertex(this->currentState)->getNeighbours()->getElById(j).getTo();
                    if(connection - environment->getRoomCount() >= this->currentState){
                        this->cleanRoom(connection, environment->getRoomCount());
                    }
                }
                break;
            }
        }
    }

    for(int i = 0; i < this->performedActions->size(); i++){
        std::cout << i + 1 << ')' << this->performedActions->getEl(i) << "\n";
    }
    this->performedActions->clear();
}

void VacuumCleanerAgent::cleanRoom(int nextState, int roomCount) {
    int roomId = this->currentState % roomCount;
    this->cleaned[roomId] = true;
    this->performedActions->addLast("Agent cleaned room " + std::to_string(roomId + 1));
    this->currentState = nextState;
}

bool VacuumCleanerAgent::isRoomDirty(int connectionCount, int roomCount, int stateToCheck) {
    int roomId = stateToCheck % roomCount;
    this->performedActions->addLast("Agent checked room " + std::to_string(roomId + 1));
    if(connectionCount >= roomCount){
        return true;
    } else{
        this->cleaned[roomId] = true;
        return false;
    }
}

void VacuumCleanerAgent::goToRoom(int nextState, int roomCount) {
    int roomId = nextState % roomCount;
    this->performedActions->addLast("Agent went to room " + std::to_string(roomId + 1));
    this->currentState = nextState;
}


void VacuumCleanerAgent::cleanEnvironmentWithoutSensors(Graph *environment){
    int currentState = this->getCurrentState();
    int vertexCount = environment->getVertexCount();

    Map path;
    path.insert(currentState, -1);

    bool visitedVertices[vertexCount];
    for(int i = 0; i < vertexCount; i++){
        visitedVertices[i] = false;
    }
    visitedVertices[currentState] = true;

    Queue<int> queue;

    queue.push(currentState);
    while(!queue.isEmpty()){
        int current = queue.pop();


        if(this->goalStates->exists(current)){
            List<int> pathList;
            int node = current;
            while(node != -1){
                pathList.addFirst(node);
                node = path.get(node);
            }
            for(int i = 0; i < pathList.size(); i++){
                std::cout << pathList.getEl(i);
                if(i < pathList.size() - 1){
                    std::cout << "->";
                }
            }
            return;
        }


        for(int i = 0; i < environment->getVertex(current)->getNeighbours()->size(); i++){
            int neighbour = environment->getVertex(current)->getNeighbours()->getElById(i).getTo();
            if (!visitedVertices[neighbour]){
                queue.push(neighbour);
                visitedVertices[neighbour] = true;
                path.insert(neighbour, current);
            }
        }
    }
}



