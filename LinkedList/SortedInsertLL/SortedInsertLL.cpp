#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *prev;
    Node *next;
    Node(int x) {
         data = x;
         prev = NULL;
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
Node *insertSorted(Node *head , int x) {
    Node *temp = new Node(x);
    if(head == NULL) {
        return temp;
    }
    if(head -> next == NULL) {
        if(x > head -> data) {
            return insertAtEnd(head , x);
        }
        else {
            temp -> next = head;
            return temp;
        }
    }
    Node *p = head ;
    Node *q = head -> next;
    while(p && q) {
        if(p -> data <= x && q -> data <= x) {
            p = q;
            q = q -> next;
        }
        else if(p -> data <= x && q -> data >= x) {
            p -> next = temp;
            temp -> next = q;
        }
        else {

        }
    }


}
int main() {
    Node *head = NULL;
    head = insertAtEnd(head , 10);
    head = insertAtEnd(head , 20);
    head = insertAtEnd(head , 30);
    int x = 40;
    head = insertSorted(head , x);
    return 0;
}