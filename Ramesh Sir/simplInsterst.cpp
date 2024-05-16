#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int p, t;
   float r, SI, CI;
   cout<<"Enter the Principal, Rate and Time"<<endl;
   cin>>p>>r>>t;

   SI = p * r * t / 100;
   cout<<"simple interest is :"<<SI<<endl;
}