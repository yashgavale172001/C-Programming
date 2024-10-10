#include<iostream>
#include<string.h>
using namespace std;

class A
{
    public:
    string name;
    int age;
    // A()
    // {

    // }
    A(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};
class B:public A{
    public:
    string percentsge;
    string gf;
   B(string per,string gf):A ("yash",22)
   {
    this->gf=gf;
    this->percentsge=per;
   }
   void display()
    {
        cout<<A::name<<endl;
        cout<<A::age<<endl;
        cout<<gf<<endl;
        cout<<percentsge;
    }
};
 int main()
    {
        B b("78.7","jayashree");
        //A a; error no default constructor for class A
        b.display();
    }