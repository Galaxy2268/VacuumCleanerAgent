//
// Created by danie on 18/11/2024.
//

#ifndef VACUMCLEANERAGENT_TIMER_H
#define VACUMCLEANERAGENT_TIMER_H

#include <chrono>

//Class that snaps time points and than can meassure passed time between them in miliseconds.
//Klase, kas fiksē laika punktus, un var noteikt laiku starp tiem milisekundēs. 
class Timer {
private:
    std::chrono::steady_clock::time_point start;
    std::chrono::steady_clock::time_point end;

public:
    Timer();

    //Snap first time point.
    //Fiksēt pirmo laika punktu.
    void startTimer();

    //Snap second time point.
    //Fiksēt otro laika punktu.
    void stopTimer();

    //Meassure time between time points in miliseconds.
    //Nosaka laiku starp laika punktiem milisekundēs.
    double getTimeInMs();

};

#include "Timer.cpp"
#endif //VACUMCLEANERAGENT_TIMER_H
