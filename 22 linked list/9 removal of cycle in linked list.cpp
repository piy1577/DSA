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

void create_cycle(node* &head) {
    node* n1 = new node(1);
    node* n2 = new node(2);
    node* n3 = new node(3);
    node* n4 = new node(4);
    node* n5 = new node(5);
    node* n6 = new node(6);
    node* n7 = new node(7);
    node* n8 = new node(8);
    node* n9 = new node(9);
    head = n1;
    n1 -> next = n2;
    n2 -> next = n3;
    n3 -> next = n4;
    n4 -> next = n5;
    n5 -> next = n6;
    n6 -> next = n7;
    n7 -> next = n8;
    n8 -> next = n9;
    n9 -> next = n4;
}

node* remove_cycle(node* head){
    node* fast = head;
    node* slow = head;
    do {
        slow = slow -> next;
        fast = fast -> next -> next;
    }while(slow != fast);

    fast = head;
    while(fast-> next != slow ->next){
        fast = fast -> next;
        slow = slow -> next;
    }

    slow -> next = NULL;
    return head;
}

void display(node* head){
    while(head != NULL){
        cout << head ->data << "->";
        head = head -> next;
    }

    cout << "NULL\n";
}

int main() {
    node* head = NULL;

    create_cycle(head);
    node* newhead = remove_cycle(head);

    display(newhead);
    return 0;
}