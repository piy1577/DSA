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
    node* n =new node(val);
    if(head == NULL){
        head =n;
        return ;
    }
    node* temp = head;
    while(temp ->next != NULL){
        temp = temp ->next;
    }
    temp ->next =n;
}

void create_cycle(node* &head){
    node* temp = head;
    while(temp ->next != NULL){
        temp = temp->next;
    }
    temp ->next = head;
}
void display(node* head){
    for(int i=0;i<20;i++){
        cout<< head->data << "->";
        head = head->next;
    }
    cout << "......\n";
}

void delete_end(node* &head){
    node* prev_ptr = head;
    node* del_ptr = head;
    while(prev_ptr ->next->next !=head ){
        prev_ptr = prev_ptr ->next;
        del_ptr = del_ptr ->next;
    }

    del_ptr = del_ptr ->next;

    prev_ptr ->next = head;
    delete del_ptr;
}

int main() {
    node* head = NULL;
    for(int i=1;i<6;i++){
        insert(head, i);
    }
    create_cycle(head);

    display(head);
    delete_end(head);
    display(head);
    return 0;
}