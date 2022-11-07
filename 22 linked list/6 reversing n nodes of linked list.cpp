#include<iostream>
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
    if(head ==NULL){
        head = n;
        return;
    }

    node* temp = head;

    while(temp-> next != NULL){
        temp = temp->next;
    }

    temp ->next = n;
}

void display(node* head){
    while(head != NULL){
        cout << head -> data << "->";
        head = head->next;
    }

    cout << "NULL"<<endl;
}

node* reverseknode(node* &head, int k){
    node* previous = NULL;
    node* current = head;
    node* coming;
    int count =0;

    while(current != NULL &&count <k){
        coming = current ->next;
        current->next = previous;
        previous = current;
        current = coming;
        count ++;
    }

    if(coming != NULL){
        head ->next = reverseknode(coming, k);
    }
    return previous;
}

int main() {
    node* head = NULL;

    for(int i=1; i<=10;i++){
        insert(head, i);
    }
    display(head);

    node* newhead =reverseknode(head, 2);
    display(newhead);
    
    return 0;
}