#include "FileReader.h"

FileReader::FileReader(string fileName) {

    fstream file;
    int id;
    string name;
    int from, to, cost;


    file.open(fileName);

    if (!file.is_open())    {
        throw runtime_error"Error opening file";
    }

        file >> this->vertexCount >> this->edgeCount;
        this->graph = new Graph(this->vertexCount);

        for (int i = 0; i < this->vertexCount; i++) {
            file >> name;
            this->graph.addVertex(i, name);
        }

        for (int i = 0; i <= this->edgeCount; i++)  {
            file >> from >> to >> cost;
            this->graph.addEdge(from, to, cost);
        }

    file.close()
    
}

Graph FileReader::getGraph()    {
    return this->graph;
}

int FileReader::getVertexCount()    {
    return this->vertexCount;
}

int Filereader::getEdgeCount()  {
    return this->edgeCount;
}
