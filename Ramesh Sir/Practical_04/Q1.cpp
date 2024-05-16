#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int breadth;
    int height;

public:
    // Default constructor
    Rectangle() {
        length = 10;
        breadth = 10;
        height = 10;
    }

    // Parameterized constructor
    Rectangle(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;

    }

    // Copy constructor
    Rectangle(const Rectangle &rect) {
        length = rect.length;
        breadth = rect.breadth;
        height = rect.height;
    }

    // Function to calculate area
    int area() {
        return length * breadth * height;
    }
    // Function to calculate perimeter
    int perimeter() {
        return 2*(length + breadth + height);
    }
};

int main() {
    // Using default constructor
    Rectangle rect1;
    cout << "Area using default constructor: " << rect1.area() << endl;
    cout << "Perimeter using default constructor: " << rect1.perimeter() << endl;


    // Using parameterized constructor
    Rectangle rect2(50, 10, 20);
    cout << "Area using parameterized constructor: " << rect2.area() << endl;
    cout << "Perimeter using parameterized constructor: " << rect2.perimeter() << endl;


    // Using copy constructor
    Rectangle rect3(rect2);
    cout << "Area using copy constructor: " << rect3.area() << endl;
    cout << "Perimeter using copy constructor: " << rect3.perimeter() << endl;


    return 0;
}
