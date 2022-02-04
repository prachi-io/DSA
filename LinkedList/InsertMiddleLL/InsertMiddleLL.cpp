#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
    }
};
Node* insertInMiddle(Node* head, int x)
{
    // Cpde here
    Node *temp = new Node(x);
    if(head == NULL) {
        return temp;
    }
    Node *slow = head;
    Node *fast = head;
    while(fast != NULL && fast -> next != NULL && fast -> next -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    temp -> next = slow -> next;
    slow -> next = temp;
    return head;
}
int main() {
    Node *head = NULL;
    head = insertInMiddle(head , 1);
    head = insertInMiddle(head , 2);
    head = insertInMiddle(head , 3);
    head = insertInMiddle(head , 4);
    head = insertInMiddle(head , 5);
}