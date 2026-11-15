#include<iostream>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    float salary;

    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee ID = " << id << endl;
        cout << "Name = " << name << endl;
        cout << "Salary = " << salary << endl;
    }
};

int main()
{
    static Employee e;

    e.getData();
    e.display();

    return 0;
}