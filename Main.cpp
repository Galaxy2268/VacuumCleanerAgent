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
#include "Graph/Graph.h"
#include "Stack/Stack.h"





int main(){

    Graph graph;
    graph.setGraph("../graph.txt");
    graph.print();


}