#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void create_cycle(node* &head){
    node* n1 = new node(1);
    node* n2 = new node(2);
    node* n3 = new node(3);
    node* n4 = new node(4);
    node* n5 = new node(5);
    head= n1;
    n1 -> next = n2;
    n2 -> next = n3;
    n3 -> next = n4;
    n4 -> next = n5;
    n5 -> next = n1;
}

bool detection(node* head){
    node* slow = head;
    node* fast = head;

    while(fast -> next == NULL && fast != NULL){
        if(slow -> data == fast -> data){
            return true;
        }else {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
    }

    return false;
}


int main() {
    node* head = NULL;
    create_cycle(head);
    if(detection(head)){
        cout << "Cycle detected" << endl;
    }else {
        cout << "Cycle not detected" << endl;
    }
    return 0;
}