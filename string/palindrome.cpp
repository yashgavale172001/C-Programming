#include<iostream>
using namespace std;
#include<string.h>
void reverse(char *p,char *q,int x)
{
    
    for(int i=x-1;*p='\0';x--)
    {
        *q=*p;
        *q++;
    }
    *q='\0';
    
}
void palindrome(char *p,char *q,int x)
{
    int l,flag=0;
    for(int i=0;i<=x;i++)
    {
        l=*p-*q;
        if(l!=0)
        {
            flag=1;
            cout<<"string is not palindome ";
            break;
        }
        *p++;
        *q++;
    }
    if(flag==0)
    {
        cout<<"string is palindrome";
    }
}
int main()
{
    char a[10],b[10];
    cout<<"Enter the string\n";
    gets(a);
    int x=strlen(a);
    reverse(a,b,x);
    palindrome(a,b,x);
}
