#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)
int p = 31;
const int N = 1e5 + 3, mod = 1e9 + 7;
vector<long long> power(N);

long long calculate_hash(string s)
{
    long long hash = 0;
    for (int i = 0; i < s.length(); i++)
    {
        hash = (hash + (s[i] - 'a' + 1) * power[i]) % mod;
    }
    return hash;
}

int main()
{
    power[0] = 1;
    for (int i = 1; i < N; i++)
    {
        power[i] = (power[i - 1] * p) % mod;
    }

    vector<string> strings = {"aa", "ab", "aa", "b", "cc", "aa"};
    vector<long long> hashes;
    for (auto w : strings)
    {
        hashes.push_back(calculate_hash(w));
    }

    sort(hashes.begin(), hashes.end());

    int distinct = 0;
    for (int i = 0; i < hashes.size(); i++)
    {
        if (i == 0 || hashes[i] != hashes[i - 1])
        {
            distinct++;
        }
    }

    cout << distinct << endl;
    return 0;
}