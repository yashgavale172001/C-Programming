#include<iostream>
using namespace std;
int addition(int a,int b)
{
    int c=a+b;
    cout<<c<<endl;
    int d=(b-a);
    cout<<d<<endl;
    return 0;
}
int main()
{
    int a;
    int b;
    cout<<"enter the number first :"<<endl;
    cin>>a;
    cout<<"enter the number second :"<<endl;
    cin>>b;
    addition(a,b);
}