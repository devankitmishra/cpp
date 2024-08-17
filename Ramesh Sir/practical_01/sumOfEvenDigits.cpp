// Sum of all even digits of any 4 digit number

#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter a 4-digit number: ";
    cin >> number;
    int sum = 0;

    int d1 = number % 10;
    int d2 = (number / 10) % 10;
    int d3 = (number / 100) % 10;
    int d4 = number / 1000;

    (d1%2 == 0)?(sum+=d1):0;
    (d2%2 == 0)?(sum+=d2):0;
    (d3%2 == 0)?(sum+=d3):0;
    (d4%2 == 0)?(sum+=d4):0;
    
    cout<<"Sum of even digits of the number "<<number<<" is "<<sum;
}