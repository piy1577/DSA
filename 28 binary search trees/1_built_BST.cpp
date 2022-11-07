#include <iostream>
#include <vector>
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

node* buildBST(node* root, int val){
    if(root == NULL){
        root = new node(val);
        return root;
    }
    if(val < root->data){
        root ->left = buildBST(root ->left, val);
    }else {
        root ->right = buildBST(root ->right, val);
    }

    return root;
}
void display(node* root){
    if(root == NULL){
        return;
    }

    display(root ->left);
    cout << root ->data << " ";
    display(root ->right);
}

int main() {
    vector <int> v = {5, 1, 3, 4, 2, 7};
    node* root = NULL;

    for(int i=0; i<v.size(); i++){
        root =buildBST(root, v[i]);
    }

    display(root);
    return 0;
}