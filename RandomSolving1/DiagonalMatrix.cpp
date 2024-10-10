

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the order of matrix"<<endl;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          a[i][j]=0;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          if(i==j)
          {
              cin>>a[i][j];
          }
        }
        
    }
    cout<<"Diagonal of matrix is"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
}

