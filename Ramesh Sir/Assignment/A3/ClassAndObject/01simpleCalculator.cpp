#include <iostream>
#include <cmath>

using namespace std;

class Calculator {
public:
    // Basic arithmetic operations
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
    double divide(double a, double b) { 
        if (b == 0) {
            cerr << "Error: Division by zero!" << endl;
            return NAN;
        }
        return a / b; 
    }
    int multiply(int a, int b) { return a * b; }
    int modulus(int a, int b) { return a % b; }

    // Factorial
    int factorial(int n) {
        if (n < 0) return -1; // Return -1 for negative numbers
        if (n == 0 || n == 1) return 1;
        return n * factorial(n - 1);
    }

    // Greatest common divisor
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    // Least common multiple
    int lcm(int a, int b) {
        return (a / gcd(a, b)) * b;
    }

    // Power
    double power(double base, double exponent) {
        return pow(base, exponent);
    }

    // Square root
    double squareRoot(double x) {
        if (x < 0) {
            cerr << "Error: Square root of negative number!" << endl;
            return NAN;
        }
        return sqrt(x);
    }

    // Cube root
    double cubeRoot(double x) {
        return cbrt(x);
    }
};

int main() {
    Calculator calc;

    // Demonstration
    cout << "Addition: 3 + 4 = " << calc.add(3, 4) << endl;
    cout << "Subtraction: 7 - 2 = " << calc.subtract(7, 2) << endl;
    cout << "Division: 10 / 2 = " << calc.divide(10, 2) << endl;
    cout << "Multiplication: 5 * 3 = " << calc.multiply(5, 3) << endl;
    cout << "Modulus: 10 % 3 = " << calc.modulus(10, 3) << endl;

    int num = 5;
    cout << "Factorial of " << num << " = " << calc.factorial(num) << endl;

    int a = 56, b = 98;
    cout << "GCD of " << a << " and " << b << " = " << calc.gcd(a, b) << endl;
    cout << "LCM of " << a << " and " << b << " = " << calc.lcm(a, b) << endl;

    double base = 2.0, exponent = 3.0;
    cout << "Power: " << base << "^" << exponent << " = " << calc.power(base, exponent) << endl;

    double value = 16.0;
    cout << "Square root of " << value << " = " << calc.squareRoot(value) << endl;

    value = 27.0;
    cout << "Cube root of " << value << " = " << calc.cubeRoot(value) << endl;

    return 0;
}
