#include <iostream>
#include <cmath>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = right = NULL;
    }
};

int maxSum(node* root){
    if(root == NULL){
        return 0;
    }
    int d1 = maxSum(root ->left);
    int d2 = maxSum(root ->right);

    return max(d1, max(d2, d1+d2)) + root->data;
}

int main(){
    node* root = new node(1);
    root ->left = new node(-12);
    root ->right = new node(3);
    root ->left ->left = new node(4);
    root ->right ->left = new node(5);
    root ->right ->right = new node(-6);

    cout << maxSum(root)<< endl;
    return 0;
}