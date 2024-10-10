#include<iostream>
using namespace std;
class a
{
    int x,b;
    public:
   /*a()
    {
         x=10;
         b=11;
    }*/
    a(int m,int n)
    {
        x=m;
        b=n;
        cout<<x<<" "<<n;
    }
};
int main()
{
    a o1(1,2);
}