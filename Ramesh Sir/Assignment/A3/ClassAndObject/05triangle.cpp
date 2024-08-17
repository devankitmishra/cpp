// Write a program to find area and perimeter of triangle having 3 sides using class and object?

#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    // Constructor to initialize the sides of the triangle
    Triangle(double s1 = 0.0, double s2 = 0.0, double s3 = 0.0) : side1(s1), side2(s2), side3(s3) {}

    // Method to set the sides of the triangle
    void setSides(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Method to calculate the perimeter of the triangle
    double getPerimeter() const {
        return side1 + side2 + side3;
    }

    // Method to calculate the area of the triangle using Heron's formula
    double getArea() const {
        double s = getPerimeter() / 2; // semi-perimeter
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    // Method to display the sides, area, and perimeter
    void display() const {
        cout << "Side 1: " << side1 << endl;
        cout << "Side 2: " << side2 << endl;
        cout << "Side 3: " << side3 << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
        cout << "Area: " << getArea() << endl;
    }
};

int main() {
    Triangle triangle;
    double side1, side2, side3;

    cout << "Enter the lengths of the three sides of the triangle:" << endl;
    cout << "Side 1: ";
    cin >> side1;
    cout << "Side 2: ";
    cin >> side2;
    cout << "Side 3: ";
    cin >> side3;

    // Setting the sides of the triangle
    triangle.setSides(side1, side2, side3);

    // Displaying the results
    cout << "Triangle properties:" << endl;
    triangle.display();

    return 0;
}
