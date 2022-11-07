#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = right = NULL;
    }
};

bool check(node* root, int n1){
    if(root == NULL){
        return false;
    }
    else if(root ->data == n1){
        return true;
    }

    return check(root ->left, n1)|| check(root ->right, n1);
}

node* LCA(node* root, int n1, int n2){
    if(root == NULL){
        return NULL;
    }

    if(check(root->left, n1)&& check(root ->left, n2)){
        return LCA(root ->left, n1, n2);
    }else if(check(root->right, n1)&& check(root ->right, n2)){
        return LCA(root ->right, n1, n2);
    }

    return root;
}

int main() {
    node* root = new node(1);
    root ->left = new node(2);
    root ->right = new node(3);
    root ->left ->left = new node(4);
    root ->left ->right = new node(5);
    root ->right ->left = new node(6);
    root ->right ->right = new node(7);

    cout << LCA(root, 4, 7)->data;
    return 0;
}