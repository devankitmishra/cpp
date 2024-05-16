// Write a C++ program to find sum of product of corresponding even digits of
// first any digit number and corresponding odd digit of any 4 digit number Such as
// n=1234 m=4567 output=4*7+2*5


#include<iostream>
using namespace std;
int main ()
{
    int n,m;
    cout << "Enter a 4-digit number: ";
    cin >> n;
    cout << "Enter another 4-digit number: ";
    cin >> m;
    int sum = 0;
    int p1=0,p2=0,p3=0,p4=0;


    int nd1 = n % 10;
    int nd2 = (n / 10) % 10;
    int nd3 = (n / 100) % 10;
    int nd4 = n / 1000;

    int md1 = m % 10;
    int md2 = (m / 10) % 10;
    int md3 = (m / 100) % 10;
    int md4 = m / 1000;

    (nd1 %2 == 0 && md1 %2 != 0)?(p1 = nd1*md1):0;
    (nd2 %2 == 0 && md2 %2 != 0)?(p2 = nd2*md2):0;
    (nd3 %2 == 0 && md3 %2 != 0)?(p3 = nd3*md3):0;
    (nd4 %2 == 0 && md4 %2 != 0)?(p4 = nd4*md4):0;

    sum = p1+p2+p3+p4;
    cout<<"Sum of product of corresponding even digits and corresponding odd digits: "<<sum<<endl;
    return 0;
}