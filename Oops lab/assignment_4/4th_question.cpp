#include <iostream>
using namespace std;

class parent
{
private:
    int gold = 60000;

protected:
    int property = 35000;

public:
    int salary = 1000;

    int gold_value()
    {
        return gold;
    }
};

class child : public parent
{
public:
    int property_value()
    {
        return property;
    }
};

int main()
{
    parent p;
    child c;
    cout << "value of gold is: " << p.gold_value() << endl;
    cout << "value of property is: " << c.property_value() << endl;
    cout << "value of salary is: " << p.salary << endl;
    return 0;
}