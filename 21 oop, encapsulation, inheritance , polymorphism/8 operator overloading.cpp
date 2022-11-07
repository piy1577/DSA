#include <iostream>
using namespace std;

class student{
    string name;
    int age;
    bool gender;

    public: 
    student(string s, int a, bool g){
        name = s;
        age = a;
        gender = g;
    }

    student(student &a){
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    bool operator == (student &a){
        if(name ==a.name){
            if(age ==a.age){
                if(gender ==a.gender){
                    return true;
                }
                return false;
            }
            return false;
        }
        return false;
    }
};

int main() {
    student a("Piyush", 18, 0);
    student c(a);

    if(a==c){
        cout << "Same" << endl;
    }else {
        cout << "Not Same"<< endl;
    }

    return 0;
}