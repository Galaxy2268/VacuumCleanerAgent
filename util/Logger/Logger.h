//
// Created by danie on 18/11/2024.
//

#ifndef VACUMCLEANERAGENT_LOGGER_H
#define VACUMCLEANERAGENT_LOGGER_H

#include <iostream>
#include <fstream>
class Logger {
private:
    std::ofstream logFile;
    Logger();
    ~Logger();

public:
    static Logger *getInstance();

    Logger(const Logger&) = delete;

    Logger& operator=(const Logger&) = delete;

    void log(std::string message);

    void log(double message);


};

#include "Logger.cpp"
#endif //VACUMCLEANERAGENT_LOGGER_H
