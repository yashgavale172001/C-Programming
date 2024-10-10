#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(5,7);
    //v.erase(v.begin()+3);
    v.at(3)=12;
    v.erase(v.begin()+2);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}