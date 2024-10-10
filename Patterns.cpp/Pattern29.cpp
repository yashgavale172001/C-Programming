
// 1 2 3 4 5 
// 2     5 
// 3   5 
// 4 5 
// 5 
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            if(i==1)
            {
                cout<<j<<" ";
            }
           else if(i==j || j==5)
            {
                cout<<j<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}