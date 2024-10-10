// 6.Write a C program to reverse a given string as below.
// Eg:
// Input String: India is my country
// Output String: aidnI si ym yrtnuoc

#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    // char a[25];
    // gets(a);
    char a[] = "India is my country ";
    int t=0;
    cout<<a<<endl;
    for (int i=0;a[i]!='\0';i++)
    {
        if (a[i]==' ' && a[i-1]!=' ' || a[i+1]=='\0')
        {
            int x=i;
            for (int i=x-1;i>=t;i--)
            {
                cout<<a[i];
            }
            cout<<' ';
            t=i+1;
        }
    }
}

