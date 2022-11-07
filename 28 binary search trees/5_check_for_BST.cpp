#include <iostream>
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

bool check(node* root, int min , int max){
    if(root == NULL){
        return true;
    }
    if(!(root ->data <max && root ->data > min)){
        return false;
    }
    return check(root ->left, min, root ->data) && check(root ->right, root ->data, max);
}

int main(){
    node* root = new node(5);
    root ->left = new node(3);
    root ->left ->right = new node(4);
    root ->left ->left = new node(2);

    root ->right = new node(6);

    cout << check(root , INT_MIN, INT_MAX);
    return 0;
}