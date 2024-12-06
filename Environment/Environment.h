//
// Created by danie on 14/11/2024.
//

#ifndef VACUMCLEANERAGENT_ENVIRONMENT_H
#define VACUMCLEANERAGENT_ENVIRONMENT_H
#include "../Graph/Graph/Graph.h"
#include "../Agent/VacuumCleanerAgent.h"

//Abstraction for agent and graph.
//Abstrakcija aģentam un grafam.
class Environment {
private:
    Graph *environment;
    VacuumCleanerAgent *agent;

public:
    /*
    Description:
        Constructor for environment that takes graph and data to create agent.
        Vides konstruktors, kas pieņem grafu un datus, lai izveidotu aģentu.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */
    Environment(Graph *environment, std::string roomState, int position);

    /*
    Description:
        Constructor of the environment that takes graph and agent.
        Vides konstruktors, kas pieņem grafu un aģentu.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */
    Environment(Graph *environment, VacuumCleanerAgent *agent);

    /*
    Description:
        Destructor of the environment that deallocates memory taken by graph and agent.
        Vides destruktors, kurš atbrīvo aizņemto atmiņu ar grafu un aģentu. Izmanto clear metodi.
    Complexity:
        Always: O(|V| + |E|) | V - graph vertex count, E - graph edge count.
        Vienmēr: O(|V| + |E|) |  V - grafa virsotņu skaits, E -  grafa pāreju skaits.
    */
    ~Environment();

    /*
    Description:
        Method that returns pointer to the agent.
        Metode, kas atgriež norādi uz aģentu.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */
    VacuumCleanerAgent *getAgent();

    /*
    Description:
        Method that sets given graph.
        Metode, kas iestata padoto grafu.
    Complexity:
        Always: O(1)
        Vienmēr: O(1)
    */
    void setEnvironment(Graph *environment);

    /*
    Description:
        Method that turns agent on with sensors.
        Metode, kas ieslēdz aģentu ar sensoriem.
    Complexity:
        Best case: O(1) | Worst case: O(n^2) | Depends in which state agent is. | n - istabu skaits vidē.
        Labākajā gadijumā: O(1) | Sliktākajā gadijumā: O(n^2) | Atkarībā no tā, kurā stavoklī atrodas aģents. | n - istabu skaits vidē.
    */
    void turnAgentOn();

    /*
    Description:
        Method that turns agent on with sensors, and sets specific state.
        Metode, kas ieslēdz aģentu ar sensoriem, iestatot aģenatm padoto stāvokli.
    Complexity:
        Best case: O(1) | Worst case: O(n^2) | Depends in which state agent is. | n - istabu skaits vidē.
        Labākajā gadijumā: O(1) | Sliktākajā gadijumā: O(n^2) | Atkarībā no tā, kurā stavoklī atrodas aģents. | n - istabu skaits vidē.
    */
    void turnAgentOn(std::string roomState, int position);

    /*
    Description:
        Method that turns agent on without sensors.
        Metode, kas ieslēdz aģentu bez sensoriem.
    Complexity:
        Best case: O(1) | Worst case: O(n^2) | Depends in which state agent is. | n - istabu skaits vidē.
        Labākajā gadijumā: O(1) | Sliktākajā gadijumā: O(n^2) | Atkarībā no tā, kurā stavoklī atrodas aģents. | n - istabu skaits vidē.
    */
    void turnAgentOnWithoutSensors();

    /*
    Description:
        Method that turns agent on without sensors, and sets specific state.
        Metode, kas ieslēdz aģentu bez sensoriem, iestatot aģenatm padoto stāvokli.
    Complexity:
        Best case: O(1) | Worst case: O(n^2) | Depends in which state agent is. | n - istabu skaits vidē.
        Labākajā gadijumā: O(1) | Sliktākajā gadijumā: O(n^2) | Atkarībā no tā, kurā stavoklī atrodas aģents. | n - istabu skaits vidē.
    */
    void turnAgentOnWithoutSensors(std::string roomState, int position);

};

#include "Environment.cpp"
#endif //VACUMCLEANERAGENT_ENVIRONMENT_H
