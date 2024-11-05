
//
// Created by danie on 09/09/2024.
//

#include "Graph.h"


Graph::Graph(int size){
    this->edgeCount = 0;
    this->vertexCount = size;
    this->graph = new Vertex[size];
}

Graph::~Graph() {
    delete[] this->graph;
}


void Graph::addVertex(int id, string name)   {
    this->graph[id] = Vertex (id, name);;
}


void Graph::addEdge(int from, int to, int cost)  {
    this->graph[from].addNeighbour(Edge(from, to, cost));
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
        cout << this->graph[i].getId();
        cout << " ||";
        for(int j = 0; j < this->graph[i].getNeighbours().size(); j++){
            cout << " -> ";
            cout << this->graph[i].getNeighbours().getElById(j).getTo();
        }
        cout << "\n";
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

    Map<int, int> parent;
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
        for(int i = 0; i < this->graph[current].getNeighbours().size(); i++){
            int neighbour = this->graph[current].getNeighbours().getElById(i).getTo();
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

    cout << "Shortest path from " << start << " to " << goal << " is " << path->size() - 1 << " steps: ";
    path->print();
    delete path;
}
