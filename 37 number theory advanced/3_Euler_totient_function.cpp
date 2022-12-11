#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    rep(i, 2, n + 1)
    {
        arr[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == i)
        {
            for (int j = i; j <= n; j += i)
            {
                arr[j] *= i - 1;
                arr[j] /= i;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}