//
// Created by wer on 17.10.2019.
//

#ifndef UNTITLED_INTERNALCOMBUSTIONENGINE_H
#define UNTITLED_INTERNALCOMBUSTIONENGINE_H

#include <utility>
#include <vector>
#include <map>
#include "Engine.h"

struct InputParameters{
    float I;
    std::vector<float> M;
    std::vector<float> V;
    float T_superheat;
    float H_m;
    float H_v;
    float C;
    float T_ambient;
};

class InternalCombustionEngine : public Engine {
public:
    explicit InternalCombustionEngine(const InputParameters& inputParameters);
    ~InternalCombustionEngine() override;
    inline bool isSuperheat() override ;
    void changeValue(float time_sec) override ;
private:
    std::vector<float> V;
    std::vector<float> M;
    std::map<float,float> VM;
    float I;
    float T_engine;
    float currentV{};
    float currentM{};
    float T_superheat;
    float H_m;
    float H_v;
    float C;
    float T_ambient;
    inline float getV_h();
    inline float getV_c();
    inline void changeV(float time_sec);
    inline void changeM();
    void changeTEngine(float time_sec);

};
#endif //UNTITLED_INTERNALCOMBUSTIONENGINE_H
