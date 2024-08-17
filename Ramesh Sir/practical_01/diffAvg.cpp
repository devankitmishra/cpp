// Difference between average of all even digits except divisible by 4 and
// avearge of all odd digits except divisble by 3 of any 4 digit number

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a 4-digit number: ";
    cin >> n;
    int esum = 0;
    int ecnt = 0;
    int osum = 0;
    int ocnt = 0;
    int diff;

    int d1 = n % 10;
    int d2 = (n / 10) % 10;
    int d3 = (n / 100) % 10;
    int d4 = n / 1000;

    (d1 % 2 == 0 && d1 % 4 != 0) ? (esum += d1,ecnt++):0;
    (d2 % 2 == 0 && d2 % 4 != 0) ? (esum += d2,ecnt++):0;
    (d3 % 2 == 0 && d3 % 4 != 0) ? (esum += d3,ecnt++):0; 
    (d4 % 2 == 0 && d4 % 4 != 0) ? (esum += d4,ecnt++):0;
    (d1 % 2 != 0 && d1 % 3 != 0) ? (osum += d1,ocnt++):0;
    (d2 % 2 != 0 && d2 % 3 != 0) ? (osum += d2,ocnt++):0;
    (d3 % 2 != 0 && d3 % 3 != 0) ? (osum += d3,ocnt++):0;
    (d4 % 2 != 0 && d4 % 3 != 0) ? (osum += d4,ocnt++):0;

    int eavg = esum / ecnt;
    int oavg = osum / ocnt;

    (eavg > oavg) ? (diff = eavg - oavg):(diff = oavg - eavg);

    cout << "The Difference is: " << diff << endl;
    return 0;
}