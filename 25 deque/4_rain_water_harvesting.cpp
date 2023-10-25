#include <iostream>
using namespace std;

// recursion
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

// normal function or iterative method
int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    int i = 0, j = 1;
    int ans = 0;
    for (int k = 2; k <= n; k++)
    {
        ans = i + j;
        i = j;
        j = ans;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    cout << fibonacci(n) << endl;
}