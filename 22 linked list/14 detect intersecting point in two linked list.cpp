#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void intersect(node* &n1, node* &n2, int val)
{
    node *n1_head = n1;
    node *n2_head = n2;
    while (n1_head->data != val)
    {
        n1_head = n1_head->next;
    }

    while (n2_head -> next!= NULL)
    {
        n2_head = n2_head->next;
    }

    n2_head->next = n1_head;
}

void insert(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
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

int detect(node* &n1, node* &n2){
    int l1 = length(n1);
    int l2 = length(n2);

    int d =0;
    node* ptr1;
    node* ptr2;

    if(l1>l2){
        ptr1 = n1;
        ptr2 = n2;
        d = l1-l2;
    }else {
        ptr1 = n2;
        ptr2 = n1;
        d = l2-l1;
    }

    while(d){
        d--;
        ptr1 = ptr1 ->next;
    }

    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1 == ptr2){
            return ptr1 ->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
}
int main()
{
    node *n1 = NULL;
    node *n2 = NULL;
    for (int i = 1; i <= 6; i++)
    {
        insert(n1, i);
    }
    insert(n2, 9);
    insert(n2, 10);
    intersect(n1, n2, 5);
    display(n1);
    display(n2);
    int n3 = detect(n1, n2);
    cout << n3 << endl;
    return 0;
}