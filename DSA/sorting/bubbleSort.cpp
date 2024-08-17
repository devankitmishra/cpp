#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n) {
    for (int counter = 1; counter < n; counter++) {
        for (int i = 0; i < n - counter; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr({1, 5, 3, 7, 2});
    int n = arr.size();

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
