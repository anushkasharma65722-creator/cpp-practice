#include<iostream>
using namespace std;

int a = 100;  // Global variable

int main()
{
    int b = 50;  // Local variable

    cout << "Global variable = " << a << endl;
    cout << "Local variable = " << b << endl;

    return 0;
}