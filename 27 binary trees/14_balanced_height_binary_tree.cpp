#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = right = NULL;
    }
};

int count(node* root){
    if(root == NULL){
        return 0;
    }
    return count(root ->left)+ count(root->right) + 1;
}

bool balancedTree(node* root){
    if(count(root->left) -count(root->right) >=-1 && count(root->left) - count(root->right) <=1){
        return true;
    }
    return false;
}

int main() {
    node* root = new node(1);
    root ->left = new node(2);
    if(balancedTree(root)){
        cout <<"Tree is Balanced"<< endl;
    }else {
        cout << "Tree is unBalanced" << endl;
    }
    return 0;
}