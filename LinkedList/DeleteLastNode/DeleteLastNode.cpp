#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
Node *insertAtEnd(Node *head , int x) {
    Node *temp = new Node(x);
    if(head == NULL) {
        return temp;
    }
    else {
        Node *curr = head;
        while(curr -> next != NULL) {
            curr = curr -> next;
        }
        curr -> next = temp;
        return head;
    }
}
Node *deleteLast(Node *head) {
    if(head == NULL ) {
        return NULL;
    }
    if(head -> next == NULL) {
        delete head;
        return NULL;
    }
    else {
        Node *curr = head;
        while(curr -> next -> next != NULL) {
            curr = curr -> next;
        }
        delete(curr -> next);
        curr -> next = NULL;
        return head;
    }
}
int main() {
    Node *head = NULL;
    head = insertAtEnd(head , 10);
    head = insertAtEnd(head , 20);
    head = insertAtEnd(head , 30);
    head = insertAtEnd(head , 40);
    head = deleteLast(head);
}

// Theta n