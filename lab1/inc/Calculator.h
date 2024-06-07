#pragma once
#include <iostream>
#include <functional>

class Calculator {

protected:
    double m_accuracy  = 1e-6;
public:
    Calculator(double epsilon) : m_accuracy(epsilon) {}

    virtual double evolveDifferential(double x, std::function<double(double)> func) = 0;
};
