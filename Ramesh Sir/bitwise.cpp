// find bitwise and , or , and xor of 2 nd and 4 th digit of any 4 digit number?

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a 4 digit number"<<endl;
    cin>>n;
    int n2 = ((n/10)%10);
    int n4 = n/1000;

    int AND = n2 & n4;
    cout<<"AND is: "<<AND<<endl;
    int OR = n2 || n4;
    cout<<"OR is: "<<OR<<endl;
    int EXOR = n2 ^ n4;
    cout<<"EXOR is: "<<EXOR<<endl;
}