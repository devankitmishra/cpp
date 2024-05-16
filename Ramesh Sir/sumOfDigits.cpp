/*  Sum of all digits of any 4 digit numbers*/
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number: "<<endl;
    cin>>number;
    int sum;
    sum = number/1000 + (number/100)%10 + (number/10)%10 + number%10; 
    cout<<"The sum of all digits of the number"<<sum<<endl;
}