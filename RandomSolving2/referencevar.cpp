#include<iostream>
using namespace std;
void area(float &ta)
{
    float b,h;
    cin>>b>>h;
    ta=0.5*b*h;
}
void areac(float &ca)
{
   float r;
   cin>>r;
   ca=3.14*r*r;
}
void arear(float &ar)
{
    float l,b;
    cin>>l>>b;
    ar=l*b;
}
int main()
{
    float at,ac,ar;
    area(at);
    cout<<"Area of triangle is "<<at<<endl;
    areac(ac);
    cout<<"Area of circle is "<<ac<<endl;
    arear(ar);
    cout<<"Area of rectangle is "<<ar<<endl;
}