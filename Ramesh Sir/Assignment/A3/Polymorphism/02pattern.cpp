// Write program to display following pattern using function overloading?
// Odd number based pyramid starts from value n received from user

//         n+1
//       n+3 n+6
//    n+5 n+10 n+15
//  n+7 n+14 n+21 n+28
// even number based pyramid starts from value n received from user

//       n+2
//     n+4 n+6
//   n+6 n+10 n+14
// n+8 n+14 n+20 n+26
// user defined character suppose entered character is k

//    k
//   k k
//  k k k
// k k k k

#include <iostream>

using namespace std;

// Function to display the odd number based pyramid
void displayPattern(int n)
{
    int num = n + 1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; ++j)
        {
            cout << num << " ";
            num += 2;
        }
        cout << endl;
    }
}

// Function to display the even number based pyramid
void displayPattern(int n, char ch)
{
    int num = n + 2;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; ++j)
        {
            cout << num << " ";
            num += 2;
        }
        cout << endl;
    }
}

// Function to display the user-defined character pattern
void displayPattern(char ch, int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; ++j)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    char ch;

    cout << "Enter the value of n: ";
    cin >> n;

    // Displaying the odd number based pyramid
    cout << "\nOdd number based pyramid:" << endl;
    displayPattern(n);

    // Displaying the even number based pyramid
    cout << "\nEven number based pyramid:" << endl;
    displayPattern(n, ch);

    // Displaying the user-defined character pattern
    cout << "\nUser-defined character pattern:" << endl;
    cout << "Enter the character: ";
    cin >> ch;
    displayPattern(ch, n);

    return 0;
}
