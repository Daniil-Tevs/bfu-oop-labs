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


    std::cout << "������ �����������: " << rightDerivative.evolveDifferential(x, func) << std::endl;
    std::cout << "����� �����������: " << leftDerivative.evolveDifferential(x, func) << std::endl;
    std::cout << "����������� �����������: " << centralDerivative.evolveDifferential(x, func) << std::endl;

    return 0;
}
