//      1
//     232
//    34543
//   4567654
//  567898765
#include<iostream>
using namespace std;
int main()
{
    int r=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            cout<<" ";
        }
        int r1=r;
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<r1;
            if(k>=i)
            {
                r1--;
            }
            else{
                r1++;
            }
        }
        r++;
        cout<<endl;
    }
}