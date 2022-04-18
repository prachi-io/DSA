#include<iostream>
using namespace std;
int maxLevel = -1;
struct Node {
    int key;
    Node *left;
    Node *right;
    Node(int k) {
        key = k;
        right = left = NULL;
    }
};
void RightView(Node *root , int level) {
    if (root == NULL) {
        return;
    }
    if (maxLevel < level) {
        cout << root -> key << " ";
        maxLevel = level;
    }
    RightView(root -> right , level + 1);
    RightView(root -> left , level + 1);
}
int main() {
    Node *root = new Node(10);
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> right -> left = new Node(60);
    root -> left -> right = new Node(70);
    root -> right -> left -> left = new Node(80);
    RightView(root , 0);
}