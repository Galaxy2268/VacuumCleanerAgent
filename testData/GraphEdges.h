#include <iostream>
#include <fstream>
#include <string>
#include "Vertex.h"
#include "Edge.h"
#include "../List/List.h"
#include "../PriorityQueue/PriorityQueue.h"
using namespace std;

List<Vertex> printGraphEdges(){

    List<Vertex> graphEdges;
    ifstream myFile;

    myFile.open("MapOfRomania.txt");

    if(myFile.is_open()){

        Vertex vertex;
        int vertexId; string vertexName; PriorityQueue<Edge> vertexNeighbours;

        while(myFile >> vertexId >> vertexName){
            vertex.setId(vertexId); vertex.setName(vertexName);
            graphEdges.addBack(vertex);
        }

        int vertexTo; int cost;

        while(myFile >> vertexId >> vertexTo >> cost){
            Edge edges(vertexTo, cost);
            vertex.setNeighbours(edges);
        }

        myFile.close();
    } else {
        cout << "Error opening file";
    }
    return graphEdges;
}