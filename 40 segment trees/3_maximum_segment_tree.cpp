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
    Node *root = new Node(max(left->data, right->data));
    root->left = left;
    root->right = right;
    return root;
}

int query(Node *root, int s, int e, int l, int r)
{
    if (l <= s && r >= e)
    {
        return root->data;
    }
    if (l > e || r < s)
    {
        return INT_MIN;
    }
    int mid = (s + e) / 2;
    int left = query(root->left, s, mid, l, r);
    int right = query(root->right, mid + 1, e, l, r);
    return max(left, right);
}

void update(Node *root, int s, int e, int index, int value)
{
    if (s == e)
    {
        root->data = value;
        return;
    }
    int mid = (s + e) / 2;
    if (index <= mid)
    {
        update(root->left, s, mid, index, value);
        root->data = max(root->data, root->left->data);
    }
    else
    {
        update(root->right, mid + 1, e, index, value);
        root->data = max(root->data, root->right->data);
    }
}

int main()
{
    vi arr = {6, 8, -1, 2, 17, 1, 3, 2, 4};
    Node *root = build(arr, 0, 8);
    cout << query(root, 0, 8, 2, 6) << endl;

    update(root, 0, 8, 7, 18);

    cout << query(root, 0, 8, 2, 7);
    return 0;
}