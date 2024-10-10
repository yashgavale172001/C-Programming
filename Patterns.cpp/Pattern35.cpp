// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1
#include<iostream>
using namespace std;
int main()
{
    int n=1;
   // cin>>n;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=2*i-1;j++)
        {
            if(j%2!=0)
            {
                cout<<n;
            }
            else{
                cout<<"*";
            }
        }
            n++;
        cout<<endl;
    }
    n--;
    for(int i=4;i>=1;i--)
    {
        for(int j=2*i-1;j>=1;j--)
        {
            if(j%2!=0)
            {
                cout<<n;
            }
            else{
                cout<<"*";
            }
        }
        n--;
        cout<<endl;
    }
}