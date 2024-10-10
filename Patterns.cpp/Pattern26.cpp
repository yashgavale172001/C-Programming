
// 1
// 12
// 1 3
// 1  4
// 12345
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==5)
            {
                cout<<j;
            }
            else if(i==j || j==1)
            {
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}