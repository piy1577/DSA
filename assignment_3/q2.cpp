#include <iostream>
using namespace std;

class bank_account
{
    string name;
    long account_number;
    string type;
    int Balance;

public:
    void read();
    void deposit(int money);
    void withdrawn(int cash);
    int balance();
};

void bank_account::read()
{
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter your account number: ";
    cin >> account_number;
    cout << "Enter the type of your account: ";
    cin >> type;
    Balance = 0;
}

void bank_account::deposit(int money)
{
    Balance += money;
    cout << "Cash Successfully Deposited" << endl;
}

void bank_account::withdrawn(int cash)
{
    if (cash <= Balance)
    {
        Balance -= cash;
        cout << "Money successfully Withdrawn" << endl;
    }
    else
    {
        cout << "Not enough balance" << endl;
    }
}

int bank_account::balance()
{
    return Balance;
}

int main()
{
    bank_account cus1, cus2, cus3, cus4, cus5;
    cout << "Enter the details of first customer" << endl;
    cus1.read();
    cout << "Enter the details of second customer" << endl;
    cus2.read();
    cout << "Enter the details of third customer" << endl;
    cus3.read();
    cout << "Enter the details of forth customer" << endl;
    cus4.read();
    cout << "Enter the details of fifth customer" << endl;
    cus5.read();

    cus1.deposit(1000);
    cus1.withdrawn(52);
    cout << cus1.balance() << endl;
    cus2.deposit(30);
    cus2.withdrawn(100);
    cout << cus2.balance() << endl;

    return 0;
}