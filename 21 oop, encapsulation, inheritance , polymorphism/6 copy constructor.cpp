#include <iostream>
using namespace std;

class student {
    string name;
    int age;
    bool gender;

    public:
    student() {
        cout << "Default constructor" << endl;
    }

    student(student &a){
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    student(string s, int a, bool g){
        name = s;
        age = a;
        gender = g;
    }

    void print(){
        cout << name << endl;
        cout << age << endl;

        if(gender ==0){
            cout << "Male"<<endl;
        }else {
            cout << "Female" << endl;
        }
    }
};

int main() {
    student a("TIm", 20, 0);
    student b;

    student c(a);

    a.print();
    cout << endl;

    c.print();
    return 0;
}