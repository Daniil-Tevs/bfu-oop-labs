cmake_minimum_required(VERSION 3.26)
project(Lab1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab1 main.cpp
        inc/Calculator.h
        src/CalculatorRightDifferential.cpp
        inc/CalculatorRightDifferential.h
        src/CalculatorLeftDifferential.cpp
        inc/CalculatorLeftDifferential.h
        src/CalculatorCentralDifferential.cpp
        inc/CalculatorCentralDifferential.h
        inc/index.h)
