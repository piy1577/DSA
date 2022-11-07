#include <iostream>
using namespace std;

struct node {
    int data;
    node *left, *right;

    node(int val){
        data = val;
        left = right = NULL;
    }
};

bool isIdentical (node* root1, node* root2){
    if(root1 == NULL && root2== NULL){
        return true;
    }else if(root1 == NULL || root2 == NULL){
        return false;
    }else if(root1->data == root2->data){
        return isIdentical(root1 ->left, root2 ->left) && isIdentical(root1 ->right, root2 ->right);
    }
    return false;
}

int main() {
    node* root = new node(2);
    root ->left = new node(1);
    root ->right = new node(3);
    node* root2 = new node(2);
    root2 ->left = new node(1);
    root2->right = new node(4);

    if(isIdentical(root, root2)){
        cout << " are identical" << endl;
    }else {
        cout << "are not identical" << endl;
    }

    return 0;
}