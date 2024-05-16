// Difference between Sum of product of consecutive even digits except 2
// and 6 and Sum of product of consecutive odd digits except 3 and 7 of any 4 digit
// number

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a 4-digit number: ";
    cin >> n;
    int diff;
    int esum = 0;
    int osum = 0;
    int ep1 = 0, ep2 = 0, ep3 = 0;
    int op1 = 0, op2 = 0, op3 = 0;

    int d1 = n % 10;
    int d2 = (n / 10) % 10;
    int d3 = (n / 100) % 10;
    int d4 = n / 1000;

    /*-----------------------------sum of even part----------------------------------*/

    if (d1 % 2 == 0 && d2 % 2 == 0)
    {
        if (d1 != 2 && d1 != 6 && d2 != 2 && d2 != 6)
        {
            ep1 = d1 * d2;
        }
    }
    if (d2 % 2 == 0 && d3 % 2 == 0)
    {
        if (d2 != 2 && d2 != 6 && d3 != 2 && d3 != 6)
        {
            ep2 = d2 * d3;
        }
    }
    if (d3 % 2 == 0 && d4 % 2 == 0)
    {
        if (d3 != 2 && d3 != 6 && d4 != 2 && d4 != 6)
        {
            ep3 = d3 * d4;
        }
    }

    esum = ep1 + ep2 + ep3;

    /*------------------------------sum of odd part----------------------------------*/

    if (d1 % 2 != 0 && d2 % 2 != 0)
    {
        if (d1 != 3 && d1 != 7 && d2 != 3 && d2 != 7)
        {
            op1 = d1 * d2;
        }
    }
    if (d2 % 2 != 0 && d3 % 2 != 0)
    {
        if (d2 != 3 && d2 != 7 && d3 != 3 && d3 != 7)
        {
            op2 = d2 * d3;
        }
    }
    if (d3 % 2 != 0 && d4 % 2 != 0)
    {
        if (d3 != 3 && d3 != 7 && d4 != 3 && d4 != 7)
        {
            op3 = d3 * d4;
        }
    }

    osum = op1 + op2 + op3;

    /*-----------------------------------the difference-----------------------------------*/

    if (esum > osum)
    {
        diff = esum - osum;
    }
    else
    {
        diff = osum - esum;
    }

    cout << "Difference between sum of product of consecutive odd digits: " << diff << endl;
    return 0;
}