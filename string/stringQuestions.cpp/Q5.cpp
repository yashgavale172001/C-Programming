// 5.Write a C program to count count of number of vowels and 
// number of consonants in the given string.

#include<iostream>
using namespace std;
int main()
{
   char a[20];
   int c=0,w=0;
   gets(a);
   for(int i=0;a[i]!='\0';i++)
   {
     if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
     {
         w++;
     }
     else
     {
        if(a[i]<=57 && a[i]>=48)
        {
            continue;
        }
        else
        {
            c++;
        }
     }
   }
   cout<<"consonants are "<<c<<endl;
   cout<<"wovels are "<<w<<endl;
}