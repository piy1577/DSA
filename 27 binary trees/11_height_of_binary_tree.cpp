#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

int count(Node* root){
    if(root ==NULL){
        return 0;
    }
    int c = max(count(root->left), count(root->right));
    return c+1;
}

int main() {
    Node* root = new Node(1);
    root ->left = new Node(2);
    root ->right = new Node(3);
    root ->left ->left = new Node(4);
    root ->left ->left ->left = new Node(5);
    cout << count(root) << endl;
    return 0;
}