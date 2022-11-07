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

node* flatten(node*  root){
    if(root ->left == NULL|| root ->right == NULL){
        return root;
    }
    root ->left = flatten(root ->left);
    root ->right = flatten(root->right);

    node* temp = root;
    while(temp ->left!= NULL){
        temp = temp ->left;
    }

    temp ->left = root ->right;
    root ->right = NULL;
    return root;
}

void display(node* root){
    while(root != NULL){
        cout << root ->data << "->";
        root = root ->left;
    }
    cout << "NULL\n";
}

int main() {
    node* root = new node(1);
    root ->left = new node(2);
    root ->right = new node(3);
    root ->left ->left= new node(4);
    root ->left ->right = new node(5);
    root ->right ->left = new node(6);
    root ->right ->right = new node(7);

    node* temp  = flatten(root);
    display(temp);
    return 0;
}