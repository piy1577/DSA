#include <iostream>
using namespace std;

class student{
    string name;
    public:
    student(){
        cout << "default constructor called "<<endl;
    }

    student(string s){
        name = s;
        cout << "Parametrised constructor called"<<endl;
    }

    ~student() {
        cout << "destructor called" << endl;
    }
};

int main() {
    student a("Piyush");
    student b;

    return 0;
}