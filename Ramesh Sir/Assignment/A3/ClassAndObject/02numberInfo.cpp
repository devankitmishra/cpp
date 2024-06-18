#include <iostream>

using namespace std;

class NumberProperties {
public:
    // Check if the number is even
    bool isEven(int num) {
        return num % 2 == 0;
    }

    // Check if the number is odd
    bool isOdd(int num) {
        return num % 2 != 0;
    }

    // Check if the number is prime
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }

    // Check if the number is positive
    bool isPositive(int num) {
        return num > 0;
    }

    // Check if the number is negative
    bool isNegative(int num) {
        return num < 0;
    }

    // Check if the number is a palindrome
    bool isPalindrome(int num) {
        int original = num;
        int reversed = 0;

        while (num != 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }

        return original == reversed;
    }
};

int main() {
    NumberProperties np;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Properties of " << num << ":" << endl;

    cout << "Even: " << (np.isEven(num) ? "Yes" : "No") << endl;
    cout << "Odd: " << (np.isOdd(num) ? "Yes" : "No") << endl;
    cout << "Prime: " << (np.isPrime(num) ? "Yes" : "No") << endl;
    cout << "Positive: " << (np.isPositive(num) ? "Yes" : "No") << endl;
    cout << "Negative: " << (np.isNegative(num) ? "Yes" : "No") << endl;
    cout << "Palindrome: " << (np.isPalindrome(num) ? "Yes" : "No") << endl;

    return 0;
}
