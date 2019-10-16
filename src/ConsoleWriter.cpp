//
// Created by wer on 17.10.2019.
//

#include <iostream>
#include "../include/ConsoleWriter.h"


void ConsoleWriter::runTest() {
    ICE = new InternalCombustionEngine(inputParameters);
    testStandICE = new TestStandICE(ICE);
    testStandICE->run();
    timeFromStartToOverheatSec = testStandICE->timeFromStartToOverheatSec();
}

float ConsoleWriter::readTAmbient() {
    std::string tmp_str;
    std::cin>>tmp_str;
    T_ambient = std::stof( tmp_str );
    inputParameters.T_ambient = T_ambient;
}

ConsoleWriter::~ConsoleWriter() = default;

ConsoleWriter::ConsoleWriter() {
    inputParameters = defaultInputParameters;
}

void ConsoleWriter::writeTime() {
    std::cout<<timeFromStartToOverheatSec<<std::endl;

}

