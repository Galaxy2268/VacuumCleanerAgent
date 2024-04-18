#include "Graph.h"


Graph::Graph(): graph(){}

void Graph::setGraph(string file) {
    List<Vertex*>* newGraph = graphEdges(file);
    for(int i = 0; i < newGraph->size(); i++){
        this->graph.addBack(*newGraph->getElById(i));
    }
    delete newGraph;

}

void Graph::print() {
    if(this->graph.isEmpty()) return;

    for(int i = 0; i < this->graph.size(); i++){
        cout << this->graph.getElById(i).getId();
        cout << " ||";
        for(int j = 0; j < this->graph.getElById(i).getNeighbours().size(); j++){
            cout << " -> ";
            cout << this->graph.getElById(i).getNeighbours().getEl(j).getDestination();
        }
        cout << "\n";
    }

}

void Graph::printPath(int start, int end) {
    //TODO: complete searching algorithm using DFS


}



