
// ******
// *   *
// *  *
// * *
// **
// *
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=6;i++)
    {
        for(int j=i;j<=6;j++)
        {
            if(i==1)
            {
                cout<<"*";
            }
            else if(j==6 || i==j)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}