#ifndef VACUMCLEANERAGENT_FILEREADER_H
#define VACUMCLEANERAGENT_FILEREADER_H

#include "Graph.h"
#include <fstream>

class FileReader    {
private:
    Graph graph;
    int vertexCount;
    int edgeCount;

public:
    FileReader(string fileName);

    Graph getGraph();

    int getVertexCount();

    int getEdgeCount();

};

#include "FileReader.cpp"
#endif //VACUMCLEANERAGENT_FILEREADER_H