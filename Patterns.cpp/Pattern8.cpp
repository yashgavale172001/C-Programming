// 1      1
// 12    21
// 123  321
// 12344321

#include<bits\stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int k=1;k<=(2*4)-(2*i);k++)
        {
             cout<<" ";
        }
        for(int l=i;l>=1;l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
}