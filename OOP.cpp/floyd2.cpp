#include<iostream>
using namespace std;
class first
{
    public:
        void pattern1();
};
void first::pattern1()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
class second
{
    public:
        void pattern2();
};
void second::pattern2()
{
    for(int i=4;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    first f1;
    f1.pattern1();
    second f2;
    f2.pattern2();
}