#include<iostream>
using namespace std;
class TestB;
class TestA
{
    friend class TestB;
    int x[5];
    public:
        void read()
        {
            cout<<"Enter the array"<<endl;
            for(int i=0;i<=4;i++)
            {
                cin>>x[i];
            }
        }
        void show()
        {
            cout<<"Array is "<<endl;
            for(int i=0;i<=4;i++)
            {
                cout<<x[i]<<" ";
            }
        }
        friend void mix(TestA,TestB);
};
class TestB
{
    int y[5];
    public:
        void read()
        {
            cout<<"Enter the array"<<endl;
            for(int i=0;i<=4;i++)
            {
                cin>>y[i];
            }
        }
        void show()
        {
            cout<<"Array is"<<endl;
            for(int i=0;i<=4;i++)
            {
                cout<<y[i]<<" ";
            }
        }
        friend void mix(TestA,TestB);
};
void mix(TestA a,TestB b)
{
    int z[10];
    int j=0;
    for(int i=0;i<=9;i++)
    {
        z[i]=a.x[j];
        i++;
        z[i]=b.y[j];
        j++;
    }
    cout<<"After merging array"<<endl;
    for(int i=0;i<=9;i++)
    {
      cout<<z[i]<<" ";
    }
};
int main()
{
    TestA t1;
    TestB t2;
    t1.read();
    t1.show();
    t2.read();
    t2.show();
    mix(t1,t2);
}