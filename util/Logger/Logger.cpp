//
// Created by danie on 18/11/2024.
//

#include "Logger.h"

Logger::Logger() {
    logFile.open("util/out/Logs.txt",std::ios::out | std::ios::trunc);
    if (!logFile.is_open()) {
        throw std::runtime_error("Cannot open log file");
    }
}

Logger::~Logger() {
    if (logFile.is_open()) {
        logFile.close();
    }
}


Logger *Logger::getInstance() {
    static Logger instance;
    return &instance;
}

void Logger::log(std::string message) {
    if (logFile.is_open()) {
        logFile << message << std::endl;
        logFile.flush();
    } else {
        throw std::runtime_error("Log file isn't opened");
    }
}