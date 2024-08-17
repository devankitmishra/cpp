// e) Sum of product of consecutive odd digits of any 4 digit number? Supoose
// num=1356 then output= 5*3+ 3*1



#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter a 4-digit number: ";
    cin >> n;
    int prod = 1;
    int sum = 0;
    int p1=0,p2=0,p3=0;


    int d1 = n % 10;
    int d2 = (n / 10) % 10;
    int d3 = (n / 100) % 10;
    int d4 = n / 1000;

    (d1%2 != 0 && d2%2 != 0)?(p1 = d1*d2):0;
    (d2%2 != 0 && d3%2 != 0)?(p2 = d2*d3):0; 
    (d3%2 != 0 && d4%2 != 0)?(p3 = d3*d4):0;

    sum = p1+p2+p3;
    cout<<"Sum of product of consecutive odd digits: "<<sum;
    return 0; 
}