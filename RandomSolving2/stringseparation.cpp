#include<iostream>
using namespace std;
int main()
{
  char ka[50]={"YASH_GAVALE"};
 // int max=sizeof(ka)/sizeof(char);
  
  for(int i=0;ka[i]!='\0';i++)
  {
    cout<<ka[i]<<" ";
  }
  return 0;
}