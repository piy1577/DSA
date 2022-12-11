#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)
//(A*B)%m =1, where A, m are given we have to find the value B
// A*b + mq = 1
// as A and m are coprime therefore the gcd(A, m) is 1;
// therefore the equation becomes A*x + m*y = gcd(A, m)

class Triplet
{
public:
    int x, y, gcd;
    void display()
    {
        cout << x << endl;
    }
};

Triplet solution(int a, int b)
{
    if (b == 0)
    {
        Triplet t;
        t.x = 1;
        t.y = 0;
        t.gcd = a;
        return t;
    }

    Triplet t, smallAns = solution(b, a % b);
    t.x = smallAns.y;
    t.gcd = smallAns.gcd;
    t.y = smallAns.x - ((a / b) * smallAns.y);
    return t;
}
int main()
{
    int A, m;
    cin >> A >> m;
    Triplet ans = solution(A, m);
    ans.display();
    return 0;
}