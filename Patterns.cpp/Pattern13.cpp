#include<bits\stdc++.h>
using namespace std;
int main()
{
    int sp=8;
    for(int i=1;i<=5;i++)
    {
       for(int j=1;j<=i;j++)
       {
        cout<<"*";
       }
       //space 
       for(int k=1;k<=sp;k++)
       {
            cout<<" ";
       }
       sp=sp-2;
       for(int l=1;l<=i;l++)
       {
        cout<<"*";
       }
       cout<<endl;
    }
    int sp1=2;
    for(int i=1;i<=5;i++)
    {
       for(int j=5;j>i;j--)
       {
        cout<<"*";
       }
       //space 
       for(int k=1;k<=sp1;k++)
       {
            cout<<" ";
       }
       sp1=sp1+2;
       for(int j=5;j>i;j--)
       {
        cout<<"*";
       }
       cout<<endl;
    }
}