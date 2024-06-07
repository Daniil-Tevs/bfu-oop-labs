#include <iostream>
#include "inc/Fraction.h"

int main() {
    Fraction f1 = Fraction(1,2);
    Fraction f2 = Fraction(2,3);

    std::cout<< f1+f2 << std::endl;
    std::cout<< f1-f2 << std::endl;
    std::cout<< f1*f2 << std::endl;
    std::cout<< f1/f2 << std::endl;


    std::cout<< f1.getInverseFration() << std::endl;
    std::cout<< f1.getDec() << std::endl;
    std::cout<< f1.get().first << '/' << f1.get().second << std::endl;
    return 0;
}
