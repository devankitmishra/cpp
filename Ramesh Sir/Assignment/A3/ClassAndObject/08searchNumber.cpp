// Write a program to search for a user defined number in array of 20 numbers using linear search
// and binary search using class and object? Allow user to choose searching method.

#include <iostream>
#include <algorithm>

using namespace std;

class SearchArray {
private:
    int arr[20];

public:
    // Method to input the array elements
    void inputArray() {
        cout << "Enter 20 numbers for the array:" << endl;
        for (int i = 0; i < 20; ++i) {
            cout << "Element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    // Method to perform linear search
    int linearSearch(int target) {
        for (int i = 0; i < 20; ++i) {
            if (arr[i] == target) {
                return i; // Return the index if found
            }
        }
        return -1; // Return -1 if not found
    }

    // Method to perform binary search (requires sorted array)
    int binarySearch(int target) {
        // Sort the array first
        sort(arr, arr + 20);
        int left = 0;
        int right = 19;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target) {
                return mid; // Return the index if found
            }
            if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1; // Return -1 if not found
    }

    // Method to display the array
    void displayArray() {
        for (int i = 0; i < 20; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    SearchArray searchArray;
    searchArray.inputArray();

    int choice;
    int target;

    cout << "Enter the number to search: ";
    cin >> target;

    cout << "Choose the search method:" << endl;
    cout << "1. Linear Search" << endl;
    cout << "2. Binary Search" << endl;
    cin >> choice;

    int result = -1;
    if (choice == 1) {
        result = searchArray.linearSearch(target);
    } else if (choice == 2) {
        result = searchArray.binarySearch(target);
    } else {
        cout << "Invalid choice!" << endl;
        return 1;
    }

    if (result != -1) {
        cout << "Number found at index " << result << "." << endl;
    } else {
        cout << "Number not found in the array." << endl;
    }

    return 0;
}
