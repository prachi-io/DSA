/// Using Length of LL
/*
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
void printNthFromEnd(Node *head , int n) {
    int len = 0;
    for (Node *curr = head ; curr != NULL ; curr = curr -> next) {
        len++;
    }
    if(len < n)
        return;
    Node *curr = head;
    for(int i = 1 ; i < len - n + 1 ; i++) {
        curr = curr -> next;
    }
    cout << (curr -> data) << " ";
}
int main() {
    Node *head = NULL;
    head = insertAtEnd(head , 10);
    head = insertAtEnd(head , 20);
    head = insertAtEnd(head , 30);
    head = insertAtEnd(head , 40);
    head = insertAtEnd(head , 50);
    printNthFromEnd(head , 2);

}
*/

/// Using 2 pointers
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
void printNthFromEnd(Node *head , int n) {
    if (head == NULL)
        return;
    Node *first = head;
    for(int i = 0 ; i < n ; i++) {
        if(first == NULL)
            return;
        first = first -> next;
    }
    Node *second = head;
    while (first != NULL) {
        second = second -> next;
        first = first -> next;
    }
    cout << second -> data;
}
int main() {
    Node *head = NULL;
    head = insertAtEnd(head , 10);
    head = insertAtEnd(head , 20);
    head = insertAtEnd(head , 30);
    head = insertAtEnd(head , 40);
    head = insertAtEnd(head , 50);
    printNthFromEnd(head , 2);

}

