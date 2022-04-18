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
int isBalanced(Node *root) {
    if(root == NULL) {
        return 0;
    }
    int lh = isBalanced(root -> left);
    if(lh == -1) {
        return -1;
    }
    int rh = isBalanced(root -> right) ;
    if (rh == -1) {
        return -1;
    }
    if(abs(rh-lh) > 1) {
        return -1;
    }
    else {
        return max(lh,rh) + 1;
    }

}
int main() {
    Node *root = new Node(10);
    root -> left = new Node(20);
    root -> left -> left = new Node(20);
    root -> right = new Node(30);
    root -> right -> right = new Node(100);
    root -> right -> left = new Node(60);
    root -> left -> right = new Node(70);
    root -> right -> left -> left = new Node(80);
    int ans = isBalanced(root);
    cout << ans;
}