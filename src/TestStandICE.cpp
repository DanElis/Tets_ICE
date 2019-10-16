//
// Created by wer on 17.10.2019.
//

#include <unistd.h>
#include <chrono>
#include "../include/TestStandICE.h"

void TestStandICE::run() {
    const float SPEED = 100000.0;
    time_start = clock();
    clock_t time_last;
    clock_t time_now = time_start;
    while(!engineICE->isSuperheat()){
        time_last = time_now;
        time_now = clock();
        float time = float(time_now - time_last)/SPEED;
        engineICE->changeValue(time);
    }
    time_end = clock();
}

TestStandICE::TestStandICE(Engine* engine) {
    engineICE = engine;
}

float TestStandICE::timeFromStartToOverheatSec() {
    return  float(time_end-time_start)/CLOCKS_PER_SEC;
}


