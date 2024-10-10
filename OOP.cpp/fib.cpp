#include<iostream>
using namespace std;
class fibo
{   
    int a,b,c,n;
    public:
    void read()
    {
        cout<<"\nEnter the range of series\n";
        cin>>n;
        a=0;
        b=1;
    }
    void ctsi()
    {
      cout<<a<<"\t"<<b<<"\t";
      for(int i=2;i<=n;i++)
      {
        c=a+b;
        cout<<c<<"\t";
        a=b;
        b=c;

      }
    }
};
int main()
{
    fibo series[3];
    for(int i=0;i<3;i++)
    {   
        series[i].read();
        cout<<"fibonacci series is\n";
        series[i].ctsi();
    }
}