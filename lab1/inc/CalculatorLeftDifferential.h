#pragma once
#include "Calculator.h"

class CalculatorLeftDifferential : Calculator {

public:
    CalculatorLeftDifferential(double epsilon) : Calculator(epsilon)  {}

    double evolveDifferential(double x, std::function<double(double)> func);
};
