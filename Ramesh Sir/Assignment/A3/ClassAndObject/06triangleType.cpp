// Write a program to display type of triangle using sides of triangle?

#include <iostream>

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

    // Method to determine the type of triangle
    void displayTriangleType() const {
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is Equilateral." << endl;
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "The triangle is Isosceles." << endl;
        } else {
            cout << "The triangle is Scalene." << endl;
        }
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

    // Displaying the type of triangle
    triangle.displayTriangleType();

    return 0;
}
