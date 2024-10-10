#include<iostream>
using namespace std;
class Complex
{
  double a,b;
  public:
  void set()
  {
    cout<<"Enter the a and b "<<endl;
     cin>>a>>b;
  }
  void display()
  {
    cout<<"Complex number is "<<a<<" + i"<<b<<endl;
  }
  friend void printcomplex(Complex o1,Complex o2);
};
 void printcomplex(Complex o1,Complex o2)
  {
     cout<<"Complex Number is "<<o1.a+o2.a<<" + "<<o2.b+o1.b<<"i"<<endl;
  }
int main()
{
    Complex o1,o2,sum;
    o1.set();
    o2.set();
    o1.display();
    o2.display();
    //sum.printcomplex(o1,o2);
    printcomplex(o1,o2);

}