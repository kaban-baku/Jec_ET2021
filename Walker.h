//ETロボコン2021 技術教育資料  Chapter 4より
#pragma once

#include "Motor.h"
#include "AdvancedSteering.h"
#include "jec_lib/RunningDistance.h"

class Walker
{

private:
    ev3api::Motor &leftWheel, &rightWheel;
    AdvancedSteering& mSteering;
    int forward, turn, LINETRACE_DISTANCE;
    RunningDistance mRunningDistance;

public:
    static const int LOW, NORMAL, HIGH, RIGHT, LEFT;

    Walker(
        ev3api::Motor& leftWheel,
        ev3api::Motor& rightWheel,
        AdvancedSteering& steering);

    bool isGoal();
    void stop();

    void init();
    void run();
    void setCommand(int forward, int turn);
    void setTurn(int turn);
};