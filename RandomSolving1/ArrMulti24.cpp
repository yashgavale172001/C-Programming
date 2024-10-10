#include<iostream>
using namespace std;
int  main()
{
    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    int a[n]={2,3,4,6,1},s=0,s1=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           s=a[i]*a[j];
           if(s==24)
           {
               cout<<a[i]<<" "<<a[j]<<endl;
           }
           for(int k=j+1;k<n;k++)
           {
               s1=s*a[k];
               if(s1==24)
               {
                   cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
               }
               
           }
        }
    }
}