// Write a program to find area and perimeter of circle,square,rectangle and triangle using function
// overloading?

#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

// Function to calculate the area of a circle
double calculateArea(double radius)
{
    return PI * radius * radius;
}

// Function to calculate the perimeter of a circle
double calculatePerimeter(double radius)
{
    return 2 * PI * radius;
}

// Function to calculate the area of a square
double calculateArea(double sideLength)
{
    return sideLength * sideLength;
}

// Function to calculate the perimeter of a square
double calculatePerimeter(double sideLength)
{
    return 4 * sideLength;
}

// Function to calculate the area of a rectangle
double calculateArea(double length, double width)
{
    return length * width;
}

// Function to calculate the perimeter of a rectangle
double calculatePerimeter(double length, double width)
{
    return 2 * (length + width);
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height)
{
    return 0.5 * base * height;
}

// Function to calculate the perimeter of a triangle
double calculatePerimeter(double side1, double side2, double side3)
{
    return side1 + side2 + side3;
}

int main()
{
    // Circle
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << calculateArea(radius) << endl;
    cout << "Perimeter of the circle: " << calculatePerimeter(radius) << endl;

    // Square
    double sideLengthSquare;
    cout << "\nEnter the side length of the square: ";
    cin >> sideLengthSquare;
    cout << "Area of the square: " << calculateArea(sideLengthSquare) << endl;
    cout << "Perimeter of the square: " << calculatePerimeter(sideLengthSquare) << endl;

    // Rectangle
    double lengthRectangle, widthRectangle;
    cout << "\nEnter the length and width of the rectangle: ";
    cin >> lengthRectangle >> widthRectangle;
    cout << "Area of the rectangle: " << calculateArea(lengthRectangle, widthRectangle) << endl;
    cout << "Perimeter of the rectangle: " << calculatePerimeter(lengthRectangle, widthRectangle) << endl;

    // Triangle
    double baseTriangle, heightTriangle, side1Triangle, side2Triangle, side3Triangle;
    cout << "\nEnter the base and height of the triangle: ";
    cin >> baseTriangle >> heightTriangle;
    cout << "Area of the triangle: " << calculateArea(baseTriangle, heightTriangle) << endl;
    cout << "Enter the three sides of the triangle: ";
    cin >> side1Triangle >> side2Triangle >> side3Triangle;
    cout << "Perimeter of the triangle: " << calculatePerimeter(side1Triangle, side2Triangle, side3Triangle) << endl;

    return 0;
}
