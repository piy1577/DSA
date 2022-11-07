#include <iostream>
#include <vector>
using namespace std;

class node {
    public:
    int data;
    node *left, *right;
    node(int val){
        data = val;
        left = right = NULL;
    }
};

vector <node*> constructTrees(int start, int end){
    vector <node*> trees;
    if(start >end){
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start; i<=end;i++){
        vector<node*> leftsubTree = constructTrees(start, i-1);
        vector<node*> rightsubTree = constructTrees(i+1, end);

        for(int j=0; j<leftsubTree.size();j++){
            node* left = leftsubTree[j];
            for(int k=0; k<rightsubTree.size(); k++){
                node* right = rightsubTree[k];
                node* n = new node(i);
                n ->left = left;
                n ->right = right;
                trees.push_back(n);
            }
        }
    }

    return trees;
}

void display(node* root){
    if(root == NULL){
        return;
    }

    cout << root ->data << " ";
    display(root ->left);
    display(root ->right);
}

int main() {
    vector <node*> root = constructTrees(1, 3);
    for(auto i: root){
        display(i);
        cout << endl;
    }

    return 0;
}