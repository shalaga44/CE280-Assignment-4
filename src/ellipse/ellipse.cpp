//
// Created by shalaga44 on 11/19/20.
//

#include "ellipse/ellipse.h"
#include <math.h>


double Ellipse::area() {
    return a * b;
}

double Ellipse::circumference() {
    const double PI = 3.141592654;

    return (2 * PI) * sqrt(((a * a) + (b * b)) / 2);
}

Ellipse::Ellipse(double a, double b) : a(a), b(b) {}
