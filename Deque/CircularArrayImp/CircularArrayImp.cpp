struct Deque {
    int *arr;
    int front , cap , size;
    Deque(int c) {
        arr = new int[c];
        cap = c;
        size = 0;
        front = 0;
    }
    bool isFull() {
        return size == cap;
    }
    bool isEmpty() {
        return size == 0;
    }
    void deleteFront() {
        if(isEmpty())
            return;
        front = (front + 1) % cap;
    }
    void insertRear(int x) {
        if(isFull())
            return;
        int new_rear = (front + size) % cap;
        arr[new_rear] = x;
        size++;
    }
    int getFront() {
        if(isEmpty())
            return -1;
        else
            return front;
    }
    void insertFront(int x) {
        if(isFull())
            return;
        front = (front - 1 + cap) % cap;
        arr[front] = x;
        size++;
    }
    void deleteRear() {
        if(isEmpty()) return;
        size--;
    }
    int getRear() {
        if(isEmpty()) return -1;
        else {
            return (front + size - 1) % cap;
        }
    }
};