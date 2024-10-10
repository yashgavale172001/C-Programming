#include<iostream>
using namespace std;
class Sample
{
    private:
        int num1,num2;
    public:
         void read()
         {
             cin>>num1;
             cin>>num2;
         }
         void show()
         {
             cout<<"First number is "<<num1<<endl;
             cout<<"Second number is "<<num2<<endl;
         }
         void operator +(Sample x)
         {
            num1+=x.num1;
            num2+=x.num2;
         }
};
int main()
{
    Sample s1,s2;
    s1.read();
    s2.read();
    s1.show();
    s2.show();
    cout<<"After addition of object s1 and s2"<<endl;
    s1+s2;
    s1.show();
}