#include <iostream>
#include <fstream>
#include <string>
#include "..GraphEdge/GraphEdge.h"
#include "..Vertex/Vertex.h"
#include "../List/List.h"
#include "../Pair/Pair.h"
#include "../PriorityQueue/PriorityQueue.h"
using namespace std;

void fileReader(fstream MyFile){

List<GraphEdge> graphs;

MyFile.open("MapOfRomania.txt");

int cityID, cost; 
string cityName;

if(MyFile.is_open()){
    while(MyFile >> cityID >> cityName){
        Vertex.setID(cityID); Vertex.setName(cityName);
    }
    while(MyFile >> cityID >> Pair<cityID, cost>){
        GraphEdge.setFrom(); GrapgEdge.setPair(); Vertex.setNeigbours();
    }
    MyFile.close();
} else {
    cout<< "Error opening file";
}

}