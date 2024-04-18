#include <iostream>
#include "fileReader.h"
#include "../List/List.h"
#include "../PriorityQueue/PriorityQueue.h"
#include "../Pair/Pair.h"
#include "../Graph/Vertex.h"
#include "../Graph/Edge.h"

 List<Vertex*>* graphEdges(string filename){

    Pair<List<Vertex*>*, List<Edge*>*> pair = fileReader(filename);

    List<Vertex*>* vertexes = pair.getFirst();
    List<Edge*>* edges = pair.getSecond();

    int j = 0;
    for (int i = 0; i < edges->size(); i++) {
        if (edges->getElById(i)->getSource() != vertexes->getElById(j)->getId()) {
            j++;
        }
        vertexes->getElById(j)->addNeighbour(*edges->getElById(i));
    }
    return vertexes;

}