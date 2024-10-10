// #include <iostream>
// using namespace std;
// int main()
// {
//    int v = 1 ;
//    for (int i = 0; i <= 3; i++)
//    {
//       if (i % 2 == 0)
//       {

//          for (int j = 0; j <= 4; j++)
//          {
//            cout<<v++<<" ";
//          }
//          v+=5;
//       }
//       else{
//          for(int j=0;j<=4;j++)
//          {
//          cout<<"*"<<" ";

//          }
//       }
//       cout<<endl;
//    }
// }
#include<iostream>
using namespace std;
int main()
{
   int v=1;
   for(int i=0;i<=3;i++)
   {
      for(int j=0;j<=4;j++)
      {
         if(i%2==0)
         {
            cout<<v++<<" ";
         }
         else{
            cout<<"*"<<" ";
         }
      }
      if(i%2==0)
      {
         v+=5;
      }
      cout<<endl;
   }
}
