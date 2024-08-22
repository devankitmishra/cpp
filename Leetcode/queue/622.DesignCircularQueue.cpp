class MyCircularQueue {
    int* arr;
    int front;
    int rear;
    int size;
    int count; // to track the number of elements

public:
    MyCircularQueue(int k) {
        ios::sync_with_stdio(0);
        size = k;
        arr = new int[size];
        front = rear = 0;
        count = 0;
    }

    bool enQueue(int value) {
        ios::sync_with_stdio(0);
        if (isFull()) {
            return false;
        }
        arr[rear] = value;
        rear = (rear + 1) % size;
        count++;
        return true;
    }

    bool deQueue() {
        ios::sync_with_stdio(0);
        if (isEmpty()) {
            return false;
        }
        front = (front + 1) % size;
        count--;
        return true;
    }

    int Front() {
        ios::sync_with_stdio(0);
        if (isEmpty()) {
            return -1;
        }
        return arr[front];
    }

    int Rear() {
        ios::sync_with_stdio(0);
        if (isEmpty()) {
            return -1;
        }
        return arr[(rear - 1 + size) % size];
    }

    bool isEmpty() { return count == 0; }

    bool isFull() { return count == size; }

    ~MyCircularQueue() { delete[] arr; }
};