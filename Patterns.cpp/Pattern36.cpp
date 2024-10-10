
// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1
#include<iostream>
using namespace std;
int main()
{
    int n=1;
    int temp;
   // cin>>n;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=2*i-1;j++)
        {
            if(j%2!=0)
            {
                cout<<n;
                n++;
            }
            else{
                cout<<"*";
            }
        }
        temp=n;
        cout<<endl;

        temp=temp-i;
    }
    int temp1=temp;
    for(int i=4;i>=1;i--)
    {
        
        for(int j=2*i-1;j>=1;j--)
        {
            if(j%2!=0)
            {
                cout<<temp;
                temp++;
            }
            else{
                cout<<"*";
            }
        }
        temp=temp-temp1;
        temp1-=2;
        //n--;
        cout<<endl;
    }
}