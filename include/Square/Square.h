#pragma once
#include "../../include/polygon/polygon.h"

class Square : public Polygon {
public:
    double side;

    Square(double Side) ;

    double area() override ;

    double circumference() override ;

};