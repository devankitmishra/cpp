// Write a program to implement stack and perform following using class and object?

//     a) create an stack of size 10 using array
//     b) insert 10 elements into stack using push and isfull method
//     c) find factorial of difference between largest and smallest
//     element of stack
//     d) search any user defined element in stack using peak method
//     e) delete 3 elements from stack using pop and isempty method
//     f) display remaining element of stack

#include <iostream>
#include <limits.h> // For INT_MIN and INT_MAX

using namespace std;

class Stack
{
private:
    int arr[10];
    int top;

public:
    // Constructor to initialize the stack
    Stack() : top(-1) {}

    // Method to check if the stack is full
    bool isFull()
    {
        return top == 9;
    }

    // Method to check if the stack is empty
    bool isEmpty()
    {
        return top == -1;
    }

    // Method to push an element onto the stack
    void push(int value)
    {
        if (!isFull())
        {
            arr[++top] = value;
        }
        else
        {
            cout << "Stack is full!" << endl;
        }
    }

    // Method to pop an element from the stack
    void pop()
    {
        if (!isEmpty())
        {
            --top;
        }
        else
        {
            cout << "Stack is empty!" << endl;
        }
    }

    // Method to peek the top element of the stack
    int peek()
    {
        if (!isEmpty())
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty!" << endl;
            return -1; // Return -1 if stack is empty
        }
    }

    // Method to search for an element in the stack
    bool search(int value)
    {
        for (int i = 0; i <= top; ++i)
        {
            if (arr[i] == value)
            {
                return true;
            }
        }
        return false;
    }

    // Method to display the elements of the stack
    void display()
    {
        if (!isEmpty())
        {
            for (int i = 0; i <= top; ++i)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "Stack is empty!" << endl;
        }
    }

    // Method to find the factorial of a number
    int factorial(int n)
    {
        if (n <= 1)
            return 1;
        return n * factorial(n - 1);
    }

    // Method to find the largest and smallest elements in the stack
    void findLargestSmallest(int &largest, int &smallest)
    {
        largest = INT_MIN;
        smallest = INT_MAX;
        for (int i = 0; i <= top; ++i)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
            if (arr[i] < smallest)
            {
                smallest = arr[i];
            }
        }
    }
};

int main()
{
    Stack stack;

    // Insert 10 elements into the stack using push method
    for (int i = 0; i < 10; ++i)
    {
        int value;
        cout << "Enter element " << i + 1 << ": ";
        cin >> value;
        stack.push(value);
    }

    // Find the largest and smallest elements in the stack
    int largest, smallest;
    stack.findLargestSmallest(largest, smallest);
    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;

    // Find factorial of the difference between largest and smallest elements
    int difference = largest - smallest;
    int fact = stack.factorial(difference);
    cout << "Factorial of the difference (" << difference << ") is: " << fact << endl;

    // Search for a user-defined element in the stack using the search method
    int searchValue;
    cout << "Enter element to search in stack: ";
    cin >> searchValue;
    if (stack.search(searchValue))
    {
        cout << "Element " << searchValue << " found in the stack." << endl;
    }
    else
    {
        cout << "Element " << searchValue << " not found in the stack." << endl;
    }

    // Delete 3 elements from the stack using pop method
    cout << "Deleting 3 elements from the stack..." << endl;
    for (int i = 0; i < 3; ++i)
    {
        stack.pop();
    }

    // Display the remaining elements in the stack
    cout << "Remaining elements in the stack: ";
    stack.display();

    return 0;
}
