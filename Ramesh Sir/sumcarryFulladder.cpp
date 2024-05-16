/* Full Adder Circuit */
#include <iostream>
using namespace std;
int main() 
{
    int num1, num2;
    int sum, carry1, carry2;
    cout << "Enter the first number: "<<endl;
    cin >> num1;
    cout << "Enter the second number: "<<endl;
    cin >> num2;
    sum = num1 ^ num2;  
    carry1 = num1 & num2;

    sum = sum ^ carry1;   
    carry2 = (num1 | num2) & carry1; 

    cout << "Sum using Full Adder: " << sum <<endl;
    cout << "Carry using Full Adder: " << carry2 <<endl;

    return 0;
}