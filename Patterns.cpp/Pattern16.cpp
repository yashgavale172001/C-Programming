// X O O O X 
// O X O X O 
// O O X O O 
// O X O X O 
// X O O O X 
#include<bits\stdc++.h>
using namespace std;
int main()
{
     for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==j)
            {
                cout<<"X ";
            }
            else if((i-1)==(5-j)){
                cout<<"X ";
            }
            else{
                cout<<"O ";
            }
        }
        cout<<endl;
    }
}