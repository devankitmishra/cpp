#include <iostream>
#include <algorithm>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to find the difference between 3rd largest and 2nd smallest number
int findDifference(int arr[], int n) {
    std::sort(arr, arr + n);
    return arr[n - 3] - arr[1];
}

int main() {
    const int size = 10;
    int arr[size];

    // Input 10 numbers
    std::cout << "Enter 10 numbers: ";//Enter 10 different numbers
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    // Calculate the difference
    int difference = findDifference(arr, size);

    // Calculate and display factorial of the difference
    int result = factorial(difference);
    std::cout << "Factorial of the difference between 3rd largest and 2nd smallest number is: " << result << std::endl;

    return 0;
}
