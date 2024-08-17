// Write a program to implement queue and perform following using class and object?

//     a) create an queue of size 10 using array
//     b) insert 10 elements into queue using insert method
//     c) replace even numbers available in queue with nearest prime numbers

//     d) display number of odd and prime numbers.
//     e) delete 3 elements from queue using delete method
//     f) display remaining element of queue.

#include <iostream>
#include <cmath>

using namespace std;

class Queue
{
private:
    int arr[10];
    int front, rear;

public:
    // Constructor to initialize the queue
    Queue() : front(-1), rear(-1) {}

    // Method to check if the queue is full
    bool isFull()
    {
        return (rear + 1) % 10 == front;
    }

    // Method to check if the queue is empty
    bool isEmpty()
    {
        return front == -1 && rear == -1;
    }

    // Method to insert an element into the queue
    void insert(int value)
    {
        if (!isFull())
        {
            if (isEmpty())
            {
                front = rear = 0;
            }
            else
            {
                rear = (rear + 1) % 10;
            }
            arr[rear] = value;
        }
        else
        {
            cout << "Queue is full!" << endl;
        }
    }

    // Method to delete an element from the queue
    void del()
    {
        if (!isEmpty())
        {
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front = (front + 1) % 10;
            }
        }
        else
        {
            cout << "Queue is empty!" << endl;
        }
    }

    // Method to display the elements of the queue
    void display()
    {
        if (!isEmpty())
        {
            int i = front;
            cout << "Queue elements: ";
            while (i != rear)
            {
                cout << arr[i] << " ";
                i = (i + 1) % 10;
            }
            cout << arr[rear] << endl;
        }
        else
        {
            cout << "Queue is empty!" << endl;
        }
    }

    // Method to check if a number is prime
    bool isPrime(int num)
    {
        if (num <= 1)
            return false;
        for (int i = 2; i <= sqrt(num); ++i)
        {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    // Method to find the nearest prime for a given number
    int nearestPrime(int num)
    {
        int prime = num;
        while (!isPrime(prime))
        {
            prime++;
        }
        return prime;
    }

    // Method to replace even numbers with nearest prime numbers
    void replaceEvenWithPrime()
    {
        for (int i = front; i <= rear; ++i)
        {
            if (arr[i] % 2 == 0)
            {
                arr[i] = nearestPrime(arr[i]);
            }
        }
    }

    // Method to count the number of odd and prime numbers in the queue
    void countOddAndPrime(int &oddCount, int &primeCount)
    {
        oddCount = 0;
        primeCount = 0;
        for (int i = front; i <= rear; ++i)
        {
            if (arr[i] % 2 != 0)
            {
                oddCount++;
            }
            if (isPrime(arr[i]))
            {
                primeCount++;
            }
        }
    }
};

int main()
{
    Queue queue;

    // Insert 10 elements into the queue
    for (int i = 1; i <= 10; ++i)
    {
        queue.insert(i);
    }

    // Replace even numbers with nearest prime numbers
    queue.replaceEvenWithPrime();

    // Display the queue
    queue.display();

    // Count the number of odd and prime numbers
    int oddCount, primeCount;
    queue.countOddAndPrime(oddCount, primeCount);
    cout << "Number of odd numbers: " << oddCount << endl;
    cout << "Number of prime numbers: " << primeCount << endl;

    // Delete 3 elements from the queue
    for (int i = 0; i < 3; ++i)
    {
        queue.del();
    }

    // Display the remaining elements in the queue
    queue.display();

    return 0;
}
