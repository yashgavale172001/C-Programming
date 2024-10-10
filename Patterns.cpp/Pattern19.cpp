
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
#include<iostream>
using namespace std;
int main()
{
    int temp=1;
    for(int i=1;i<=5;i++)
    {
        if(i%2==0)
        {
            temp=0;
        }
        else{
            temp=1;
        }
        for(int j=1;j<=i;j++)
        {
            cout<<temp<<" ";
            temp=1-temp;
        }
        cout<<endl;
    }

}