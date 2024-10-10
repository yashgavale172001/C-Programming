// NOT WORKING
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int n,x,j;
   cout<<"how many terms in sine series"<<endl;
   cin>>n;
   cout<<"Enter the value of x"<<endl;
   cin>>x;
   int f,p,term=1;
   float d,sum=0;
   for(int i=1;i<=n;i+2)
   {
    f=1;
    for(j=i;i>=1;j--)
    {
      f=f*j;
    }
    p=pow(x,i);
    d=(float)p/f;
    if(term%2==0)
    {
      sum=sum-d;
      cout<<"-"<<p<<"/"<<f;
    }
    else
    {
        sum=sum+d;
        cout<<"+"<<p<<"/"<<f;
    }
    term++;

   }
   cout<<"sum of the series is "<<sum;
}