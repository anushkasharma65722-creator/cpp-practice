#include<iostream>
using namespace std;
class Calculate{
    public:
    int square(int n){
        return n*n;
    }
    int cube(int n){
        return n*n*n;
    }
};
int main(){
Calculate c;
cout<<"square="<<c.square(5)<<endl;
cout<<"Cube"<<c.cube(5);
}















