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

void display(node* head){
    while(head != NULL){
        cout << head -> data << "->";
        head = head ->next;
    }
    cout << "NULL\n";
}

void insert(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return ;
    }
    node* temp = head;

    while(temp ->next != NULL){
        temp = temp->next;
    }
    temp ->next = n;
}

void even_after(node* &head){
    node* oddptr = head;
    node* evenptr = head ->next;
    node* evenstart = head ->next;

    while(oddptr->next != NULL && evenptr->next != NULL){
        oddptr ->next = evenptr ->next;
        oddptr = oddptr ->next;
        evenptr ->next = oddptr ->next;
        evenptr = evenptr ->next;
    }

    oddptr ->next = evenstart;
    evenptr ->next = NULL;
}

int main() {
    node* head = NULL;
    for(int i=1;i<7;i++){
        insert(head, i);
    }

    even_after(head);
    display(head);
    return 0;
}