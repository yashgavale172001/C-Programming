#include<iostream>
using namespace std;
class employee
{
       int a,b,c;
       public:
       int d,e;

       void setData(int a,int b,int c);
       void getData()
       {
        cout<<"value of a is:"<<a<<endl;
        cout<<"value of a is:"<<b<<endl;
        cout<<"value of a is:"<<c<<endl;
        cout<<"value of a is:"<<d<<endl;
        cout<<"value of a is:"<<e<<endl;
       // cout<<"value of a is:"<<endl;
       }
};

void employee::setData(int x,int y,int z)
{
     a=x;
     b=y;
     c=z;
}
int main()
{
  employee emp;
  emp.d=890;
  emp.e=23;
  emp.setData(1,2,3);
  emp.getData();
}