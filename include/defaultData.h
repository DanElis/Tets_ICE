#include "InternalCombustionEngine.h"
const std::vector<float> M({20,70,100,105,75,0});
const std::vector<float> V({0,75,150,200,250,300});
const struct InputParameters defaultInputParameters ({
        10,
        M,
        V,
        110,
        0.01,
        0.0001,
        0.1,
        0
});