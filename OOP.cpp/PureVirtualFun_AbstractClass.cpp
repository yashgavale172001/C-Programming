#include<iostream>
using namespace std;
class vehicle
{
    public:
    vehicle()
    {
        cout<<"Vehicles constructor"<<endl;
    }
    virtual void  print()=0;
};
class car:public vehicle{
    public: 
     void print()       // if you didnt define this function in child class then child class
     {                  //aslo be a abstract class
        cout<<"cars print function"<<endl;
    }
};
int main()
{
    car c;
    c.print();
}