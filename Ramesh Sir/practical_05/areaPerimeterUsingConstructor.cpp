#include <iostream>
using namespace std;

// RectangularBox class
class RectangularBox {
public:
    double width;
    double height;

public:
    // Default constructor
    RectangularBox() {
    cout<<"called"<<endl;
    width=1.0;
    height=1.0; 
    }

    // Parameterized constructor
    RectangularBox(double w, double h) {

     this -> width = w;
     this -> height = h; 
     }

    // Copy constructor
    RectangularBox(const RectangularBox& box) {
        width = box.width;
        height = box.height;
    }

    // Method to calculate the area
    double area() const {
        return width * height;
    }

    // Method to calculate the perimeter
    double perimeter() const {
        return 2 * (width + height);
    }

    // Method to display the dimensions, area, and perimeter
    void display() const {
        cout << "Width: " << width << ", Height: " << height << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main() {
    // Using default constructor
    RectangularBox box1;
    cout << "Box1 (default constructor):" << endl;
    box1.display();
    cout << endl;

    // Using parameterized constructor
    RectangularBox box2(5.0, 3.0);
    cout << "Box2 (parameterized constructor):" << endl;
    box2.display();
    cout << endl;

    // Using copy constructor
    RectangularBox box3(box2);
    cout << "Box3 (copy constructor):" << endl;
    box3.display();
    cout << endl;

    return 0;
}


