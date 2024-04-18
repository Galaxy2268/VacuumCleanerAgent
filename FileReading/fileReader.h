#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "../List/List.h"
#include "../PriorityQueue/PriorityQueue.h"
#include "../Pair/Pair.h"
#include "../Graph/Vertex.h"
#include "../Graph/Edge.h"

 Pair<List<Vertex*>*, List<Edge*>*> fileReader(string filename){

    fstream myFile(filename);

    List<Vertex*>* vertexes = new List<Vertex*>();
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
            Vertex* vertex = new Vertex(vertexId, vertexName);
            vertexes->addBack(vertex);
        }
    } else {
        cout << "Error opening file: " << filename << endl;
    }

    List<Edge*>* edges = new List<Edge*>();
    int source, destination, cost;
    while (myFile >> source >> destination >> cost){
        Edge* edge = new Edge(source, destination, cost);
        edges->addBack(edge);
    }

    myFile.close();
    Pair<List<Vertex*>*, List<Edge*>*> result(vertexes, edges);
    return result;

}