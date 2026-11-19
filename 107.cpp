#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int salary;
    void getData(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter salary:";
        cin>>salary;
    }
    void display(){
        cout<<"Name="<<name<<endl;
        cout<<"salary"<<salary;
    }
};
int main(){
    Employee e;
    e.getData();
    e.display();
    
}