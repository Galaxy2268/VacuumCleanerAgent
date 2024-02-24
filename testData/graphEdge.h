#include <iostream>
#include <fstream>
#include <string>
#include "../PriorityQueue/PriorityQueue.h"
#include "../Pair/Pair.h"
using namespace std;

//Ceļi
class graphEdge{ 

private:
Pair<int, int> cities;
int cost;

public:
graphEdge(Pair<int, int> cities, int c) : cities(cities), cost(c)   {}

int getFrom(){
    return cities.getFirst();
}

int getTo(){
    return cities.getSecond();
}

int getCost(){
    return cost;
}

};



//Virsotnes
class Vertexes{

private:
int cityID;
string cityName;
PriorityQueue <graphEdge> neighbours;

public:
Vertexes(int id, string name) : cityID(id), cityName(name)  {}

int getID(){
    return cityID;
}

string getName(){
    return cityName;
} 

PriorityQueue <graphEdge> getNeighbours(){
    return neighbours;
}

};