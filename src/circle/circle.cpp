//
// Created by shalaga44 on 11/19/20.
//

#include "circle/circle.h"

Circle::Circle(double radius) : radius(radius) {}

double Circle::area() {
    return PI * (radius * radius);
}

double Circle::circumference() {
    return 2 * PI * radius;
}

