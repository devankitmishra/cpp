// Write a program to sort 10 numbers in the array using following sorting algorithm and function
// overloading?
//     a) merge sort
//     b) quick sort
//     c) heap sort

#include <iostream>

using namespace std;

// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Merge Sort
void merge(int arr[], int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    int L[n1], R[n2];

    for (int i = 0; i < n1; ++i)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; ++j)
        R[j] = arr[middle + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            ++i;
        }
        else
        {
            arr[k] = R[j];
            ++j;
        }
        ++k;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        ++i;
        ++k;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        ++j;
        ++k;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int middle = left + (right - left) / 2;
    mergeSort(arr, left, middle);
    mergeSort(arr, middle + 1, right);
    merge(arr, left, middle, right);
}

// Quick Sort
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j)
    {
        if (arr[j] < pivot)
        {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Heap Sort
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; --i)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; --i)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[10];
    cout << "Enter 10 numbers to be sorted: ";
    for (int i = 0; i < 10; ++i)
    {
        cin >> arr[i];
    }

    cout << "\nOriginal Array: ";
    printArray(arr, 10);

    // Merge Sort
    int arrMerge[10];
    copy(arr, arr + 10, arrMerge);
    mergeSort(arrMerge, 0, 9);
    cout << "\nSorted Array using Merge Sort: ";
    printArray(arrMerge, 10);

    // Quick Sort
    int arrQuick[10];
    copy(arr, arr + 10, arrQuick);
    quickSort(arrQuick, 0, 9);
    cout << "\nSorted Array using Quick Sort: ";
    printArray(arrQuick, 10);

    // Heap Sort
    int arrHeap[10];
    copy(arr, arr + 10, arrHeap);
    heapSort(arrHeap, 10);
    cout << "\nSorted Array using Heap Sort: ";
    printArray(arrHeap, 10);

    return 0;
}
