//
// Created by shalaga44 on 11/19/20.
//

#include "ellipse/ellipse.h"



double Ellipse::area() {
    return a * b;
}

double Ellipse::contour() {
    return 0;
}

Ellipse::Ellipse(double a, double b) : a(a), b(b) {}
