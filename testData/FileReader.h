#include <iostream>
#include <fstream>
#include <string>
#include "GraphEdge.h"
#include "Vertex.h"
#include "../List/List.h"
#include "../Pair/Pair.h"
#include "../PriorityQueue/PriorityQueue.h"
using namespace std;

void fileReader(ifstream MyFile, List<Vertex> allVertexes){

Vertex vertexes;

MyFile.open();
if (MyFile.is_open()){
    int cityID; string cityName;
    while (MyFile >> cityID >> cityName){
        allVertexes.add(vertexes(cityName));

    }
    GraphEdge edges; int cost; Pair<int, int> edge;
    while (MyFile >> cityID >> cityID >> cost){
        edges.setPair(cityID, cost);
        vertexes.setEdges(edges);
        allVertexes.add(vertexes(edges));
    }
    MyFile.close();
} else {
    cout<< "Error opening file";
}

return allVertexes;

}