#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of turns"<<endl;
    cin>>n;
    char c='R';
    int d=10;
    int x=0,y=0;
    for(int i=1;i<=n;i++)
    {
        switch(c)
        {
            case 'R':
              x=x+d;
              d=d+10;
              c='U';
              break;

            case 'U':
              y=y+d;
              d=d+10;
              c='L';
              break;

            case 'L':
             x=x-d;
             d=d+10;
             c='D';
             break;

            case 'D':
             y=y-d;
             d=d+10;
             c='A';
             break;

            case 'A':
              x=x+d;
              d=d+10;
              c='R';
              break;
        }
        
    }
    cout<<x<<" "<<y;
}