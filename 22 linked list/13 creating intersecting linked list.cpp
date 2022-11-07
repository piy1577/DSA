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
    return 0;
}