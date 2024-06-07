#include <iostream>
#include <Windows.h>
#include "inc/index.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double epsilon = 1e-6;
    CalculatorRightDifferential rightDerivative(epsilon);
    CalculatorLeftDifferential leftDerivative(epsilon);
    CalculatorCentralDifferential centralDerivative(epsilon);

    std::function<double(double)> func = [](double x) { return cos(x); };
    double x = 3.0;


    std::cout << "Правая производная: " << rightDerivative.evolveDifferential(x, func) << std::endl;
    std::cout << "Левая производная: " << leftDerivative.evolveDifferential(x, func) << std::endl;
    std::cout << "Центральная производная: " << centralDerivative.evolveDifferential(x, func) << std::endl;

    return 0;
}
