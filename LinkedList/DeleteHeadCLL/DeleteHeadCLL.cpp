/// My solution
/*
#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node (int x) {
        data = x;
        next = NULL;
    }
};
Node *DeleteHead(Node *head) {
    Node *curr = head;
    Node *temp = head -> next;
    while(curr -> next  != head) {
        curr = curr -> next;
    }
    curr -> next = temp;
    return temp;
}
int main() {
    Node *head = new Node(10);
    head -> next = new Node(5);
    head -> next -> next = new Node(20);
    head -> next -> next -> next = new Node(15);
    head -> next -> next -> next -> next = head;
    head = DeleteHead(head);
    return 0;
}*/
