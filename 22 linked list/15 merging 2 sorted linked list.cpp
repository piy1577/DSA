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

void insert(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp ->next != NULL){
        temp = temp->next;
    }

    temp -> next = n;
}

void display(node* head){
    while(head != NULL){
        cout << head ->data << "->";
        head = head->next;
    }
    cout << "NULL\n";
}

node* merge(node* &n1, node* &n2){
    node* ptr1 = n1;
    node* ptr2 = n2;
    node* newhead = new node(-1);
    node* ptr3 = newhead;

    while(ptr1 !=NULL && ptr2 != NULL){
        if(ptr1->data < ptr2->data){
            ptr3 ->next = ptr1;
            ptr3 = ptr1;
            ptr1 = ptr1 ->next;
        }else {
            ptr3 ->next = ptr2;
            ptr3 = ptr2;
            ptr2 = ptr2 ->next;
        }
    }
    if(ptr1==NULL && ptr2 != NULL){
        ptr3 ->next = ptr2;
    }else if(ptr2 == NULL && ptr1 != NULL){
        ptr3 ->next = ptr1;

    }
    return newhead->next;
}

int main() {
    node* n1 = NULL;
    node* n2 = NULL;
    insert(n1, 1);
    insert(n1, 4);
    insert(n1, 5);
    insert(n1, 7);
    insert(n2, 2);
    insert(n2, 3);
    insert(n2, 6);
    display(n1);
    display(n2);
    node* newhead = merge(n1, n2);
    

    display(newhead);
    return 0;
}