// #include <bits/stdc++.h>
// using namespace std;
// #define vi vector<int>
// #define vii vector<pair<int, int>>
// #define vvi vector<vi>
// #define ff first
// #define ss second
// #define rep(i, a, b) for (int i = a; i < b; i++)

// vi prefix(string s)
// {
//     int n = s.size();
//     int len = 0, i = 1;
//     vi lps(n, 0);
//     lps[0] = 0;

//     while (i < n)
//     {
//         if (s[i] == s[len])
//         {
//             lps[i] = len;
//             i++;
//             len++;
//         }
//         else
//         {
//             if (len != 0)
//             {
//                 len = lps[len - 1];
//             }
//             else
//             {
//                 lps[i] = 0;
//                 i++;
//             }
//         }
//     }

//     return lps;
// }

// int main()
// {
//     string s = "onionionspl";
//     string t = "onions";
//     vi lps = prefix(t);
//     for (int k = 0; k < lps.size(); k++)
//     {
//         cout << lps[k] << " ";
//     }
//     cout << endl;
//     int n = s.size(), m = t.size(), i = 0, j = 0;

//     while (i < n)
//     {
//         if (s[i] == t[j])
//         {
//             i++;
//             j++;
//         }
//         else
//         {
//             if (j != 0)
//             {
//                 j = lps[j - 1];
//             }
//             else
//             {
//                 i++;
//             }
//         }

//         if (j == m)
//         {
//             cout << i - j << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)

vi prefix(string s)
{
    int n = s.size();
    vi lps(n, 0);
    int i = 1, j = 0;
    lps[0] = 0;
    while (i < n)
    {
        if (s[i] == s[j])
        {
            lps[i] = j + 1;
            i++;
            j++;
        }
        else
        {
            if (j != 0)
                j = lps[j - 1];
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

int main()
{
    string s = "onions";
    vi lps = prefix(s);
    string t = "onionionspl";
    int n = t.size(), m = s.size(), j = 0, i = 0;
    while (i < n)
    {
        if (t[i] == s[j])
        {
            i++;
            j++;
        }
        else
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i++;
            }
        }
        if (j == m)
        {
            cout << i - j << endl;
        }
    }
    return 0;
}