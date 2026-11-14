#include<iostream>
using namespace std;

int basicSalary = 20000;  // Global variable

int main()
{
    int HRA = 5000;
    int DA = 3000;
    int deductions = 2000;

    int totalSalary = basicSalary + HRA + DA - deductions;

    cout << "Basic Salary = " << basicSalary << endl;
    cout << "HRA = " << HRA << endl;
    cout << "DA = " << DA << endl;
    cout << "Deductions = " << deductions << endl;

    cout << "Total Salary = " << totalSalary << endl;

    return 0;
}