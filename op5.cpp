#include<iostream>
using namespace std;

class Product
{
public:
    int id;
    string name;
    float price;

    void getData()
    {
        cout << "Enter Product ID: ";
        cin >> id;

        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Price: ";
        cin >> price;
    }

    void display()
    {
        cout << "\nProduct ID = " << id << endl;
        cout << "Product Name = " << name << endl;
        cout << "Price = " << price << endl;
    }
};

int main()
{
    Product *p = new Product;

    p->getData();
    p->display();

    delete p;

    return 0;
}