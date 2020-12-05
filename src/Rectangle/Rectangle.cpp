#include "../../include/Rectangle/Rectangle.h"

Rectangle::Rectangle(double Width, double Height) : Polygon(Width, Height) {
    this->width = Width;
    this->height = Height;
}

double Rectangle::area() {
    return width * height;
}

double Rectangle::circumference() {
    return width + width + height + height;
}
