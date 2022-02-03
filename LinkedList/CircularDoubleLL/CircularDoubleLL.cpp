#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *prev;
    Node *next;
    Node (int x){
        prev = NULL;
        next = NULL;
        data = x;
    };
};
Node *insertHead(Node *head ,int x) {
    Node *temp = new Node(x);
    if(head == NULL) {
        temp -> next = temp;
        temp -> prev = temp;
        return temp;
    }
    temp -> prev = head -> prev;
    temp -> next = head;
    head -> prev -> next= temp;
    head -> prev  = temp;
    return temp;
}
int main() {
    Node *head = NULL;
    head = insertHead(head , 10);
}