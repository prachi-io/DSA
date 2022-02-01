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
Node *deleteNodeLast (Node *head) {
    if(head == NULL) {
        return NULL;
    }
    if(head -> next == NULL) {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr -> next -> next != NULL) {
        curr = curr -> next;
    }
    Node *p = curr -> next ;
    curr -> next = NULL;
    delete p;
    return head;
}
int main() {
    Node *head = NULL;
    head = insertEnd(head , 10);
    head = insertEnd(head , 20);
    head = insertEnd(head , 30);
    head = insertEnd(head , 40);
    head = deleteNodeLast(head);
}
