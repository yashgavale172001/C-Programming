#include<iostream>
using namespace std;
int main()
{
    int n,m;
    float total=0;
    cout<<"Enter the  max number of items\n";
    cin>>n;
    struct shoping
    {
      int code;
      float rate;
      char ch;
    }item[n];
    for(int i=0;i<n;i++)
    {
      cout<<"code of product is"<<endl;
      cin>>item[n].code;
      cout<<"Enter the rate of product"<<endl;
      cin>>item[n].rate;
      cout<<"you want to buy more items? if yes then enter y/Y"<<endl;
      cin>>item[n].ch;
      total=total+item[n].rate;
      if(i==n-1)
      {
        cout<<"you have bought maximum number of items\n";
        break;
      }
      else if(item[n].ch=='y' || item[n].ch=='Y')
      {
        continue;
      }
      else{
        break;
      }
      
    }
    cout<<"your bill is "<<total<<"Rs"<<endl;
    if(total>=100 && total<500)
    {
      cout<<"you got ring in gift";
    }
    else if(total>=500 && total<1000)
    {
      cout<<"you got leather purse in gift";
    }
    else if (total>=1000)
    {
      cout<<"you got pocket calculator in gift";
    }
}