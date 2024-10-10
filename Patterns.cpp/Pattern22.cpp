// E
// DE
// CDE
// BCDE
// ABCDE
#include<iostream>
using namespace std;
int main()
{
    for(char i=69;i>=65;i--)
    {
        for(char j=i;j<=69;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}