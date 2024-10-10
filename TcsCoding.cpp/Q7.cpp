#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of N"<<endl;
    cin>>n;
    int m=1;
    while(n>0)
    {
        int d=n%10;
        m=d*m;
        n=n/10;
    }
    cout<<m;
}