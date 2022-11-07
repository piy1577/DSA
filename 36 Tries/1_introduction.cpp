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
    Trie *next[26];
    Trie()
    {
        end = false;
        for (int i = 0; i < 26; i++)
            next[i] = NULL;
    }
};

void insert(Trie *&root, string word)
{
    Trie *temp = root;
    for (int i = 0; i < word.length(); i++)
    {
        if (temp->next[word[i] - 'a'] == NULL)
            temp->next[word[i] - 'a'] = new Trie();

        temp = temp->next[word[i] - 'a'];
    }
    temp->end = true;
}

bool search(Trie *root, string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (root->next[word[i] - 'a'] == NULL)
            return false;
        root = root->next[word[i] - 'a'];
    }
    return root->end;
}

int main()
{
    Trie *root = new Trie();
    vector<string> words = {"app", "bye", "by", "apple", "apply"};
    for (auto i : words)
    {
        insert(root, i);
    }

    search(root, "apple") ? cout << "apple is present" << endl : cout << "apple is not present" << endl;
    search(root, "bye") ? cout << "bye is present" << endl : cout << "bye is not present" << endl;
    search(root, "appl") ? cout << "appl is present" << endl : cout << "appl is not present" << endl;
    return 0;
}