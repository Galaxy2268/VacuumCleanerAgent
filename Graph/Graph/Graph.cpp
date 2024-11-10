
//
// Created by danie on 09/09/2024.
//

#include "Graph.h"


Graph::Graph(int size){
    this->edgeCount = 0;
    this->vertexCount = size;
    this->graph = new Vertex*[size];
}

Graph::~Graph() {
    for(int i = 0; i < this->vertexCount; i++){
        delete this->graph[i];
    }
    delete[] this->graph;
}


void Graph::addVertex(int id)   {
    this->graph[id] = new Vertex (id);
}


void Graph::addEdge(int from, int to)  {
    this->graph[from]->addNeighbour(Edge(from, to));
    this->edgeCount++;
}

int Graph::getVertexCount() {
    return this->vertexCount;
}

int Graph::getEdgeCount()   {
    return this->edgeCount;
}

void Graph::print() {
    if(this->vertexCount == 0) return;

    for(int i = 0; i < this->vertexCount; i++){
        std::cout << this->graph[i]->getId();
        std::cout << " ||";
        for(int j = 0; j < this->graph[i]->getNeighbours()->size(); j++){
            std::cout << " -> ";
            std::cout << this->graph[i]->getNeighbours()->getElById(j).getTo();
        }
        std::cout << "\n";
    }
}

List<int>* Graph::shortestPath(int start, int goal) {
    Queue<int> queue;
    queue.push(start);

    bool visited[this->vertexCount];
    for(int i = 0; i < this->vertexCount; i++){
        visited[i] = false;
    }
    visited[start] = true;

    Map parent(goal);
    parent.insert(start, -1);

    while(!queue.isEmpty()){
        int current = queue.pop();

        if(current == goal){
            List<int>* path = new List<int>;
            int node = goal;
            while(node != -1){
                path->addFirst(node);
                node = parent.get(node);
            }
            return path;
        }

        for(int i = 0; i < this->graph[current]->getSize(); i++){
            int neighbour = this->graph[current]->getNeighbours()->getElById(i).getTo();
            if(!visited[neighbour]){
                queue.push(neighbour);
                visited[neighbour] = true;
                parent.insert(neighbour,current);
            }
        }
    }

}

void Graph::printShortestPath(int start, int goal) {
    List<int>* path = this->shortestPath(start, goal);

    std::cout << "Shortest path from " << start << " to " << goal << " is " << path->size() - 1 << " steps: ";
    path->print();
    delete path;
}

void Graph::printAgentActions(std::string roomState, int agentPos) {
    int roomCount = roomState.size();
    int stateCount = pow(2, roomCount) * roomCount;
    int state = (stoi(roomState, nullptr, 2) * roomCount) + agentPos;

    List<int>* path = this->shortestPath(state, stateCount - 1);

    int current = path->getFirst();
    for(int i = 1; i < path->size(); i++){
        if(current <= path->getEl(i) - roomCount){
            std::cout << "Clear room number " << path->getEl(i) % roomCount << "\n";
            current = path->getEl(i);
            continue;
        }
        std::cout << "Go to room number: " << path->getEl(i) % roomCount << "\n";
        current = path->getEl(i);

    }
    delete path;
}