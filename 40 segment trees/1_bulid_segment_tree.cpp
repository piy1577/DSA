#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

Node *build(vi arr, int s, int e)
{
    if (s == e)
    {
        return new Node(arr[s]);
    }

    int mid = (s + e) / 2;
    Node *left = build(arr, s, mid);
    Node *right = build(arr, mid + 1, e);
    Node *root = new Node(left->data + right->data);
    root->left = left;
    root->right = right;
    return root;
}

void BFS(Node *root)
{
    queue<Node *> s;
    s.push(root);
    while (!s.empty())
    {
        Node *temp = s.front();
        s.pop();
        s.push(temp->left);
        s.push(temp->right);
        cout << temp->data << endl;
    }
}

int main()
{
    vi arr = {5, 3, 2, 4, 1, 8, 6, 10};
    Node *root = build(arr, 0, 7);
    BFS(root);
    return 0;
}