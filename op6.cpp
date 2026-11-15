#include<iostream>
using namespace std;

class BankAccount
{
private:
    int account;
    int balance;

public:
    void setData()
    {
        account = 101;
        balance = 5000;
    }

    void deposit()
    {
        int amount;

        cout << "Enter Deposit Amount: ";
        cin >> amount;

        balance = balance + amount;
    }

    void display()
    {
        cout << "Account Number = " << account << endl;
        cout << "Balance = " << balance;
    }
};

int main()
{
    BankAccount b;

    b.setData();
    b.deposit();
    b.display();

    return 0;
}
