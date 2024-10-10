#include<iostream>
using namespace std;
class Sample
{
    private:
         int a,b=0;
    public:
        void read()
        {
            cin>>a;
        }
        void show()
        {
            cout<<"value of a "<<a<<endl;
            // cout<<"Second number "<<b<<endl;
            cout<<"Value of b "<<b<<endl;
        }
        void operator ++()
        {
            b=++a;
        }
        void operator ++(int)
        {
            b=a++;
            // cout<<a;
        }
};
int main()
{
   Sample s1;
   s1.read();
   s1.show();
   cout<<"Preincrement uniry operations"<<endl;
   ++s1;
   s1.show();
   cout<<"Postincrement uniry operator"<<endl;
   s1++;
   s1.show();
}