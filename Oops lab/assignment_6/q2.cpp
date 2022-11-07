#include <iostream>
using namespace std;
class DB;
class DM
{
    float distance_DM;

public:
    DM(float x)
    {
        distance_DM = x;
    }
    void get()
    {
        cout << distance_DM << endl;
    }
    friend void addition(DM &, DB &);
};

class DB
{
    float distance_DB;

public:
    DB(float x)
    {
        distance_DB = x;
    }
    void get()
    {
        cout << distance_DB << endl;
    }

    friend void addition(DM &, DB &);
};

void addition(DM &a, DB &b)
{
    a.distance_DM = a.distance_DM + (b.distance_DB / 3.28084);
    b.distance_DB = b.distance_DB + (a.distance_DM * 3.28084);
}

int main()
{
    DM a(10.0);
    DB b(32.8084);
    addition(a, b);
    a.get();
    return 0;
}