#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;

    static int count;

    Student()
    {
        count++;
    }

    void input()
    {
        cout << "Enter Roll: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;
    }

    static void displayCount()
    {
        cout << "Total Students = " << count;
    }
};

int Student::count = 0;

int main()
{
    Student s1, s2;

    s1.input();
    s2.input();

    cout << "\nTotal Students: ";
    Student::displayCount();

    return 0;
}