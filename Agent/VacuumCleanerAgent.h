//
// Created by danie on 12/11/2024.
//

#ifndef VACUMCLEANERAGENT_VACUUMCLEANERAGENT_H
#define VACUMCLEANERAGENT_VACUUMCLEANERAGENT_H
#include "../Graph/Graph/Graph.h"


//A rationally acting agent (vacuum cleaner) simulating the environment's cleaning processes. Can be turned on with A* algorithm or with BFS algorithm.
//Racionāli rīkojošs aģents, kas imitē vides attīrīšanas procesus. Var tikt ieslēgts ar A* algoritmu vai BFS algoritmu.
class VacuumCleanerAgent {
private:
    int currentState;
    List<int> *goalStates;
    List<std::string> *performedActions;
    bool *cleaned;

    //Agent action method for switching room and saving action.
    //Aģenta darbības metode istabu pārejām un darbības saglabāšanai. 
    void goToRoom(int nextState, int roomCount);

    //Agent action method that checks if room is dirty and saves action.
    //Aģenta darbības metode, kas pārbauda, vai istaba ir piegružota un saglabā šo darbību.
    bool isRoomDirty(int connectionCount, int roomCount, int stateToCheck);

    //Agent action method for cleaning room and saving action.
    //Aģenta darbības metode, lai iztīrītu istabu un saglabātu šo darbību.
    void cleanRoom(int nextState, int roomCount);


public:

    //Agent constructor that receives agent position and room state passed in binary code where 0 - clean room and 1 - dirty room
    //Aģenta konstruktors, kas saņem aģenta pozīciju un vides stāvokli izteiktu binārā reprezentācijā, kur 0 - tīra istaba un 1 - netīra istaba


    VacuumCleanerAgent(std::string roomState, int position);

    //Agent destructor
    //Aģenta destruktors

    ~VacuumCleanerAgent();

    //Empty agent constructor
    //Tukšais aģenta konstruktors

    VacuumCleanerAgent();

    //Method that sets agent state passed in binary code where 0 - clean room and 1 - dirty room
    //Metode, kas iestata aģenta stāvokli izteiktu binārā reprezentācijā, kur 0 - tīra istaba un 1 - netīra istaba

    void setCurrentState(std::string roomState, int position);

    //Method that returns agent state
    //Metode, kas atgriež aģenta stāvokli

    int getCurrentState();

    //Method that returns list of goal states
    //Metode, kas atgriež sarakstu ar mērķa stāvokļiem

    List<int> const *getGoalStates();

    //Method that uses A* algorithm to clean environment (traverse graph)
    //Metode, kas izmanto A* algoritmu, lai iztīrītu jeb izietu vidi
    //Time Complexity: O(n^2) //Memory Complexity: O(5n) n - room count
    //Laika sarežģītība: O(n^2) //Atmiņas sarežģītība: O(5n) n - istabu skaits

    void cleanEnvironment(Graph *environment);

    //Method that uses BFS algorithm to clean environment (traverse graph)
    //Metode, kas izmanto BFS algoritmu, lai iztīrītu jeb izietu vidi
    //Time Complexity: O(2^(n-1) * n(2n+1)) //Memory Complexity: O(2^(n+1) * n^2+n) n - room count
    //Laika sarežģītība: O(2^(n-1) * n(2n+1)) //Atmiņas sarežģītība: O(2^(n+1) * n^2+n) n = istabu skaitu

    void cleanEnvironmentWithoutSensors(Graph *environment);


};



#include "VacuumCleanerAgent.cpp"
#endif //VACUMCLEANERAGENT_VACUUMCLEANERAGENT_H
