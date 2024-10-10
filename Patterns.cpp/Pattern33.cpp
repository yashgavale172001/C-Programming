// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****
#include<iostream>
using namespace std;
int main()
{
    int temp=8;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=temp;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(k%2!=0)
            {
                cout<<i;
            }
            else{
                cout<<"*";
            }
        }
        for(int l=1;l<=temp;l++)
        {
            cout<<"*";
        }
        temp--;
        cout<<endl;
    }
}