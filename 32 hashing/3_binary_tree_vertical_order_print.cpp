#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b; i++)
#define ff first
#define ss second
map<int, vector<int>> m;


struct node {
    int data;
    node *left, *right;

    node(int val){
        data = val;
        left = right = NULL;
    }
};

void verticalorderprint(node* n, int k){
    if(n == NULL){
        return;
    }

    m[k].push_back(n ->data);
    verticalorderprint(n ->left, k-1);
    verticalorderprint(n ->right, k+1);
}

int main() {
    node* BT = new node(10);
    BT->left = new node(7);
    BT->right = new node(4);
    BT->left ->left = new node(3);
    BT->left ->right = new node(11);
    BT->right ->left = new node(14);
    BT ->right ->right = new node(6);

    verticalorderprint(BT, 0);

    map<int, vector<int>>::iterator it;

    for(it = m.begin(); it != m.end(); it++){
        for(int i=0; i < (it->ss).size(); i++){
            cout << (it ->ss)[i] << " ";
        }
    }

    return 0;
}