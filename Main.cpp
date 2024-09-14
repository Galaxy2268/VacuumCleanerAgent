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
#include "Graph/GraphBuilder.h"

using namespace std;

//Main function
int main() {
    GraphBuilder graphBuilder;

    Graph graph = graphBuilder
            .readFile("Somefile")
            .build();

    return 0;


}