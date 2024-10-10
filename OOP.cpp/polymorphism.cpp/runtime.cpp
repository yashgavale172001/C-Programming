//we can achieve the polymorphism  by 
//1.function overloading and 
//2.operator overloading  





#include <iostream>
using namespace std;
#include <string>
class vehicle
{
    public:
    vehicle()
    {
        cout << "vehicles constructor" << endl;
    }
    int color;

    void print()
    {
        cout << "vehicles print function" << endl;
    }
    virtual int message()
    {
        cout<<"message From parent class "<<endl;
    }
};
class car:public vehicle
{
    public:
    car()
    {
        cout << "cars constructor" << endl;
    }
    string model;
    int print()
    {
        cout << "Cars print function" << endl;
    }
    int message()
    {
        cout<<"From message function car"<<endl;
    }
    
};
int main()
{
    vehicle v;
    v.print();

    car c;
    c.print();

    vehicle *v1=new vehicle;
    vehicle *v2;
    v2=&c;  // if you strore childs obj in parents obj then will always show properties of parents 
    v2->print(); //if there is no print function in vehicle class then it will show error
    v2->message();

}