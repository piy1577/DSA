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
        left = right= NULL;
    }
};

bool getpath(node* root, int v){
    if(root == NULL){
        return false;
    }
    if(root->data == v){
        return true;
    }

    return getpath(root->left, v)|| getpath(root ->right, v);
}

int LCA(node* root, int n1, int n2){
    if(root == NULL){
        return -1;
    }
    vector <int> v1;
    vector <int> v2;

    if(!getpath(root, n1)|| !getpath(root, n2)){
        return -1;
    }

    node* temp = root;
    while(temp ->data != n1){
        v1.push_back(temp->data);
        if(getpath(temp->left, n1)){
            temp = temp ->left;
        }else {
            temp = temp ->right;
        }
    }

    temp = root;
    while(temp ->data != n2){
        v2.push_back(temp->data);
        if(getpath(temp->left, n2)){
            temp = temp ->left;
        }else {
            temp = temp ->right;
        }
    }

    int i=0;
    while(i<v1.size() && i<v2.size()){
        if(v1[i] != v2[i]){
            break;
        }
        i++;
    }

    return v1[i-1];
}

int main() {
    node* root = new node(1);
    root ->left = new node(2);
    root ->right = new node(3);
    root ->left ->left = new node(4);
    root ->left ->right = new node(5);
    root ->right ->left = new node(6);
    root ->right ->right = new node(7);

    cout << LCA(root, 6, 7);
    return 0;
}