#include <iostream>
#include "include/InternalCombustionEngine.h"
#include "include/ConsoleWriter.h"
#include "include/TestStandICE.h"

int main() {

    auto* consoleWriter = new ConsoleWriter();
    consoleWriter->readTAmbient();
    consoleWriter->runTest();
    consoleWriter->writeTime();
    delete consoleWriter;
    return 0;
}
