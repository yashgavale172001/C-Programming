#include<iostream>
 #include<string.h>
using namespace std;
int main()
{
    char a[10],b[10];
    cout<<"Enter the string\n";
    cin>>a;
    string cpy=strcpy(b,a);
    int len=strlen(b);
    strrev(a);
    cout<<"length of the string b is "<<len<<endl;
    cout<<"string b is "<<cpy<<endl;;
    cout<<"reverse of string is "<<a;
}