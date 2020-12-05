#include "../../include/Square/Square.h"

Square::Square(double Side) {
    this->side = Side;
}

double Square::area() {
    return side * side;
}

double Square::circumference() {
    return side * 4;
}
