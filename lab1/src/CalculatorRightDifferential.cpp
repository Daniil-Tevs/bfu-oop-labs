#include "../inc/CalculatorRightDifferential.h"

double CalculatorRightDifferential::evolveDifferential(double x, std::function<double(double)> func) {
    return (func(x + m_accuracy) - func(x)) / m_accuracy;
}