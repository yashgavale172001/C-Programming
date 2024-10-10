#include<iostream>
using namespace std;
int main()
{
    char a[10];
    cout<<"Enter the string\n";
    cin>>a;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else
        {
          a[i]=a[i]-32;
        }
    }
    for(int j=0;a[j]!='\0';j++)
    {
        cout<<a[j];
    }
}