//
// Created by danie on 18/11/2024.
//

#ifndef VACUMCLEANERAGENT_TIMER_H
#define VACUMCLEANERAGENT_TIMER_H

#include <chrono>


class Timer {
private:
    std::chrono::steady_clock::time_point start;
    std::chrono::steady_clock::time_point end;

public:
    Timer();

    void startTimer();

    void stopTimer();

    double getTimeInMs();

};

#include "Timer.cpp"
#endif //VACUMCLEANERAGENT_TIMER_H
