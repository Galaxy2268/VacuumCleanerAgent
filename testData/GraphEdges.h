#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "../List/List.h"
#include "../PriorityQueue/PriorityQueue.h"
#include "Vertex.h"
#include "Edge.h"
using namespace std;

void fileReader(string filename){

    fstream myFile(filename);

    List<Vertex> vertexes;
    if (myFile.is_open()) {
        int vertexId;
        string vertexName;
        string line;
        while (getline(myFile, line)) {
            if (line == "EDGES") {
                break;
            }
            istringstream iss(line);
            iss >> vertexId >> vertexName;
            Vertex vertex(vertexId, vertexName);
            vertexes.addBack(vertex);
        }
    } else {
        cout << "Error opening file: " << filename << endl;
    }

    List<Edge> edges;
    int source, destination, cost;
    while (myFile >> source >> destination >> cost){
        Edge edge(source, destination, cost);
        edges.addBack(edge);
    }

    for (Vertex& vertex : vertexes) {
        cout << "Id " << vertex.getId() << " is " << vertex.getName() << endl;
    }

    for (Edge& edge : edges) {
        cout << "From " << edge.getSource() << " -> " << edge.getDestination() << " is " << edge.getCost() << "km" <<endl;
    }

}