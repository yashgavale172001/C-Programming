#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=7;j++)
        {
            if(i==1 || i==7 || j==1 || j==7 || j==i ) 
            {
                cout<<"*";
            }
            else if( (j-1)==(7-i))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
}