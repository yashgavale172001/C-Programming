#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(5,10);
    //vector<int> ::iterator it;

    for(vector<int> ::iterator it=v.begin(); it!=v.end();it++ )
    {
        cout<<*it<<" ";
        //cout<<it<<" ";
    }

}