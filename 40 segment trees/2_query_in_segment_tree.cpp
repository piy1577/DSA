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

int Query(Node *root, int s, int e, int l, int r)
{
    if (l <= s && r >= e)
    {
        return root->data;
    }

    if (r < s || l > e)
    {
        return 0;
    }
    int mid = (s + e) / 2;
    int left = Query(root->left, s, mid, l, r);
    int right = Query(root->right, mid + 1, e, l, r);
    return left + right;
}

int main()
{
    vi arr = {5, 3, 2, 4, 1, 8, 6, 10};
    Node *root = build(arr, 0, 7);
    cout << Query(root, 0, 7, 1, 5) << endl;
    return 0;
}