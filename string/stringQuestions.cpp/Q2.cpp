//  2.Write a C program to accept string with multiple spaces from 
// user and print it with a sinlge space as
// a delimiter.
// Eg:
//  Input String:
//  _____India_____is_my_________country______________
//  Output String:
//  India_is_my_country (Consider _ as space)

#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    char a[50];
    int c=0;
    cout<<"Enter the string\n";
    gets(a);
    
    int l=strlen(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ' )
        {
           cout<<a[i];
        }
        if(a[i-1]!=' ' && a[i]==' ')
        {
            cout<<a[i];
        }
        

       
    }
}