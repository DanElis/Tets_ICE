//
// Created by wer on 17.10.2019.
//

#ifndef UNTITLED_TESTSTAND_H
#define UNTITLED_TESTSTAND_H

#include "Engine.h"

class TestStand{
public:
    virtual ~TestStand() = default;
    virtual void run()=0;
    virtual float timeFromStartToOverheatSec()=0;
};


#endif //UNTITLED_TESTSTAND_H
