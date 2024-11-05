#include <iostream>
#include <string>
#include "Graph/GraphBuilder.h"

using namespace std;

//Main function
int main() {
    GraphBuilder graphBuilder;

    Graph graph = graphBuilder
            .readFile("testdata/MapOfRomania.txt")
            .build();



    graph.print();
    graph.printShortestPath(12, 2);
    return 0;


}