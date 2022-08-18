#include <iostream>
using namespace std;

bool check_vowel(char ch, string vowel, int count[])
{
    for (int i = 0; i < 5; i++)
    {
        if (ch == vowel[i])
        {
            count[i]++;
            return true;
        }
    }
    return false;
}

int main()
{
    int count[5] = {0};
    string vowel = "aeiou";
    char ch;
    cin >> ch;

    while (check_vowel(ch, vowel, count))
    {
        cin >> ch;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << vowel[i] << ": " << count[i] << endl;
    }

    return 0;
}