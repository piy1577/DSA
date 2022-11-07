#include <iostream>
#include <vector>
#include <climits>
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

node* buildBST(vector <int> a, int* preorder,int key, int min, int max){
    if(*preorder >= a.size()){
        return NULL;
    }
    node* root = NULL;
    if(key >min && key < max){
        root = new node(key);
        *preorder = *preorder + 1;

        if(*preorder < a.size()){
            root ->left = buildBST(a, preorder, a[*preorder], min, key);
        }
        if(*preorder < a.size()){
            root ->right = buildBST(a, preorder, a[*preorder], key, max);
        }
    }

    return root;
}

void display(node* root){
    if(root == NULL){
        return;
    }

    display(root ->left);
    cout << root ->data << endl;
    display(root ->right);
}

int main(){
    vector <int> v = {7, 5, 4, 6, 8, 9};
    int preorder = 0;
    node* root = buildBST(v, &preorder, v[0], INT_MIN, INT_MAX);
    display(root);
    return 0;
}