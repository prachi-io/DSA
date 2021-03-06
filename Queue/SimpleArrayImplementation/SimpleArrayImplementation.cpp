struct Queue {
    int size , cap;
    int *arr;
    Queue(int c) {
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    bool isFull() {
        return size == cap;
    }
    bool isEmpty() {
        return size == 0;
    }
    void deque() {
        if(isEmpty())
            return ;
        for(int i = 0 ; i < size - 1 ; i++) {
            arr[i] = arr[i+1];
        }
        size--;
    }
    void enque(int x) {
        if(isFull())
            return ;
        arr[size] = x;
        size++;
    }
    int getFront() {
        if(isEmpty())
            return -1;
        else
            return 0;
    }
    int getRear() {
        if(isEmpty())
            return -1;
        else
            return size - 1;
    }
};
