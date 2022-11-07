#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next =NULL;
    }
};

void insertattail(node* &head, int val){
    node* n = new node(val);
    if(head ==NULL){
        head = n;
        return;
    }

    node* temp = head;

    while(temp->next!= NULL){
        temp = temp->next;
    }

    temp->next = n;
}

void display(node* head){
    while(head!=NULL){
        cout << head->data << "->";
        head = head->next;
    }

    cout << "NULL"<< endl;
}

void reverse(node* &head){
    node* previous = NULL;
    node* current = head;
    node* coming = head ->next;
    while(coming!=NULL){
        current->next = previous;
        previous = current;
        current = coming;
        coming = coming->next;
    }

    current ->next = previous;
    head = current;
}

node* reverserecursion(node* &head){
    if(head ==NULL || head->next == NULL){
        return head;
    }
    node* newhead= reverserecursion(head->next);
    head ->next ->next = head;
    head ->next = NULL;

    return newhead;
}

int main(){
    node* head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    display(head);

    reverse(head);
    display(head);

    node* newhead = reverserecursion(head);
    display(newhead);

    return 0;
}