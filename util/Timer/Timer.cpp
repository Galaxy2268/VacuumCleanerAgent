//
// Created by danie on 18/11/2024.
//

#include "Timer.h"

Timer::Timer() {
}

void Timer::startTimer() {
    this->start = std::chrono::steady_clock::now();
}

void Timer::stopTimer() {
    this->end = std::chrono::steady_clock::now();
}

double Timer::getTimeInMs() {
    std::chrono::duration<double, std::milli> duration = (this->end - this->start);
    return duration.count();
}

