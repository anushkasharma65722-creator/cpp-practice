
#include<iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float salary;

    Employee()
    {
        id = 101;
        name = "Rahul";
        salary = 25000;
    }

    Employee(Employee &e)
    {
        id = e.id;
        name = e.name;
        salary = e.salary;
    }

    void display()
    {
        cout << "ID = " << id << endl;
        cout << "Name = " << name << endl;
        cout << "Salary = " << salary << endl;
    }
};

int main()
{
    Employee e1;
    Employee e2(e1);

    e2.display();

    return 0;
}
