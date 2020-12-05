#include "../../include/Triangle/Triangle.h"
#include <cmath>
Triangle::Triangle(double a, double b, double c, double Base, double Height) {
    this->base = Base;
    this->height = Height;
    this->a = a;
    this->b = b;
    this->c = c;
}

double Triangle::area() {
    return (1.0 / 2.0) * base * height;
}

double Triangle::circumference() {
    float p = (a + b + c) / 2;
    float At = sqrt(p * (p - a) * (p - b) * (p - c));
    float A = 3.14 * pow(((a * b * c) / (4 * At)), 2);
    return A;
}
