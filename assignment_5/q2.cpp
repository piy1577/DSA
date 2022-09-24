#include <iostream>
using namespace std;

class anything
{
public:
    static int count;
    static void get(int x)
    {
        count = x;
    }
    static int increment()
    {
        count++;
        return count;
    }
};
int anything::count = 0;
int main()
{
    anything obj;
    anything::get(0);
    for (int i = 0; i < 10; i++)
    {
        cout << obj.increment() << endl;
    }
    return 0;
}