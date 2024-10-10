// 4.Write a C program to accept string and print it in the reverse
// order.
// Eg:
// Input String: India is my country
// Output String: yrtnuoc ym si aidnI




#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    char a[20],b[20];
    int j=0,k=0;
    gets(a);
    int l=strlen(a);
    for(int i=l-1;i>=0;--i)
    {
      b[j]=a[i];
      j++;
    }
    b[j]='\0';
    cout<<b<<endl;
     for(int i=0;b[i]!='\0';i++)
    {
      a[i]=b[i];
    }
    cout<<a;
   
}