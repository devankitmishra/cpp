#include <iostream>

using namespace std;

class Square {
private:
    double side;

public:
    // Constructor to initialize the side length
    Square(double s = 0.0) : side(s) {}

    // Method to set the side length of the square
    void setSide(double s) {
        side = s;
    }

    // Method to calculate the area of the square
    double getArea() const {
        return side * side;
    }

    // Method to calculate the perimeter of the square
    double getPerimeter() const {
        return 4 * side;
    }

    // Method to display the side length, area, and perimeter
    void display() const {
        cout << "Side length: " << side << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
    }
};

int main() {
    Square sq;
    double side;

    cout << "Enter the side length of the square: ";
    cin >> side;

    // Setting the side length of the square
    sq.setSide(side);

    // Displaying the results
    cout << "Square properties:" << endl;
    sq.display();

    return 0;
}
