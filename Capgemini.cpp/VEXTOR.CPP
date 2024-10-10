#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(10,1);
    v.push_back(10);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
       cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>v2={1,2,3,4,5,6};
    cout<<v2[4];

}