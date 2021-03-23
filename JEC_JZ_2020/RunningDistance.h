/**
 ******************************************************************************
 ** ファイル名 : RunningDistance.h
 ** クラス名   : RunningDistance
 **
 ** 概要 : 走行距離の計算を行うクラス
 ******************************************************************************
 **/
#pragma once

#include "ev3api.h"
#include "Motor.h"

class RunningDistance
{
protected:
    const float PAI = 3.141592653589793F;
    ev3api::Motor* leftMotor;
    ev3api::Motor* rightMotor;

public:
    RunningDistance(ev3api::Motor* leftM, ev3api::Motor* rightM);
    virtual ~RunningDistance();
    int getRunDistance();

};