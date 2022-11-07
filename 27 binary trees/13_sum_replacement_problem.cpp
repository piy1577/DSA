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

void sumr(node* &root){
    if(root->left== NULL|| root ->right == NULL){
        return;
    }
    sumr(root ->left);
    sumr(root ->right);
    root -> data += root ->left ->data + root ->right ->data;
}

void display(node* root){
    if(root == NULL){
        return;
    }
    cout << root ->data << " ";
    display(root->left);
    display(root ->right);
}

int main() {
    node* root = new node(1);
    root ->left = new node(2);
    root -> right = new node(3);
    root ->left ->left = new node(4);
    root -> left ->right = new node(5);
    root ->right ->left = new node(6);
    root -> right ->right = new node(7);
    sumr(root);
    display(root);
    return 0;
}