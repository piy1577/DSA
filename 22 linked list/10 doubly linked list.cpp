#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
    node* previous;
    
    node(int val){
        data = val;
        next = previous = NULL;
    }
};

void insertattail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp-> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
    n -> previous = temp;
}

void insertathead(node* &head, int val){
    node* n = new node(val);
    n -> next = head;
    head -> previous = n;
    head =n;
}
void display(node* head){
    while(head != NULL){
        cout << head -> data << "->";
        head = head -> next;
    }
    cout << "NULL\n";
}

int main() {
    node* head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    insertattail(head, 5);
    insertattail(head, 6);
    insertattail(head, 7);
    insertathead(head, 8);
    display(head);
    return 0;
}