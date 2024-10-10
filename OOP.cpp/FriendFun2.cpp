

#include<iostream>
using namespace std;
int main()
{
    char str[]="move#string#to#first";
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='#')
        {
           for(int j=0;str[j]!='\0';j++)
           {
              if(str[j]!='#')
              {
                int temp=str[i];
                str[i]=str[j];
                str[j]=temp;
              }
           }
        }
    }
    cout<<str;
}

// OR

// #include<bits/stdc++.h>
// using namespace std;
// char *moveHash(char str[],int n)
// {
//     char str1[100],str2[100];
//     int i,j=0,k=0;
//     for(i=0;str[i];i++)
//     {
//         if(str[i]=='#')
//         str1[j++]=str[i];
//         else
//         str2[k++]=str[i];
//     }
//     strcat(str1,str2);
//     cout<<str1;
// }
// int main()
// {
//     char a[100], len;
//     cin>>a;
//     len = strlen(a);
//     moveHash(a, len);
//     return 0;
// }