//
// Created by shalaga44 on 11/19/20.
//

#include "ellipse/ellipse.h"
#include <cmath>


double Ellipse::area() {
    return a * b;
}

double Ellipse::circumference() {
    return (2 * PI) * sqrt(((a * a) + (b * b)) / 2);
}

Ellipse::Ellipse(double a, double b) : a(a), b(b) {}

Ellipse::Ellipse() {};
