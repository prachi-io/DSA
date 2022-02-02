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
void insertAtAny(Node *head ,int pos ,  int data) {
    Node *temp = new Node(data);
    Node *curr = head;
    int i = 0;
    if (head == NULL) {
        head = temp;
    }
    while(i < pos) {
        curr = curr -> next;
        i++;
    }
    temp -> next = curr -> next;
    if (curr -> next != NULL) {
        curr -> next -> prev = temp;
    }
    temp -> prev = curr;
    curr -> next = temp;
}
void printList(Node *head) {
    Node *curr = head;
    while(curr != NULL) {
        cout << (curr -> data) << " ";
        curr = curr -> next;
    }
}
int main() {
    Node *head = NULL;
    head = insertEnd(head , 2);
    head = insertEnd(head , 4);
    head = insertEnd(head , 5);
    int pos = 2;
    int x = 6;
    insertAtAny(head , pos , x);
    printList(head);
}