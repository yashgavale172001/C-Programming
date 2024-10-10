// 3.Write a C program to print count of number characters in 
// given string.

#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    char a[10];
    int c=0;
    cout<<"Enter the character\n";
    gets(a);
    int l=strlen(a);
    for(int i=0;i<=l;i++)
    {
        if(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122)
        {
            continue;
        }
        if(a[i]>=48 && a[i]<=57)
        {
            c++;
        }
    }
    cout<<"characters in string are "<<c;

}