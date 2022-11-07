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
    if(root ==NULL){
        return 0;
    }
    return count(root->left)+ count(root->right)+ 1;
};

int main() {
    node* root = new node(1);
    root ->left = new node(2);
    root ->right = new node(3);
    root ->left ->left = new node(4);
    cout << count(root) << endl;
    return 0;
}