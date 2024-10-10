#include<iostream>
using namespace std;
class employee
{
    public:
    int id;
    float salary;
    employee(){cout<<"yash2"<<endl;}
    employee(int a)
    {
        id=a;
        salary=122222.12;
        cout<<"yash1"<<endl;
    }
};
class programmer :employee
{
   public:
   programmer(int c)
   {
     id=c;
     cout<<"yash3"<<endl;
   }
   int languagecode=123;
   void printout()
   {
     cout<<id<<" and "<<languagecode;
   }
};
int main()
{
     programmer p(101);
    employee yash(12),jayuhh(13);
    cout<<yash.salary;
    cout<<jayuhh.id;
   // programmer g(101);
   // programmer p(101);
    p.printout();

}