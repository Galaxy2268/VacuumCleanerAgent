//
// Created by danie on 09/09/2024.
//

#ifndef VACUMCLEANERAGENT_EDGE_H
#define VACUMCLEANERAGENT_EDGE_H

//Edge class that represents edges in graph
//Pārejas klase, kas reprezentē pārejas grafā

class Edge {
private:
    int from;
    int to;

public:

    /*
    Description:
        Edge constructor that creates edge instance 
        Pārejas konstruktors, kas izveido pārejas instanci
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */

    Edge(int from, int to);

    /*
    Description:
        Method that returns vertex from id
        Metode, kas atgriež virsotnes no indeksu
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */
    
    int getFrom();

    /*
    Description:
        Method that returns vertex to id
        Metode, kas atgriež virsotnes uz indeksu
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */
    
    int getTo();

    //Necessary to override bool operators for list sorting methods
    //Nepieciešams, lai pārdefinētu bool operatorus saistītā saeaksta sakārtošanas metodēm

    friend bool operator==(Edge e1, Edge e2);
    friend bool operator!=(Edge e1, Edge e2);
    friend bool operator<(Edge e1, Edge e2);
    friend bool operator>(Edge e1, Edge e2);
    friend bool operator<=(Edge e1, Edge e2);
    friend bool operator>=(Edge e1, Edge e2);

};

#include "Edge.cpp"
#endif //VACUMCLEANERAGENT_EDGE_H
