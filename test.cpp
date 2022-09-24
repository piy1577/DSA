#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)

int gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (gcd(n, i) == 1)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

// 9 6 ->6 9%6