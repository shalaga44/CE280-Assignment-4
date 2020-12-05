//
// Created by shalaga44 on 11/19/20.
//

#include "../../include/polygon/polygon.h"

Polygon::Polygon(double numberOfSides, double raduis) {
    this->p = numberOfSides;
    this->a = raduis;
}

double Polygon::area() {
    return (1.0 / 2.0) * (p * a);
}

double Polygon::circumference() {
    return a * p;
}
