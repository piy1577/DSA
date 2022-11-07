#include <iostream>
using namespace std;

class node
{
    node *next[26];
    bool end;
    node()
    {
        for (int i = 0; i < 26; i++)
        {
            next[i] = NULL;
        }
        end = false;
    }
};