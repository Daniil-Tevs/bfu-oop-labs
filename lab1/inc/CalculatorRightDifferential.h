#pragma once
#include "Calculator.h"

class CalculatorRightDifferential : Calculator {
public:
    CalculatorRightDifferential(double epsilon) : Calculator(epsilon) {}

    double evolveDifferential(double x, std::function<double(double)> func);
};
