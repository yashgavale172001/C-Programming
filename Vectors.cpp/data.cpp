#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<int> myvector (5);

  int* p = myvector.data();

  *p = 10;
  ++p;
  *p = 20;
  p[2] = 100;

  cout << "myvector contains:";
  for (unsigned i=0; i<myvector.size(); ++i)
    cout << ' ' << myvector[i];
  cout << '\n';

  /*for(vector<int> ::iterator it=myvector.begin();it!=myvector.end();it++)
  {
    cout<<myvector[*it]<<endl;
  }*/ 
  // wrong output because iterator itself is pointer and vector is continuos memory loctaion
  //when we do it++ then reference in iterator will increase not vectors memory thats why wrong output

  return 0;
}