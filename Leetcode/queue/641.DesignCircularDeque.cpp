class MyCircularDeque {
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;

public:
    MyCircularDeque(int n) {
        capacity = n;
        size = 0;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }
    
    bool insertFront(int x) {
        ios::sync_with_stdio(0);
        if (isFull()) {
            return false;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else if (front == 0) {
            front = capacity - 1;
        } else {
            front--;
        }
        arr[front] = x;
        size++;
        return true;
    }
    
    bool insertLast(int x) {
        ios::sync_with_stdio(0);
        if (isFull()) {
            return false;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else if (rear == capacity - 1) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = x;
        size++;
        return true;
    }
    
    bool deleteFront() {
        ios::sync_with_stdio(0);
        if (isEmpty()) {
            return false;
        }
        
        arr[front] = -1;
        
        if (front == rear) { // only one element was present
            front = rear = -1;
        } else if (front == capacity - 1) {
            front = 0;
        } else {
            front++;
        }
        size--;
        return true;
    }
    
    bool deleteLast() {
        ios::sync_with_stdio(0);
        if (isEmpty()) {
            return false;
        }
        
        arr[rear] = -1;
        
        if (front == rear) { // only one element was present
            front = rear = -1;
        } else if (rear == 0) {
            rear = capacity - 1;
        } else {
            rear--;
        }
        size--;
        return true;
    }
    
    int getFront() {
        ios::sync_with_stdio(0);
        if (isEmpty()) {
            return -1;
        }
        return arr[front];
    }
    
    int getRear() {
        ios::sync_with_stdio(0);
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
};