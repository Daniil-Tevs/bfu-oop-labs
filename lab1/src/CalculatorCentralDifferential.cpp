#include "../inc/CalculatorCentralDifferential.h"

double CalculatorCentralDifferential::evolveDifferential(double x, std::function<double(double)> func) {
    return (func(x + m_accuracy) - func(x - m_accuracy)) / (2.0 * m_accuracy);
}
