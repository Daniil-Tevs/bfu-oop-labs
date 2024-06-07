#pragma once
#include "Calculator.h"

class CalculatorCentralDifferential : Calculator {
public:
    CalculatorCentralDifferential(double epsilon) : Calculator(epsilon) {}

    double evolveDifferential(double x, std::function<double(double)> func);
};
