/* Write a C++ program to find sum and carry of any 2 numbers following
approach and bitwise operator ?
a) Half Adder Circuit */
#include <iostream>
using namespace std;
int main() 
{
    int num1, num2;
    cout << "Enter the first number: "<<endl;
    cin >> num1;
    cout << "Enter the second number: "<<endl;
    cin >> num2;
    int sum = num1 ^ num2;
    int carry = num1 & num2; 

    cout << "Sum using Half Adder: " << sum <<endl;
    cout << "Carry using Half Adder: " << carry <<endl;
    return 0;
}