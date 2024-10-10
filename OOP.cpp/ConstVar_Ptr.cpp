#include<iostream>
using namespace std;
// void f( const int *p)
// {
//     // (*p)++;                       //error you cannot change const variable
// }
int main()
{
    int n;
    cin>>n;
    int  flag=0;
    for(int i=1;i<=i;i++)
    {
        if(n%i==0)
        {
            flag++;
        }
    }
    if(flag==2)
    {
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    // int *p=&i;
    // f(p);

}