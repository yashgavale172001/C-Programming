
// 1
// 121
// 12321
// 1234321
// 123454321
#include<iostream>
using namespace std;
int main()
{
    int x=1;
    for(int i=1;i<=5;i++)
    {
        int y=x;
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<y;
            if(j>=i)
            {
                y--;
            }
            else{
                y++;
            }
        }
        //x++;
        cout<<endl;
    }
}