#include <iostream>
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

void printSteptree(node*  root, int k){
    if(root == NULL&& k<0){
        return;
    }
    if(k==0){
        cout << root ->data << " ";
        return;
    }

    printSteptree(root ->left , k-1);
    printSteptree(root ->right, k-1);
}

int printNodesAtK(node* root, node* a, int k){
    if(root == NULL){
        return -1;
    }

    if(root == a){
        printSteptree(root, k);
        return 0;
    }

    int dl = printNodesAtK(root ->left, a, k);

    if(dl!= -1){
        if(dl +1 ==k){
            
        }
    }
}

int main() {
    node* root = new node(1);
    root ->left = new node(2);
    root ->left ->left = new node(4);
    root ->right = new node(3);
    return 0;
    nodeBtwDist(root, root ->left, 3);
}