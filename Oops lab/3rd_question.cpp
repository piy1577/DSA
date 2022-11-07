#include <iostream>
using namespace std;

int main()
{
    int count[3] = {0};
    int n;
    cin >> n;
    for (; n != -1;)
    {
        if (n > 0)
        {
            count[0]++;
        }
        else if (n < 0)
        {
            count[1]++;
        }
        else
        {
            count[2]++;
        }
        cin >> n;
    }

    cout << "Positive: " << count[0] << endl
         << "Negative: " << count[1] << endl
         << "Zeros: " << count[2] << endl;
    return 0;
}