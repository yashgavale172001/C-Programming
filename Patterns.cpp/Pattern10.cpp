//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
#include<bits\stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<=4;i++)
    {
        char ch='A';
        for(int j=4;j>i;j--)
        {
            cout<<" ";
        }
        //int br=(2*i+1)/2;
        for(int k=1;k<=(2*i)+1;k++)
        {
            cout<<ch;
            if(k<=i)
            ch++;
            else{
                  ch--;
            }
        }
        cout<<endl;
    }
}

