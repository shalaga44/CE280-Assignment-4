#include "main.h"
int main() {

    Ellipse myEllips(6, 2);
    println( "Ellipse area =" , myEllips.area() , "Π" );
    println( "Ellipse circumference =" , myEllips.circumference() , "meters" );

    Circle myCircle(3);
    println( "Circle area =" , myCircle.area() , "meters²");
    println( "Circle circumference =" , myCircle.circumference() , "meters");

    Polygon myPolygon(10, 6);
    println( "Polygon area =" , myPolygon.area() , "meters²");
    println( "Polygon circumference =" , myPolygon.circumference() , "meters");

    Triangle myTriangle(10, 20, 30, 20, 50);
    println( "Triangle area =" , myTriangle.area() , "meters²");
    println( "Triangle circumference =" , myTriangle.circumference() , "meters");

    Rectangle myRectangle(10, 20);
    println( "Rectangle area =" , myRectangle.area() , "meters²");
    println( "Rectangle circumference =" , myRectangle.circumference() , "meters");

    Square mySquare(10);
    println( "Square area =" , mySquare.area() , "meters²");
    println( "Square circumference =" , mySquare.circumference() , "meters");


}
