//
// Created by danie on 18/11/2024.
//

#ifndef VACUMCLEANERAGENT_LOGGER_H
#define VACUMCLEANERAGENT_LOGGER_H

#include <iostream>
#include <fstream>

//Logger is singletone pattern class, that allows to call it anywhere in the code without creating many instances. It is used to log something in logs.txt file.
//Logeris ir "singletone pattern" klase, kas ļauj izsaukt to jebkurā koda daļā, neizveidojot atsevišķu instanci. Logeri izmanto lai ierakstītu kaut ko logs.txt failā.
class Logger {
private:
    std::ofstream logFile;

    //Private constructor to restrict accses of manually creating object of this class.
    //Privāts konstruktors, lai nebūtu iespējas izveidot šīs klases instanci.
    Logger();

    //Private destructor to restrict accses to manually delete object of this class.
    //Privāts destruktors, lai nebūtu iespējas izdzēst šīs klases instanci.
    ~Logger();

public:
    //Method that returns pointer to the class instance.
    //Metode kas atgriež norādi uz klases instanci.
    static Logger *getInstance();

    //Singletone has no copy constructor.
    //"Singletone" nav kopēšanas konstruktora.
    Logger(const Logger&) = delete;

    //Singletone has no assignement operator.
    //"Singletone" nav Piešķiršanas operatora.
    Logger& operator=(const Logger&) = delete;

    //Method that logs string into logs.txt file.
    //Metode, kas ieraksta tekstu logs.txt failā.

    void log(std::string message);

    //Method that logs double into logs.txt file.
    //Metode, kas ieraksta skaitli logs.txt failā.
    void log(double message);


};

#include "Logger.cpp"
#endif //VACUMCLEANERAGENT_LOGGER_H
