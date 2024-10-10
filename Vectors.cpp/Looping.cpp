#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> v;
    int size;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }

    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.insert(v.begin()+2,6);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}