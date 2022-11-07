#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

struct node {
    int data;
    node *left, *right;
    node(int val){
        data = val;
        left = right = NULL;
    }
};

struct info {
    int size;
    int max;
    int min;
    int ans;
    bool isBST;
};

info largestBST(node* root) {
    if(root == NULL){
        return {0, INT_MIN, INT_MAX, 0, true};
    }

    if(root ->left == NULL && root -> right == NULL){
        return {1, root ->data, root -> data, 1, true};
    }

    info leftInfo = largestBST(root ->left);
    info rightInfo = largestBST(root ->right);

    info curr;
    curr.size = (1 + leftInfo.size + rightInfo.size);
    if(leftInfo.isBST && rightInfo.isBST && leftInfo.max < root ->data && rightInfo.max > root->data ){
        curr.max = (max(root ->data , max(leftInfo.max, rightInfo.max)));
        curr.min = (min(root ->data, min(leftInfo.min, rightInfo.min)));
        curr.ans = curr.size;
        curr.isBST = true;
        return curr;
    }

    curr.ans = max(leftInfo.ans, rightInfo.ans);
    curr.isBST = false;
    return curr;
}

int main() {
    node* root = new node(15);
    root ->left = new node(20);
    root ->left ->left = new node(5);
    root ->right = new node(30);

    cout << "largest BST in BT: " << largestBST(root).ans << endl;
    return 0;
}