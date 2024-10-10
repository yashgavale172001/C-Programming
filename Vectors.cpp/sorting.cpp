#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
   vector<int> v={10,19,13,24};
   sort(v.begin(),v.end());
   for(int i=0;i<v.size();i++)
   {
     cout<<v[i]<<" ";
   }
   for(auto i=v.begin(); i<v.end(); i++)
	{
		cout<<" "<<*i;
	}
  // auto *p=v.end();
   
}