// 4

// *
// *1*
// *121*
// *12321*
// *121*
// *1*
// *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int temp=1;
         for(int j=1;j<=2*i-1;j++)
         {
    
            if(j==1 || j==2*i-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<temp;
                if(j>=i)
                {
                    temp--;
                 }
                else{
                    temp++;
                }
            }
            }
            cout<<endl;
       
    }
    for(int i=n-1;i>=1;i--)
    {
         int temp=1;
         for(int j=2*i-1;j>=1;j--)
         {
    
            if(j==1 || j==2*i-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<temp;
                if(j<=i)
                {
                    temp--;
                 }
                else{
                    temp++;
                }
            }
            }
            cout<<endl;
       
    }
}