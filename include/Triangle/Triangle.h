#pragma once

#include "../../include/polygon/polygon.h"


class Triangle : public Polygon {
private:
    double base, height;
    double a, b, c;

public:

    Triangle(double a, double b, double c, double Base, double Height);

    double area() override;

    double circumference() override;

};

