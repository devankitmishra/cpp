#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter a 4-digit number: ";
    cin >> number;

    int d1 = number % 10;
    int d2 = (number / 10) % 10;
    int d3 = (number / 100) % 10;
    int d4 = number / 1000;
    
    int sum = d1 + d2 + d3 + d4;

    int leftShiftResult = sum << d3;
    int rightShiftResult = sum >> d3;
    int zeroFillResult = sum >> 6; 

    cout << "Summation of digits: " << sum << endl;
    cout << "Left shift by " << d3 << ": " << leftShiftResult << endl;
    cout << "Right shift by " << d3 << ": " << rightShiftResult << endl;
    cout << "Zero fill: " << zeroFillResult << endl;

    return 0;
}
