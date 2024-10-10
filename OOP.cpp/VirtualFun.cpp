#include<iostream>
using namespace std;
class vehicle
{
    public:
  void print()
  {
    cout<<"vehicles print"<<endl;
  }
};
class car:public vehicle
{
    public:
    void print()
    {
        cout<<"cars print function"<<endl;
    }
};
int main()
{
    vehicle *v;
    car c;
    v=&c;
    v->print();
    //c.print();
}