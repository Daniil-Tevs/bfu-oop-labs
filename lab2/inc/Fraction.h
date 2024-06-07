#pragma once
#include <iostream>
#include "MathHelper.h";
// x/y
class Fraction {
private:
    int m_x;
    int m_y;
public:
    Fraction(int x, int y);

    double getDec() const;
    std::pair<int,int> get() const;

    Fraction getInverseFration() const;

    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Fraction& obj) {
        if(obj.m_x  % obj.m_y == 0)
            os << obj.m_x / obj.m_y;
        else
            os << obj.m_x << '/' << obj.m_y;
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Fraction& obj) {
        is >> obj.m_x;
        is >> obj.m_y;
        return is;
    }
};