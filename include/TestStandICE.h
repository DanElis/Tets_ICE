//
// Created by wer on 17.10.2019.
//

#ifndef UNTITLED_TESTSTANDICE_H
#define UNTITLED_TESTSTANDICE_H

#include <ctime>
#include "TestStand.h"
#include "InternalCombustionEngine.h"

class TestStandICE: public  TestStand{
public:
    explicit TestStandICE(Engine* engine);
    ~TestStandICE() override = default;
    float timeFromStartToOverheatSec() override;
    void run() override;

private:
    clock_t time_start{};
    Engine *engineICE;
    clock_t time_end{};
};


#endif //UNTITLED_TESTSTANDICE_H
