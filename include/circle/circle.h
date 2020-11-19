//
// Created by shalaga44 on 11/19/20.
//

#include "ellipse/ellipse.h"

#pragma once

class Circle : public Ellipse {
public:
    double radius;

    double area() override;

    double circumference() override;

    Circle(double radius);
};