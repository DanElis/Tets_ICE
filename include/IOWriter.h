//
// Created by wer on 17.10.2019.
//

#ifndef UNTITLED_IOWRITER_H
#define UNTITLED_IOWRITER_H


#include "TestStand.h"

class IOWriter {
public:
    virtual ~IOWriter()= default;
    virtual float readTAmbient() = 0;
    virtual void runTest() = 0;
    virtual void writeTime() = 0;
};


#endif //UNTITLED_IOWRITER_H
