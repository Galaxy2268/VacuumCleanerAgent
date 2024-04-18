#include <iostream>
#include <fstream>
#include <string>
#include "List/List.h"
#include "Graph/Edge.h"
using namespace std;


class Graph{
private:
    int vertCount;
    int * neigbhours;


public:
    Graph(int vertCount){
        this->vertCount = vertCount;
        int * arr = new int[vertCount];
        this->neigbhours = arr;

        for (int i = 0; i < this->vertCount; i++) {
            List<Edge> list();
            this->neigbhours = NULL;
        }
        cout << this->neigbhours[10];
    };
    ~Graph(){
        delete this->neigbhours;
    }

//    void addEdge(int cityFrom, int cityTo, int cost){
//        Edge edge(cityFrom, cityTo, cost);
//        this->kaimini[cityFrom]->addBack(edge);
//    }


};




int main(){
    fstream file;
    int vertCount;
    int edgeCount;

    file.open("graph.txt");

    if(!file.is_open()){
        return 0;
    }

    file >> vertCount >> edgeCount;
    string arr[vertCount];

    for(int i = 0; i < vertCount; i++){
        file >> arr[i];
    }

    for(int i = 0; i < vertCount; i++){
//        cout << arr[i];
    }
    int cityFrom;
    int cityTo;
    int distance;
    Graph graph(vertCount);
    for (int i = 0; i < edgeCount; i++) {
//        file >> cityFrom >> cityTo >> distance;
//        cout << cityFrom << " " << cityTo << " " << distance << '\n';
//        graph.addEdge(cityFrom, cityTo, distance);
    }






    file.close();
}
