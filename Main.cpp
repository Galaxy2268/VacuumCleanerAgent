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

using namespace std;

//Main function
int main(){
    Edge edge1(1, 1, 1);
    Edge edge2(2, 2, 2);
    Edge edge3(3, 3, 3);
    Edge edge4(4, 4, 4);

    Vertex vertex("name");

    vertex.addNeighbour(edge2);
    vertex.addNeighbour(edge1);
    vertex.addNeighbour(edge3);
    vertex.addNeighbour(edge4);




    return 0;
}