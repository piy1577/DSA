#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
    bool gender;
    public:

    Student(string s, int a, bool g){
        name = s;
        age =a;
        gender =g;
    }

    void getName(){
        cout << name << endl;
        cout << age << endl;
        if(gender ==0){
            cout << "Male" << endl;
        }else {
            cout << "Female"<< endl;
        }
    }
};

int main() {
    Student a("Tim", 21, 0);
    Student b("Sim", 20, 1);
    Student c("Jim", 21, 0);

    a.getName();
    b.getName();
    c.getName();
    return 0;
}