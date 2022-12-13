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
    Node *left, *right;
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

void update(Node *root, int s, int e, int index)
{
    if (s == e)
    {
        root->data = !(root->data);
        return;
    }
    int mid = (s + e) / 2;
    if (index <= mid)
    {
        update(root->left, s, mid, index);
    }
    else
    {
        update(root->right, mid + 1, e, index);
    }
    root->data = root->left->data + root->right->data;
}

int query(Node *root, int s, int e, int key)
{
    if (s == e)
    {
        return s;
    }

    int mid = (s + e) / 2;
    if (key + 1 <= root->left->data)
    {
        return query(root->left, s, mid, key);
    }
    return query(root->right, mid + 1, e, key - root->left->data);
}

void BFS(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
        cout << temp->data << " ";
    }
    cout << endl;
}

int main()
{
    vi arr = {1, 1, 0, 1, 0};
    Node *root = build(arr, 0, 4);
    int a, b;
    cin >> a;

    while (a != -1)
    {
        if (a == 1)
        {
            cin >> b;
            update(root, 0, 4, b);
        }
        else if (a == 2)
        {
            cin >> b;
            cout << query(root, 0, 4, b) << endl;
        }
        else
        {
            BFS(root);
        }
        cin >> a;
    }
    return 0;
}