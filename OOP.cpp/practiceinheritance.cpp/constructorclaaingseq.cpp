#include<iostream>
using namespace std;
class A
{   public:
    A()
    {

    }
    A(int e,int f)
    {
         cout<<e<<" "<<f;
    }
};
class B
{
    public:
    B()
    {
        
    }
    B(int a,int b)
    {
       cout<<a<<" "<<b;
    }
};
class C:public A,public B
{
    public:
    C(int a,int b,int c,int d,int e,int f):B(c,d),A(e,f)
    {
       cout<<a<<" "<<b;
    }
};
int main()
{
    C yash(11,12,13,14,15,16);
}