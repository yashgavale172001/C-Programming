#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the order "<<endl;
    cin>>n;
    int a[n][n];
    cout<<"Enter the Elements in Matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j)
            {
                cin>>a[i][j];
            }
            else
            {
                a[i][j]=0;
            }
        }
        cout<<endl;
    }
    cout<<"upper triangular matrix is"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
//to convert upper triangular matrix into lower triangular matrix
//just change if(i<=j) into if(i>=j)