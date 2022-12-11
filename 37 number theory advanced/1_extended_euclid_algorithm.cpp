#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)

// ax + by = gcd(a, b)
//  gcd(d, 0) =d
// gcd(a, b) = gcd(b, a%b)
//  x = y1;
//  gcd= gcd1
//  y = x1-(a/b)*y1

class Triplet
{
public:
    int x, y, gcd;
    void display()
    {
        cout << gcd << " " << x << " " << y << endl;
    }
};

Triplet solution(int a, int b)
{
    if (b == 0)
    {
        Triplet t;
        t.gcd = a;
        t.x = 1;
        t.y = 0;
        return t;
    }

    Triplet t, smallAns = solution(b, a % b);
    t.gcd = smallAns.gcd;
    t.x = smallAns.y;
    t.y = smallAns.x - ((a / b) * smallAns.y);
    return t;
}

int main()
{
    int a, b;
    cin >> a >> b;
    Triplet ans = solution(a, b);
    ans.display();
    return 0;
}