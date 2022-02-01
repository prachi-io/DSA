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
int searchIterative(Node *head , int x) {
    Node *curr = head;
    int i = 1;
    while(curr != NULL) {
        if(curr -> data == x) {
            return i;
        }
        i++;
        curr = curr -> next;
    }
    return -1;
}
int searchRecursive(Node *head , int x) {
    if(head == NULL)
        return -1;
    if(head -> data == x) {
        return 1;
    }
    else {
        int res = searchRecursive(head -> next , x);
        if(res == -1) {
            return -1;
        }
        else {
            return (res + 1);
        }
    }
}
int main() {
    Node *head = NULL;
    head = insertAtEnd(head , 10);
    head = insertAtEnd(head , 20);
    head = insertAtEnd(head , 30);
    head = insertAtEnd(head , 40);
    int key;
    cin >> key;
    int ans = searchIterative(head , key);
    cout << ans;
}