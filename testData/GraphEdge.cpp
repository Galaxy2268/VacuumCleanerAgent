#include <iostream>
#include <fstream>
#include <string>
#include "../Pair/Pair.h"
#include "../PriorityQueue/PriorityQueue.h"
#include "../Map/Map.h"
#include "GraphEdge.h"
#include "Vertex.h"
using namespace std;

//Vertex constructor implementation
Vertex::Vertex(Map<cityID, cityName> cities, PriorityQueue<GraphEdge> neighbours){
    this->cityID = cityID;
    this->cityName = cityName;
    this->cities = cities;
    this->neighbours = neighbours;
}


//GraphEdge implementation
GraphEdge::GraphEdge(Pair<string, string> cityPair, int cost){
    this->cityPair = cityPair;
    this->cost = cost;
}


//Reading data from "MapOfRomania.txt" text file
ifstream myFile;

myFile.open("MapOfRomania.txt");
if (myFile.is_open()){
    while(myFile >> cityID >> cityName){
        cities.insert(cityID, cityName);
    } 
    while (myFile >> cities.get(cityID) >> cities.get(cityID) >> cost){
        cityPair.setFirst(cities.get(cityName))
        cityPair.setSecond(cities.get(cityName))
    }
  myfile.close();
} else {
    cout << "Error opening the file!";
}


//GraphEdge function implementation
int GraphEdge::getFrom(){
    return cityPair.getFirst();
}

int GraphEdge::getTo(){
    return cityPair.getSecond();
}

int GraphEdge::getCost(){
    return cost;
}


//Vertex function implementation
int Vertex::getID(){
    return cities.get(cityID);
}

string Vertex::getName(){
    return cities.get(cityName)
}

PriorityQueue<GraphEdge> Vertex::getNeighbours(){
    return neighbours;
}