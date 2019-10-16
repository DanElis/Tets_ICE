cmake_minimum_required(VERSION 3.15)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp include/Engine.h src/InternalCombustionEngine.cpp include/InternalCombustionEngine.h include/IOWriter.h include/TestStand.h src/TestStandICE.cpp include/TestStandICE.h src/ConsoleWriter.cpp include/ConsoleWriter.h include/defaultData.h)