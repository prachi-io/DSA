/// naive Solution
/*#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node (int x) {
        data = x;
        next = NULL;
    }
};
Node *insertAtEnd(Node *head , int data) {
    Node *temp = new Node(data);
    if(head == NULL) {
        temp -> next = temp;
        return temp;
    }
    else {
        Node *curr = head;
        while(curr -> next != head) {
            curr = curr -> next;
        }
        temp -> next = curr -> next;
        curr -> next = temp;
        return head;
    }
}
int main() {
    Node *head = new Node(10);
    head -> next = new Node(5);
    head -> next -> next = new Node(20);
    head -> next -> next -> next = new Node(15);
    head -> next -> next -> next -> next = head;
    head = insertAtEnd(head , 17);
    return 0;
}*/

/// Efficient Solution
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
Node *insertAtEnd(Node *head , int data) {
    Node *temp = new Node(data);
    if(head == NULL) {
        temp -> next = temp;
        return temp;
    }
    else {
        temp -> next = head -> next;
        head -> next = temp;
        int t = temp -> data;
        temp -> data = head -> data;
        head -> data = t;
        return temp;
    }
}
int main() {
    Node *head = new Node(10);
    head -> next = new Node(5);
    head -> next -> next = new Node(20);
    head -> next -> next -> next = new Node(15);
    head -> next -> next -> next -> next = head;
    head = insertAtEnd(head , 17);
    return 0;
}