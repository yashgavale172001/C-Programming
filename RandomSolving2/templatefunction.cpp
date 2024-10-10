#include<iostream>
using namespace std;
template<class T>
void swipe(T &a,T &b)
{
    T t;
    t=a;
    a=b;
    b=t;
}
int main()
{
    float a,b;
    cout<<"Enter any float value "<<endl;
    cin>>a>>b;
    swipe(a,b);
    cout<<a<<" "<<b<<endl;
    int x,y;
    cout<<"Enter any two integer values"<<endl;
    cin>>x>>y;
    swipe(x,y);
    cout<<x<<" "<<y<<endl;
}