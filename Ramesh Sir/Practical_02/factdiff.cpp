#include <iostream>
#include <limits.h>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; ++i)
    {
        fact *= i;
    }
    return fact;
}

int ThirdLargest(int arr[], int size)
{

    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > first) //{3,4,32,53,6,7,6,45,6,5}
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third)
        {
            third = arr[i];
        }
    }

    return third;
}

int secondSmallest(int arr[], int size)
{

    int first = INT_MAX;
    int second = INT_MAX;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second)
        {
            second = arr[i];
        }
    }

    return second;
}

int main()
{
    const int size = 10;
    int arr[size];

    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    int small = secondSmallest(arr, size);
    int large = ThirdLargest(arr, size);

    if (large != INT_MIN && small != INT_MAX)
    {
        int f = factorial(large - small);
        cout << "Factorial of difference between 3rd largest and 2nd smallest number in this array is " << f << endl;
    }

    return 0;
}
