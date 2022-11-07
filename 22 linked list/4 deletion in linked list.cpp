#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertattail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = n;
}

void display(node* head){
    while(head!=NULL){
        cout << head->data << "->";
        head = head ->next;
    }

    cout << "NULL";
    cout <<endl;
}

void deletion(node* &head, int val){
    if(head ==NULL){
        return;
    }
    if(val == head->data){
        node* temp=head;
        head = head ->next;
        delete temp;
        return;
    }
    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

int main() {
    node* head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);

    deletion(head, 1);
    display(head);
    return 0;
}