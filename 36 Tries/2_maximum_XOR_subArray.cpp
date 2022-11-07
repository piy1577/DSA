#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)

class Trie
{
public:
    Trie *zero, *one;
    Trie()
    {
        zero = one = NULL;
    }
};

void insert(Trie *&root, int n)
{
    Trie *curr = root;
    for (int i = 31; i >= 0; i--)
    {
        int bit = (n >> i) & 1;
        if (bit == 0)
        {
            if (curr->zero == NULL)
            {
                curr->zero = new Trie();
            }
            curr = curr->zero;
        }
        else
        {
            if (curr->one == NULL)
            {
                curr->one = new Trie();
            }
            curr = curr->one;
        }
    }
}

int findMaxXor(Trie *root, int n)
{
    int ans = 0;
    for (int i = 31; i >= 0; i--)
    {
        int bit = (n >> i) & 1;
        if (bit == 1)
        {
            if (root->zero != NULL)
            {
                ans += (1 << i);
                root = root->zero;
            }
            else
            {
                root = root->one;
            }
        }
        else
        {
            if (root->one != NULL)
            {
                ans += (1 << i);
                root = root->one;
            }
            else
            {
                root = root->zero;
            }
        }
    }

    return ans;
}

void max_xor(vector<int> arr)
{
    Trie *root = new Trie();
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        insert(root, arr[i]);
    }
    for (int i = 1; i < arr.size(); i++)
    {
        ans = max(ans, findMaxXor(root, arr[i]));
    }
    cout << ans << endl;
}

int main()
{
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max_xor(arr);
    return 0;
}