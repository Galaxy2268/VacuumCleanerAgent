#include <iostream>
#include <string>
#include "Vector/Vector.h"
#include "List/List.h"
#include "Pair/Pair.h"
#include "PriorityQueue/PriorityQueue.h"
#include "Map/Map.h"
#include "List/ListEl.h"
#include "Graph/Edge.h"
#include "Graph/Vertex.h"
#include "Graph/FileReader.h"

using namespace std;

//Main function
int main(){

cout<< "Hello";

FileReader read_graph("testData/MapOfRomania.txt");
cout << read_graph.getGraph();

}