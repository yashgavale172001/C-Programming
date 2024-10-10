// 1 
// 8 2 
// 14 9 3 
// 19 15 10 4 
#include<iostream>
using namespace std;
int main()
{
    int n=1;
    int y=7,x=0;
    int z;
    cout<<"Enter the number "<<endl;
    cin>>z;
    for(int i=1;i<=z;i++)
    {
        int t=n;
        int a=y;
        for(int j=1;j<=i;j++)
        {
            cout<<t<<" ";
            t=t-a;
            a++;
        }
        n=n+(7-x);
        x++;
        y--;
        cout<<endl;
    }
}