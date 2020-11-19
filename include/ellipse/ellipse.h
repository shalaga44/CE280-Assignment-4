//
// Created by shalaga44 on 11/19/20.
//

#include "shape/shape.h"

#pragma once

class Ellipse : public Shape {
protected:
    // a is the distance from the center to a (vertex)
    double a{};

    // b is the distance from the center to a (co-vertex)
    double b{};
public:

    const double PI = 3.141592654;

    Ellipse(double a, double b);

    Ellipse();


    // area = Πab
    double area() override;

    double circumference() override;
};