//
// Created by shalaga44 on 11/19/20.
//

#pragma once

#include "shape/shape.h"

class Polygon : public Shape {
private:
    double p, a;
public:

    Polygon() {}

    Polygon(double numberOfSides, double raduis);

    double area() override;

    double circumference() override;

};
