// #include<iostream>
// using namespace std;
// int main(){
//     int n,sum=0,product=1;
//     cout<<"Enter a number: ";
//     cin>>n;
//     while (n!=0)
//     {
//         int lastDigit = n%10;
//         sum = sum+lastDigit;
//         product = product*lastDigit;
//         n=n/10;
//     }
//     cout<<"Subtraction of sum and product is: "<<product-sum<<endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     int y = 0;
//     int digit;
//     while (x != 0)
//     {
//         digit = x % 10;
//         if ((y > INT_MAX / 10) || (y < INT_MIN / 10))
//         {
//             return 0;
//             printf("0");
//         }
//         y = y * 10 + digit;
//         x /= 10;
//     }
//     return y;
//     cout<<"Reversed Number"<<y<<endl;
// }