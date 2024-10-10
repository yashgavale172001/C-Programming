 #include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
  
    cout<<" Last element of an vector is "<<v.back()-1;
    cout<<" Last element of an vector is "<<v.back();
}

/*
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<int> myvector;

  myvector.push_back(10);

  while (myvector.back() != 0)
  {
    myvector.push_back ( myvector.back() -1 );
    cout<<" updated "<<myvector.back();
  }
  cout<<myvector.back();
  cout << "myvector contains:";
  for (unsigned i=0; i<myvector.size() ; i++)
    cout << ' ' << myvector[i];
  cout << '\n';

  return 0;
}*/