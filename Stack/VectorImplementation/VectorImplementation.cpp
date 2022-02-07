#include<iostream>
#include<vector>
using namespace std;
struct MyStack {
    vector <int> v;
    void push(int x) {
        v.push_back(x);
    }
    int pop() {
        if(v.size() == 0) {
            cout << "Cant pop anything so returning int min value  ";
            return INT_MIN;
        }
        else {
            int res = v.back();
            v.pop_back();
            return res;
        }
    }
    int size() {
        return v.size();
    }
    bool isEmpty() {
        return v.empty();
    }
    int peek() {
        if(v.size() == 0) {
            cout << "Stack is empty henec returning int min value  ";
            return INT_MIN;
        }
        else {
            return v.back();
        }
    }
};
int main() {
    MyStack s;
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