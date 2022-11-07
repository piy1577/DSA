#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << alphabet[j] << " ";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << alphabet[j] << " ";
        }
        cout << endl;
    }

    return 0;
}