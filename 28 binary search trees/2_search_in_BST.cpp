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
        return new node(val);
    }

    if(val <root ->data){
        root ->left = buildBST(root ->left, val);
    }else {
        root ->right = buildBST(root ->right, val);
    }

    return root;
}

bool search(node* root, int key){
    if(root == NULL){
        return false;
    }
    if(key < root ->data){
        return search(root ->left, key);
    }else if(key >root ->data){
        return search(root ->right, key);
    }

    return true;
}

int main() {
    vector<int> v ={3, 2, 1, 7, 5, 4, 6, 8};
    node* root = NULL;
    for(int i=0; i<v.size();i++){
        root = buildBST(root, v[i]);
    }

    if(search(root, 10)){
        cout << "10 is present in BST"<< endl;
    }else {
        cout << "10 is absent in BST"<< endl;
    }
    return 0;
}