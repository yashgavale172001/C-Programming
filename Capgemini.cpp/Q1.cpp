//input
// xxeeqqlldree

//output
// d1e4l2q2r1x2

//input
// ssseaaammmrr

//output
// a3e1m3r2s3
#include<bits\stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=0;s[i]!='\0';i++)
    {
        m[s[i]]=m[s[i]]+1;
    }
    for(auto &pr:m)
    {
        cout<<pr.first<<pr.second;
    }
}