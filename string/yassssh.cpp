#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[10],b[10],ch;
    int j=0,n,i;
    cout<<"Enter the string"<<endl;
    cin>>a;
    cout<<"Enter the character"<<endl;
    cin>>ch;
    cout<<"how many times that character should repeated "<<endl;
    cin>>n;
    int len=strlen(a);
    int mid=len/2;
    for(int i=0;a[i]!='\0';i++)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    for(i=mid;i<mid+n;i++)
    {
      a[i]=ch;
    }
    a[i]='\0';
    int m=mid;
    
    for(i=mid+n;b[m]!='\0';i++)
    {
       a[i]=b[m];
       m++;
    
    }
    a[i]='\0';
    cout<<a;


}