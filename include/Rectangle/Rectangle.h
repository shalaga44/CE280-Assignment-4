#pragma once

#include "../../include/polygon/polygon.h"

class Rectangle : public Polygon {
public:
    double width, height;

    Rectangle(double Width, double Height);
    double area() override ;

    double circumference() override ;
};