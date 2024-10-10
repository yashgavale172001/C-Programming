#include<iostream>
using namespace std;
class swap
{
    int a,b;
    public:
    swap()
    {
       cout<<"Enter the value of a and b"<<endl;
       cin>>a;
       cin>>b;
    }
    swap(int x,int y)
    {
        a=x;
        b=y;
    }
    swap(swap &p)
    {
       a=p.a;
       b=p.b;
    }
    void interchange()
    {
        int t=a;
        a=b;
        b=t;
        cout<<"After swaping a and b is "<<endl;
        cout<<"value of a is "<<a<<" and b is "<<b;
    }
};
int main()
{
    swap a1; //default constructor
    swap a2(5,12); // parameterised constructor
    swap a3(a1); //copy constructor
    a1.interchange();
    a2.interchange();
    a3.interchange();
}