#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

bool isPalindrome(int num) {
    int reversed = 0, original = num;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

void countAndAverage(int lower, int upper, int& total, int& count) {
    total = 0;
    count = 0;
    for (int i = lower; i <= upper; ++i) {
        if (isPrime(i) && isPalindrome(i)) {
            total += i;
            count++;
        }
    }
}

int main() {
    int lower = 10, upper = 1000;
    int totalPrimePalindrome = 0, countPrimePalindrome = 0;

    countAndAverage(lower, upper, totalPrimePalindrome, countPrimePalindrome);

    if (countPrimePalindrome > 0) {
        double average = static_cast<double>(totalPrimePalindrome) / countPrimePalindrome;
        cout << "Total number of prime and palindrome numbers between " << lower << " and " << upper << ": " << countPrimePalindrome << endl;
        cout << "Average of prime and palindrome numbers: " << average << endl;
    } else {
        cout << "No prime and palindrome numbers found between " << lower << " and " << upper << endl;
    }

    return 0;
}
