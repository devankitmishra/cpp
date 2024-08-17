#include <iostream>
#include <cmath> 

using namespace std;

// Function to calculate the area of a square
int area(int side) {
    return side * side;
}

// Function to calculate the area of a rectangle
int area(int length, int width) {
    return length * width;
}

// Function to calculate the area of a triangle using Heron's formula
int area(int a, int b, int c) {
    int s = (a + b + c) / 2; // Semi-perimeter
    return sqrt(s * (s - a) * (s - b) * (s - c)); // This may not be an integer
}

// Function to calculate the perimeter of a square
int perimeter(int side) {
    return 4 * side;
}

// Function to calculate the perimeter of a rectangle
int perimeter(int length, int width) {
    return 2 * (length + width);
}

// Function to calculate the perimeter of a triangle
int perimeter(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int side, length, width, a, b, c;

    // Square
    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "Area of square: " << area(side) << endl;
    cout << "Perimeter of square: " << perimeter(side) << endl;
    cout << endl;

    // Rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << area(length, width) << endl;
    cout << "Perimeter of rectangle: " << perimeter(length, width) << endl;
    cout << endl;

    // Triangle
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;
    cout << "Area of triangle: " << area(a, b, c) << endl;
    cout << "Perimeter of triangle: " << perimeter(a, b, c) << endl;

    return 0;
}
