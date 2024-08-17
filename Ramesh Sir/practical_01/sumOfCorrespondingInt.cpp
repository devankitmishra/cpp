// find sum of product of corresponding digits of two any 4 digit
// number Such as n=1234 m=7896 output=6*4+9*3+8*2+7*1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a 4 digit number: ";
    cin>>n;

    int m;
    cout<<"Enter another 4 digit number: ";
    cin>>m;

    int spcd = (n%10)*(m%10) + ((n/10)%10) * ((m/10)%10) + ((n/100)%10) * ((m/100)%10) + (n/1000) * (m/1000);
    cout<<"Sum of product of corresponding digits is: "<<spcd<<endl;
    return 0;
}