#include <iostream>
#include <stack>
using namespace std;

struct node {
    int data;
    node* left, *right;
    node(int val){
        data = val;
        left = right = NULL;
    }
};

void display(node* root){
    stack <node*> currentLevel, nextLevel;
    bool isright= false;
    currentLevel.push(root);

    while(currentLevel.top() != NULL){
        while(!currentLevel.empty()){
            cout << currentLevel.top() ->data<< endl;
            if(isright){
                if(currentLevel.top()->right!= NULL){
                    nextLevel.push(currentLevel.top()->right);
                }
                if(currentLevel.top() ->left != NULL){
                    nextLevel.push(currentLevel.top() ->left);
                }
            }else {
                if(currentLevel.top() ->left != NULL){
                    nextLevel.push(currentLevel.top() ->left);
                }
                if(currentLevel.top()->right!= NULL){
                    nextLevel.push(currentLevel.top()->right);
                }
            }
            currentLevel.pop();
        }

        if(isright){
            isright = false;
        }else {
            isright = true;
        }

        currentLevel = nextLevel;
        while(!nextLevel.empty()){
            nextLevel.pop();
        }
    }
}

int main() {
    node* root = new node(1);
    root ->left = new node(2);
    root ->right = new node(3);
    root ->left ->right = new node(4);
    root ->left ->right ->left = new node(6);
    root ->left ->right ->right = new node(7);
    root ->right ->right = new node(5);
    display(root);
    return 0;
}