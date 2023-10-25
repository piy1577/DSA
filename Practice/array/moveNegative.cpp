// Move negative element to one side of the array

#include <bits/stdc++.h>
using namespace std;

void moveNegative(vector<int> &arr)
{
    int i = -1, j = 0;
    while (j < arr.size())
    {
        if (arr[j] < 0)
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    moveNegative(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// Input
//  5
//  3 -2 5 -4 1 6