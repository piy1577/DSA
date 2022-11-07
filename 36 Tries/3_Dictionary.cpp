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
        {
            next[i] = NULL;
        }
    }
};

void insert(Trie *&root, string s)
{
    Trie *temp = root;
    for (int i = 0; i < s.length(); i++)
    {
        if (temp->next[s[i] - 'a'] == NULL)
        {
            temp->next[s[i] - 'a'] = new Trie();
        }
        temp = temp->next[s[i] - 'a'];
    }
    temp->end = true;
}

void Search(Trie *&root, string s)
{
    Trie *temp = root;
    for (int i = 0; i < s.length(); i++)
    {
    }
}

int main()
{

    return 0;
}