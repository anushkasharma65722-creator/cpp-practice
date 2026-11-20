
#include<iostream>
using namespace std;

class Bank
{
public:
    string name;
    int account;
    float balance;

    Bank()
    {
        name = "Aditya";
        account = 12345;
        balance = 5000;
    }

    Bank(Bank &b)
    {
        name = b.name;
        account = b.account;
        balance = b.balance;
    }

    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Account = " << account << endl;
        cout << "Balance = " << balance << endl;
    }
};

int main()
{
    Bank b1;
    Bank b2(b1);

    cout << "Copied Account Details:" << endl;
    b2.display();

    return 0;
}
