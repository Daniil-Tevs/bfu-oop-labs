#include "../inc/CalculatorLeftDifferential.h"

double CalculatorLeftDifferential::evolveDifferential(double x, std::function<double(double)> func) {
    return  (func(x) - func(x - m_accuracy)) / m_accuracy;
}