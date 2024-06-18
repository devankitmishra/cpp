#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l = 0.0, double w = 0.0) : length(l), width(w) {}

    // Method to set the dimensions of the rectangle
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    // Method to calculate the area of the rectangle
    double getArea() const {
        return length * width;
    }

    // Method to calculate the perimeter of the rectangle
    double getPerimeter() const {
        return 2 * (length + width);
    }

    // Method to display the dimensions, area, and perimeter
    void display() const {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
    }
};

int main() {
    Rectangle rect;
    double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Setting the dimensions of the rectangle
    rect.setDimensions(length, width);

    // Displaying the results
    cout << "Rectangle properties:" << endl;
    rect.display();

    return 0;
}
