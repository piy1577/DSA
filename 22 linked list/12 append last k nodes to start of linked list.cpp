#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

void insert(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp -> next != NULL){
        temp = temp->next;
    }
    temp -> next = n;
}

void display(node* head){
    while(head != NULL){
        cout << head -> data << "->";
        head = head -> next;
    }
    cout << "NULL\n";
}

int length(node* head){
    int count =1;
    while(head -> next != NULL){
        head= head ->next;
        count++;
    }
    return count;
}

node* appendknode(node* head,  int k){
    node* newhead = head;
    node* tail = head;
    node* newtail = head;
    int n = length(head);
    while(tail ->next != NULL){

        tail = tail -> next;
    }

    for(int i=1; i<n-k;i++){
        newtail = newtail -> next;
    }

    newhead = newtail -> next;

    tail -> next = head;
    newtail ->next = NULL;
    return newhead;
}
int main(){
    node* head = NULL;
    for(int i=1; i<=10;i++){
        insert(head, i);
    }
    node* newhead = appendknode(head, 4);
    display(newhead);
    return 0;
}