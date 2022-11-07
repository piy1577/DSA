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

int sum(node* root){
    if(root ==NULL){
        return 0;
    }
    return sum(root->left)+ sum(root->right)+ root->data;
};

int main() {
    node* root = new node(1);
    root ->left = new node(2);
    root ->right = new node(3);
    root ->left ->left = new node(4);
    cout << sum(root) << endl;
    return 0;
}