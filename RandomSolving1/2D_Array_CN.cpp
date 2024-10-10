#include<iostream>
using namespace std;
/*void function(int **arr,int n)
{
   
}*/
int main()
{
    int n;
    cout<<"Enter the rows and column\n";
    cin>>n;
    int m=n;
    int a[n][n];
    //int b[n][n];
    cout<<"Enter the elements in matrix"<<endl;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
           cin>>a[i][j];
       }
    }
    cout<<"MATRIX A\n";
    for(int i=0;i<n;i++)
    {
       for(int k=0;k<m;k++)
       {
          for(int j=0;j<n;j++)
          {
            cout<<a[i][j]<<"\t";
          }
          cout<<endl;
        
       }
       m--;
    }
}