
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=(n*2)-2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int k=temp;k>=1;k--)
        {
            cout<<" ";
        }
        for(int l=i;l>=1;l--)
        {
            cout<<l;
        }
        cout<<endl;
        temp-=2;
    }
}