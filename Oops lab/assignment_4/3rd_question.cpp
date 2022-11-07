#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

// int multiplication(int a, int b)
// {
//     return a * b;
// }

int main()
{
    int n = 0;
    for (int i = 0; i < 10; i++)
    {
        n = sum(n, i);
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     n = multiplication(n, i);
    // }
    cout << n;
}