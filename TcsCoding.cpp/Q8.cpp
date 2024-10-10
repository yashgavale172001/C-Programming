//encryption of String

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //string s="abcdefghijklmnopqrstuvwxyz";
    cout<<"Enter the input string"<<endl;
    string s1;
    //cin>>s1;
    getline(cin,s1);
    string ans="";
    for(int i=0;s1[i]!='\0';i++)
    {
        if(s1[i]<='u')
        {
            ans+=(s1[i]+5);
        }
        else{
            ans+=(s1[i]-'v'+'a');
        }
    }
    cout<<ans;

}