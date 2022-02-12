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
Node *insertAtEnd(Node *head , int x) {
    Node *temp = new Node(x);
    if (head == NULL) {
        return temp;
    }
    Node *curr = head;
    while(curr -> next != NULL) {
        curr = curr -> next;
    }
    curr -> next = temp;
    return head;

}
Node *reverse(Node *curr , Node *prev) {
    if(curr == NULL)
        return prev;
    Node *next = curr -> next;
    curr -> next = prev;
    reverse(next,curr);
}
int main() {
    Node *head = NULL;
    head = insertAtEnd(head , 10);
    head = insertAtEnd(head , 20);
    head = insertAtEnd(head , 30);
    head = insertAtEnd(head , 40);
    head = insertAtEnd(head , 50);
    head = reverse(head , NULL);
}
