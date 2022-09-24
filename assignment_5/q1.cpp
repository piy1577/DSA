#include <iostream>
using namespace std;

class myself
{
public:
    string name = "Piyush";
    int age = 18;
    string place = "Chandigarh";
};

void print(myself a)
{
    cout << "MY name is " << a.name << "\nI am a good boy\nI am " << a.age << " years old \nI live in " << a.place << endl;
}

int main()
{
    myself m;
    print(m);
    return 0;
}