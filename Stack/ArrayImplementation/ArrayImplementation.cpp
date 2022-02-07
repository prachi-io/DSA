#include<iostream>
using namespace std;
struct MyStack {
    int cap;
    int top;
    int *arr;
    MyStack(int c) {
        top = -1;
        cap = c;
        arr = new int[cap];
    }
    void push(int x) {
        if(top == cap -1) {
            cout << "Cant push element" << endl;
        }
        else {
            top++;
            arr[top] = x;
        }
    }
    int pop() {
        if(top == -1) {
            cout << "Cant pop anything so returning int min value  ";
            return INT_MIN;
        }
        else {
            int res = arr[top];
            top--;
            return res;
        }
    }
    int peek() {
        if(top == -1) {
            cout << "Stack is empty henec returning int min value  ";
            return INT_MIN;
        }
        else {
            return arr[top];
        }
    }
    int size() {
        return top + 1;
    }
    bool isEmpty() {
        return (top == -1);
    }
};
int main() {
    MyStack s(5);
    cout << s.pop() << endl;
    cout << s.peek() << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    return 0;
}