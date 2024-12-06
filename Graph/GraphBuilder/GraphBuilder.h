//
// Created by danie on 14/09/2024.
//

#ifndef VACUMCLEANERAGENT_GRAPHBUILDER_H
#define VACUMCLEANERAGENT_GRAPHBUILDER_H
#include "../Graph/Graph.h"

//Helper class for reading and creating graph
//Palīgklase, lai ielasītu un izveidotu grafu
class GraphBuilder {
private:
    std::string fileName;

public:
    /*
    Description:
        Graphbuilder constructor
        Grafa veidotāja konstruktors
    Complexity:
        Awlays: O(1)
        Vienmēr: O(1)
    */
    GraphBuilder();

    /*
    Description:
        Method that sets, which file to read
        Metode, kas iestata, kuru failu jāielasa
    Complexity:
        Awlays: O(1)
        Vienmēr: O(1)
    */
    
    GraphBuilder& readFile(std::string fileName);

    /*
    Description:
        Method that builds graph
        Metode, kas izveido grafu
    Complexity:
        Awlays: O(n)
        Vienmēr: O(n)
    */
    Graph* build();

};


#include "GraphBuilder.cpp"
#endif //VACUMCLEANERAGENT_GRAPHBUILDER_H