#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Type number between 1 to 5" << endl;
    cin >> n;

    switch (n) {
        case 1: cout << "Hello" << endl;
                break;
        
        case 2: cout << "Namaste" << endl;
                break;

        case 3: cout << "Hola"<< endl;
                break;

        case 4: cout << "Salute" << endl;
                break;
            
        case 5: cout << "Ciao" << endl;
                break;

        Default: cout << "Try another number"<< endl;
        
    }
}