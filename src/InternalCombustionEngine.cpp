//
// Created by wer on 17.10.2019.
//

#include <iostream>
#include "../include/InternalCombustionEngine.h"

InternalCombustionEngine::~InternalCombustionEngine() = default;

InternalCombustionEngine::InternalCombustionEngine(const struct InputParameters& inputParameters) {
    I = inputParameters.I;
    M = inputParameters.M;
    V = inputParameters.V;
    T_superheat = inputParameters.T_superheat;
    H_m = inputParameters.H_m;
    H_v = inputParameters.H_v;
    C = inputParameters.C;
    T_ambient = inputParameters.T_ambient;
    T_engine = T_ambient;
    for (int i = 0 ; i < M.size(); i++){
        VM[V[i]] = M[i];
    }
    currentV = 0;
    currentM = M[0];
}

bool InternalCombustionEngine::isSuperheat() {
    return T_superheat < T_engine;
}

void InternalCombustionEngine::changeValue(float time_sec) {
    changeV(time_sec);
    changeM();

    changeTEngine(time_sec);
}

float InternalCombustionEngine::getV_h() {
    float tmpM = currentM;
    return tmpM * H_m + currentV*currentV * H_v;
}

void InternalCombustionEngine::changeV(float time_sec) {
    float a = currentM/I;
    currentV += a * float(time_sec);
}

void InternalCombustionEngine::changeM() {
    __gnu_cxx::__normal_iterator<float *, std::vector<float>> lowerV = std::lower_bound(V.begin(), V.end(), currentV);
    float lowerValV = *lowerV;
    float upperValV = *(++lowerV);
    float lowerValM = VM[lowerValV];
    float upperValM = VM[upperValV];

    float k = (currentV - lowerValV) / (upperValV - lowerValV);
    currentM = lowerValM + k * (upperValM - lowerValM);
}

float InternalCombustionEngine::getV_c() {
    return C*(T_ambient - T_engine);
}

void InternalCombustionEngine::changeTEngine(float time_sec) {
    float v_h = getV_h();
    float v_c = getV_c();
    T_engine += (v_h - v_c)*time_sec;

}
