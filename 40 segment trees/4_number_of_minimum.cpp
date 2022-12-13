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
    pair<int, int> data;
    Node *left, *right;
    Node(pair<int, int> a)
    {
        data = a;
        left = right = NULL;
    }
};

Node *build(vi arr, int s, int e)
{
    if (s == e)
    {
        return new Node({arr[s], 1});
    }
    int mid = (s + e) / 2;
    Node *left = build(arr, s, mid);
    Node *right = build(arr, mid + 1, e);
    Node *root;
    if (left->data.ff == right->data.ff)
    {
        root = new Node({left->data.ff, left->data.ss + right->data.ss});
    }
    else if (left->data.ff < right->data.ff)
    {
        root = new Node(left->data);
    }
    else
    {
        root = new Node(right->data);
    }

    root->left = left;
    root->right = right;
    return root;
}

void update(Node *root, int s, int e, int index, int value)
{
    if (s == e)
    {
        root->data = {value, 1};
        return;
    }
    int mid = (s + e) / 2;
    if (index <= mid)
    {
        update(root->left, s, mid, index, value);
        if (root->right->data.ff == root->left->data.ff)
        {
            root->data.ff = root->left->data.ff;
            root->data.ss = root->left->data.ss + root->right->data.ss;
        }
        else if (root->left->data.ff < root->right->data.ff)
        {
            root->data = root->left->data;
        }
        else
        {
            root->data = root->right->data;
        }
    }
    else
    {
        update(root->right, mid + 1, e, index, value);
        if (root->left->data.ff == root->right->data.ff)
        {
            root->data.ff = root->right->data.ff;
            root->data.ss = root->left->data.ss + root->right->data.ss;
        }
        else if (root->right->data.ff < root->left->data.ff)
        {
            root->data = root->right->data;
        }
        else
        {
            root->data = root->left->data;
        }
    }
}

pair<int, int> query(Node *root, int s, int e, int l, int r)
{
    if (l <= s && e <= r)
    {
        return root->data;
    }
    if (l > e || r < s)
    {
        return {INT_MAX, 0};
    }
    int mid = (s + e) / 2;
    pair<int, int> left = query(root->left, s, mid, l, r), right = query(root->right, mid + 1, e, l, r);

    if (left.ff == right.ff)
    {
        return {left.ff, left.ss + right.ss};
    }
    else if (left.ff < right.ff)
    {
        return left;
    }
    return right;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vi arr(n);
    rep(i, 0, n)
    {
        cin >> arr[i];
    }

    Node *root = build(arr, 0, n - 1);

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
        {
            update(root, 0, n - 1, b, c);
        }
        else
        {
            pair<int, int> ans = query(root, 0, n - 1, b, c);
            cout << ans.ff << " " << ans.ss << endl;
        }
    }
    return 0;
}