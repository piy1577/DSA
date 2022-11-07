#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int start, int end, int curr){
    for(int i=start; i<=end; i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

node* builtTree(int preorder[], int inorder[], int start, int end){
    static int idx =0;
    if(start >end){
        return NULL;
    }
    int curr = preorder[idx];
    node* n = new node(curr);
    idx++;
    if(start == end){
        return n;
    }
    int pos = search(inorder, start, end, curr);
    n ->left = builtTree(preorder, inorder, start, pos-1);
    n ->right = builtTree(preorder, inorder, pos+1, end);
    return n;
}

void display(node* root){
    if(root == NULL){
        return;
    }
    display(root ->left);
    cout << root ->data <<" ";
    display(root ->right);
}


int main() {
    int preorder[] ={1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};
    node* root= builtTree(preorder, inorder, 0, 4);
    display(root);
    return 0;
}