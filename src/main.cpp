//
// Created by shalaga44 on 11/19/20.
//

#include "main.h"

int main() {

    Ellipse e(6, 2);
    println("Ellipse area =", e.area(), "Π");
    println("Ellipse circumference =", e.circumference(), "meters");

    println("----------------------------------------------------------");

    Circle c(3);
    println("Circle area =", c.area(), "meters²");
    println("Circle circumference =", c.circumference(), "meters");

    println("----------------------------------------------------------");

}
