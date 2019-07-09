#include<iostream>
#include<cmath>

void trigonometry(double angle, double *_sin, double *_cos){
    *_sin = std::sin(angle);
    *_cos = std::cos(angle);
}

int main() {
    double angle, _s, _c;
    std::cout << "Write angle in radians:";
    std::cin >> angle;
    trigonometry(angle, &_s, &_c);
    std::cout << "Sin value is " << _s << ".\n";
    std::cout << "Cos value is " << _c << ".\n";
}