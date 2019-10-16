//
// Created by wer on 17.10.2019.
//

#ifndef UNTITLED_CONSOLEWRITER_H
#define UNTITLED_CONSOLEWRITER_H


#include <vector>
#include "IOWriter.h"
#include "TestStandICE.h"
#include "defaultData.h"

class ConsoleWriter: public IOWriter {
public:
    explicit ConsoleWriter();
    ~ConsoleWriter() override  ;
    float readTAmbient() override ;
    void runTest() override;
    void writeTime() override;
private:
    TestStand *testStandICE{};
    float timeFromStartToOverheatSec{};
    float T_ambient{};
    InputParameters inputParameters;
    InternalCombustionEngine *ICE{};
};


#endif //UNTITLED_CONSOLEWRITER_H
