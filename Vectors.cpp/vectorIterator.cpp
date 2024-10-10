#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> v;
    int num;
    for(int i=0;i<=4;i++)
    {
        cout<<"Enter the"<<i+1<<" element ";
        cin>>num;
        v.push_back(num);
    }
    //cout<<v.begin();
    vector<int>:: iterator itr=v.begin();
    cout<<"Value of iterator with v.begin() "<<*itr<<endl;  //1
    v.insert(itr+3,5,222); // iterator(position),number of times,number to insert
     for(int i=0;i<v.size();i++)
    {
       // cout<<"Enter the"<<i+1<<" element ";
        cout<<v[i]<<" ";
    }
}