// Sum of product of consecutive digits of any 4 digit number? Supoose num=1234 then output= 4*3+3*2+2*1

#include<iostream>
using namespace std;
int main ()
{   

    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    int sumOfProduct = (num/1000) * ((num/100)%10) + ((num/100)%10) * ((num/10)%10) + ((num/10)%10) * (num%10);
    cout<<""<<sumOfProduct;
}
