#include<iostream>
using namespace std;
class student{
    public:
    int marks;
    void getMarks(){
        cout<<"Enter marks:";
        cin>>marks;
    }
    string result(){
        if(marks>=33){
            return "pass";
        }
        else{
            return"fail";
        }
    }
    void display(){
        cout<<"Result"<<result();
    }
};
int main(){
    student s;
    s.getMarks();
    s.display();
}