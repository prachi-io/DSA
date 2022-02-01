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
Node *insertAtAnyPos(Node *head , int data , int pos) {
    Node *temp = new Node(data);
    if(pos== 1) {
        temp -> next = head;
        return temp;
    }
    Node *curr = head;
    for(int i = 1 ; i <= (pos - 2) ; i++) {
        curr = curr -> next;
    }
    if(curr == NULL) {
        return head;
    }
    temp -> next = curr -> next;
    curr -> next = temp;
    return head;
}
int main() {
    Node *head = NULL;
    head = insertAtEnd(head , 10);
    head = insertAtEnd(head , 20);
    head = insertAtEnd(head , 30);
    head = insertAtEnd(head , 40);
    int pos ;
    cin >> pos;
    int data;
    cin >> data;
    head = insertAtAnyPos(head , data , pos);

}
