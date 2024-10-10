#include<iostream>
using namespace std;
class fld1
{
    public:
          void floyd1();
          
};
void fld1::floyd1()
{
    {
              for(int i=1;i<=5;i++)
              {
                  for(int j=1;j<=i;j++)
                  {
                      cout<<j<<" ";
                  }
                  cout<<endl;
              }
    }
}
class fld2
{
    public:
        void floyd2();
        
};
void fld2::floyd2()
{
    {
            for(int i=4;i>=1;i--)
            {
                for(int j=1;j<=i;j++)
                {
                    cout<<j<<" ";
                }
                cout<<endl;
            }
    }
}
int main()
{
    fld1 a1;
    a1.floyd1();
    fld2 a2;
    a2.floyd2();
}
