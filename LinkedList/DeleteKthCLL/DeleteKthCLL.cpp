/// My
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
Node *deleteKth(Node *head , int K) {
    Node *curr = head;
    int i = 1;
    while(i < K - 1) {
        curr = curr -> next;
        i++;
    }
    if(curr -> next != head) {
        curr -> next = curr -> next -> next;
        return head;
    }
    else {
        Node *t = head -> next;
        curr -> next = curr -> next -> next;
        return t;
    }
    return head;
}
int main() {
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next  -> next = head;
    head = deleteKth(head , 2);
    return 0;
}*/

/// Sir
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
Node *DeleteHead(Node *head) {
    if (head == NULL) {
        return NULL;
    }
    if(head -> next == head) {
        delete head;
        return NULL;
    }
    head -> data = head -> next -> data;
    Node *temp = head -> next;
    head -> next = head -> next -> next;
    delete temp;
    return head;
}
Node *deleteKth(Node *head , int K) {
    if (head == NULL) {
        return head;
    }
    if(K == 1) {
        return DeleteHead(head);
    }
    Node *curr = head;
    for (int i = 0 ; i < K - 2 ; i++) {
        curr = curr -> next;
    }
    Node *
}
int main() {
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next  -> next = head;
    head = deleteKth(head , 2);
    return 0;
}