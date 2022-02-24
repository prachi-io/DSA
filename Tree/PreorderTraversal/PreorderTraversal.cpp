#include<iostream>
using namespace std;
struct Node {
    int key;
    Node *left;
    Node *right;
    Node(int k) {
        key = k;
        right = left = NULL;
    }
};
void preorder(Node *root) {
    if(root != NULL) {
        cout << root -> key << " ";
        preorder(root -> left);
        preorder(root -> right);
    }
}
int main() {
    Node *root = new Node(10);
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> left -> right = new Node(50);
    root -> right -> right = new Node(70);
    preorder(root);
}

