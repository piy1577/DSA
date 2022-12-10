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
    bool end;
    vector<Trie *> next;
    Trie()
    {
        end = false;
        next = vector<Trie *>(26, NULL);
    }
};

void insert(Trie *&root, string word)
{
    if (!root)
    {
        root = new Trie;
    }
    if (word == "")
    {
        root->end = true;
        return;
    }
    insert(root->next[word[0] - 'a'], word.substr(1));
}

void printall(Trie *temp, string word)
{
    if (temp->end)
    {
        cout << word << endl;
    }

    for (int i = 0; i < 26; i++)
    {
        if (temp->next[i])
        {
            char n = 'a' + i;
            printall(temp->next[i], word + n);
        }
    }
}

void search(Trie *&root, string word)
{
    Trie *temp = root;
    for (auto c : word)
    {
        if (!temp->next[c - 'a'])
        {
            cout << word << endl;
            insert(root, word);
            return;
        }
        temp = temp->next[c - 'a'];
    }
    printall(temp, word);
}

int main()
{
    int n;
    cin >> n;
    Trie *root = new Trie();
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        insert(root, s);
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        search(root, s);
    }
    return 0;
}