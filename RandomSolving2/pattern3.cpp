#include<iostream>
using namespace std;
int main()
{
    for(char i=65;i<=69;i++)
    {
        for(char j=i;j<=69;j++)
        {
            cout<<" "; 
        }
        for(char k=65;k<=i;k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
     for(char i=68;i>=65;i--)
    {
        for(char j=i;j<=69;j++)
        {
            cout<<" ";
        }
        for(char k=65;k<=i;k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
}