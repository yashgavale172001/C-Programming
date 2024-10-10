
// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA
#include<iostream>
using namespace std;
int main()
{
    char ch='A';
    for(int i=1;i<=5;i++)
    {
        char y=ch;
        // for(int l=5;l>=i;l--)
        // {
        //     cout<<" ";
        // }
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
        cout<<endl;
    }
}
