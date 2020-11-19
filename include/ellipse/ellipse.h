//
// Created by shalaga44 on 11/19/20.
//

#include "shape/shape.h"

#pragma once

class Ellipse : public Shape {
public:
    // a is the distance from the center to a (vertex)
    double a;

    Ellipse(double a, double b);

    // b is the distance from the center to a (co-vertex)
    double b;

    // area = Πab
    double area() override;

    double contour() override;
};