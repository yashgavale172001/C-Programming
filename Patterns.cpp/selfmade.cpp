// * * * * * * * * * 
// * * * *   * * * * 
// * * *       * * * 
// * *           * * 
// *               * 
// * *           * * 
// * * *       * * * 
// * * * *   * * * * 
//* * * * * * * * * 

// *********
// **** ****
// ***   ***
// **     **
// *       *
// **     **
// ***   ***
// **** ****
// *********
#include<bits\stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<10;i++)
    {
       cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=4;i++)
    {
        for(int j=4;j>=i;j--)
        {
            cout<<"*";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<" ";
        }
        for(int l=4;l>=i;l--)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    for(int i=1;i<=3;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<=(2*4)-(2*i)-1;k++) 
        {
            cout<<" ";
        }
        for(int l=0;l<=i;l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<10;i++)
    {
       cout<<"*";
    }
    cout<<endl;
}