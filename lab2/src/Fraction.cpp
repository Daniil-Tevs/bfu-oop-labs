#include "../inc/Fraction.h"


Fraction::Fraction(int x, int y){
    m_x = x;
    m_y = y;
};

std::pair<int,int> Fraction::get() const{
    return std::make_pair(m_x,m_y);
}

double Fraction::getDec() const{
    return double(m_x) / double(m_y);
}

Fraction Fraction::getInverseFration() const{
    return {m_y,m_x};
}

Fraction Fraction::operator+(const Fraction& other) const {
    int nok = MathHelper::nok(m_y,other.m_y);
    int sum = m_x * (nok / m_y) + other.m_x * (nok / other.m_y);
    int nod = MathHelper::nod(sum,nok);
    return {sum/nod,nok/nod};
}
Fraction Fraction::operator-(const Fraction& other) const {
    int nok = MathHelper::nok(m_y,other.m_y);
    int sub = m_x * (nok / m_y) - other.m_x * (nok / other.m_y);
    int nod = MathHelper::nod(sub,nok);
    return {sub,nok/nod};
}
Fraction Fraction::operator*(const Fraction& other) const {
    int result_x = m_x * other.m_x;
    int result_y = m_y * other.m_y;
    int nod = MathHelper::nod(result_x,result_y);
    return {result_x / nod, result_y / nod};
}
Fraction Fraction::operator/(const Fraction& other) const {
    auto inverse = other.getInverseFration();
    int result_x = m_x * inverse.m_x;
    int result_y = m_y * inverse.m_y;
    int nod = MathHelper::nod(result_x,result_y);
    return {result_x / nod, result_y / nod};
}