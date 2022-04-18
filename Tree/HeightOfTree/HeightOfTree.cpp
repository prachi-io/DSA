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
int height(Node *root) {
    if(root == NULL) {
        return 0;
    }
    else {
        return max(height(root -> left) , height(root -> right)) + 1;
    }
}
int main() {
    Node *root = new Node(10);
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> left -> right = new Node(50);
    root -> right -> left = new Node(60);
    int h = height(root);
    cout << h;
}
