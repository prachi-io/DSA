/// Naive Solution
// O(n)
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
Node *insertBegin(Node *head , int x) {
    Node *temp = new Node(x);
    if(head == NULL) {
        temp -> next = temp;
    }
    else {
        Node *curr = head;
        while(curr -> next != head) {
            curr = curr -> next;
        }
        curr -> next = temp;
        temp -> next = head;
    }
    return temp;
}
int main() {
    Node *head = new Node(10);
    head -> next = new Node(5);
    head -> next -> next = new Node(20);
    head -> next -> next -> next = new Node(15);
    head -> next -> next -> next -> next = head;
    head = insertBegin(head , 40);
    return 0;
}*/

/// Efficient ---> store tail not head
// O(1)

/// Efficient Way -> temp ko head ke baad daal do and then swap the data
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
Node *insertBegin(Node *head , int x) {
    Node *temp = new Node(x);
    if(head == NULL) {
        temp -> next = temp;
        return temp;
    }
    else {
        temp -> next = head -> next;
        head -> next = temp;
        int t = head -> data;
        head -> data = temp -> data;
        temp -> data = t;
        return head;
    }

}
int main() {
    Node *head = new Node(10);
    head -> next = new Node(5);
    head -> next -> next = new Node(20);
    head -> next -> next -> next = new Node(15);
    head -> next -> next -> next -> next = head;
    head = insertBegin(head , 40);
    return 0;
}
