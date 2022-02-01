#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *prev;
    Node *next;
    Node (int x) {
        data = x;
        prev = NULL;
        next = NULL;
    }
};
Node *insertEnd(Node *head , int data) {
    Node *temp = new Node(data);
    if(head == NULL) {
        return temp;
    }
    Node *curr = head;
    while(curr -> next != NULL) {
        curr = curr -> next;
    }
    curr -> next = temp;
    temp -> prev = curr;
    return head;
}
Node *reverse(Node *head) {
    if(head == NULL || head -> next == NULL) {
        return head;
    }
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL) {
        prev = curr -> prev;
        curr -> prev = curr -> next;
        curr -> next = prev;
        curr = curr -> prev;
    }
    return prev -> prev;
}
int main() {
    Node *head = NULL;
    head = insertEnd(head , 10);
    head = insertEnd(head , 20);
    head = insertEnd(head , 30);
    head = insertEnd(head , 40);
    head = reverse(head);
}