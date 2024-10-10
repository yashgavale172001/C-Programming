#include<bits\stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' )
        {
            a[i]='%';
        }
    }
    for(int i=0;b[i]!='\0';i++)
    {
        if(b[i]!='a' && b[i]!='e' && b[i]!='i' && b[i]!='o' && b[i]!='u' )
        {
            b[i]='#';
        }
    }
    transform(c.begin(), c.end(), c.begin(), ::toupper);
    string s3=a+b+c;
    cout<<s3;
}