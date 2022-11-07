#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right= NULL;
    }
};

Node* inorderSucc(Node* root){
    Node* curr = root;
    while(curr && curr ->left != NULL){
        curr = curr -> left;
    }
    return curr;
}

Node* deleteBST(Node* root, int key){
    if(key < root ->data){
        root ->left = deleteBST(root ->left, key);
    }else if(key > root ->data){
        root ->right = deleteBST(root ->right, key);
    }else {
        if(root ->left == NULL){
            Node* temp = root ->right;
            free(root);
            return temp;
        }else if(root -> right == NULL){
            Node* temp = root ->left;
            free(root);
            return temp;
        }

        Node* temp = inorderSucc(root ->right);
        root ->data = temp ->data;
        root ->right = deleteBST(root->right,key);
    }    

    return root;
}

void display(Node* root){
    if(root == NULL){
        return;
    }

    display(root ->left);
    cout << root ->data << endl;
    display(root ->right);
}

int main() {
    Node* root = new Node(4);
    root ->left = new Node(2);
    root ->right = new Node(5);
    root ->left ->left = new Node(1);
    root ->left ->right = new Node(3);
    root ->right ->right = new Node(6);
    root = deleteBST(root, 5);

    display(root);
    return 0;
}