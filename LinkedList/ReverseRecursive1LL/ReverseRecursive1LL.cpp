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
Node *reverse(Node *head) {
    if(head == NULL || head -> next == NULL) {
        return head;
    }
    Node *rest_head = reverse(head -> next);
    Node *rest_tail = head -> next;
    rest_tail -> next = head;
    head -> next = NULL;
    return rest_head;
}
int main() {
    Node *head = NULL;
    head = insertAtEnd(head , 10);
    head = insertAtEnd(head , 20);
    head = insertAtEnd(head , 30);
    head = insertAtEnd(head , 40);
    head = insertAtEnd(head , 50);
    head = reverse(head);
}



