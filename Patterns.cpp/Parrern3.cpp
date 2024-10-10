//      *     
//     ***    
//    *****   
//   *******  
//  ********* 
// ***********

#include<bits\stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<=5;i++)
    {
        //space
        for(int j=1;j<5-i+1;j++)
        {
            cout<<" ";
        }
        //star
        for(int k=1;k<=2*i+1;k++)
        {
            cout<<"*";
        }
        for(int j=1;j<5-i+1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}