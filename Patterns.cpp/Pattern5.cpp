//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 
#include<bits\stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        //space
        for(int j=5;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=5;i>=1;i--)
    {
        //space
        for(int j=5;j>i;j--)
        {
            cout<<" ";
        }
        //star
        for(int k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}