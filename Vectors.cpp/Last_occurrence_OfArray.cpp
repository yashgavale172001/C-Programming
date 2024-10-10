#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> v(9);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
       cin>>v[i];
    }

    int idx;
    int x=5;
    for(int i=0;i<v.size();i++){
        if(v[i]==x)
        {
            idx=i;
        }
    }
    cout<<"last occurrence of "<<x<<" is "<<idx;
}