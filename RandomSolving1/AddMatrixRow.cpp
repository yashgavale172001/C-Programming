#include<iostream>
using namespace std;
int main()
{
    int n,s=0,s1=0,x=0,y=0;
    cout<<"Enter the order of matrix"<<endl;
    cin>>n;
    int a[n][n];
    cout<<"Enter the elements in array"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Matrix A"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
            s=s+a[i][j];
        }
        cout<<s<<endl;
        x=x+s;
        s=0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            s1=s1+a[j][i];
        }
        cout<<s1<<"\t";
        y=y+s1;
        s1=0;
    }
    cout<<x+y;

}