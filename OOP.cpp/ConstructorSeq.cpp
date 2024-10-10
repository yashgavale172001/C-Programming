#include<iostream>
using namespace std;
class vehicle
{
    public:
    string color;
    // vehicle()
    // {
    //     color="red";
    //     cout<<"vehicles constructor call"<<endl;
    // }
     vehicle(string r)
    {
        color=r;
        cout<<"vehicles para meterised constructor call"<<endl;
    }
    ~vehicle()
    {
        cout<<"vehicle destructor call"<<endl;
    }

};
class car:public vehicle
{
   protected:
   int maxSpeed;
   car():vehicle("red")                                   
   {
    maxSpeed=300;
    cout<<"cars constructor call"<<endl;
   }
   ~car()
   {
    cout<<"car destructor call"<<endl;
   }
};
class bicycle:public car
{
    public:
    int gears;
    bicycle()
    {
        gears=7;
        cout<<"bicycles constructor call"<<endl;
    }
    ~bicycle(){
        cout<<"bicycles destructor call"<<endl;
    }
};
int main(){
  bicycle b;

}