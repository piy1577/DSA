#include <iostream>
#include <vector>
using namespace std;

class node {
    public:
    int data;
    node* left, *right;

    node(int val){
        data = val;
        left = right= NULL;
    }
};

node* buildBST(vector <int> v, int min, int max){
    if(min > max){
        return NULL;
    }
    int mid = (max + min)/2;
    node* root = new node(v[mid]);
    root ->left = buildBST(v, min, mid-1);
    root ->right = buildBST(v, mid+1, max);

    return root;
}

void display(node* root){
    if(root == NULL){
        return;
    }

    display(root ->left);
    cout << root ->data << endl;
    display(root->right);
}

int main(){
    vector <int>v= {10, 20, 30, 40, 50};
    node* root = buildBST(v,0, v.size()-1);
    display(root);
    return 0;
}