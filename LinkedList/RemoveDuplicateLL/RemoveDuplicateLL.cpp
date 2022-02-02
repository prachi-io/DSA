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
void printList(Node *head) {
    Node *curr = head;
    while(curr != NULL) {
        cout << (curr -> data) << " ";
        curr = curr -> next;
    }
}
Node *removeDuplicates(Node *head)
{
    // your code goes here
    Node *curr = head;
    if(head == NULL || head -> next == NULL) {
        return head;
    }
    while(curr != NULL && curr -> next != NULL) {
        if(curr -> data == curr -> next -> data) {
            curr -> next = curr -> next -> next;
        }
        else {
            if(curr -> next != NULL) {
                curr = curr -> next;
            }
        }
    }
    return head;
}
int main() {
    Node *head = NULL;
    head = insertEnd(head , 2);
    head = insertEnd(head , 2);
    head = insertEnd(head , 4);
    head = insertEnd(head , 4);
    head = insertEnd(head , 4);
    head = insertEnd(head , 5);
}
