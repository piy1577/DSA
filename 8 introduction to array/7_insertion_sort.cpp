#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int com = 0;
    int swap = 0;
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        com++;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            swap++;
            j--;
        }
        arr[j + 1] = current;
    }

    cout << endl
         << com << endl
         << swap << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
// 3 8 1 7
// 1 3 8 7
// 1 3 7 8