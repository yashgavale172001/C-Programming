//hash and stars

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int h=0,s=0;
    for(auto i:str)
    {
        if(i=='#')
        {
            h++;
        }
        if(i=='*')
        {
            s++;
        }
    }
    cout<<s-h;
}