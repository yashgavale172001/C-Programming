#include<iostream>
#include<string.h>
using namespace std;
class Sample
{
    private:
         char s1[20],s2[20];
    public:
    void read()
    {
        cout<<"Enter the first string"<<endl;
        gets(s1);
        cout<<"Enter the second string"<<endl;
        gets(s2);
    }
    void show()
    {
        cout<<"First string is "<<s1<<endl;
        cout<<"Second string is "<<s2<<endl;
    }
    void operator +(Sample x)
    {
        // Sample add;
        strcat(s1,x.s1);
        // strcpy(add.s1,s1);
        strcat(s2,x.s2);
        // strcpy(add.s2,s2);
        // return(add);
        
    }
};
int main()
{
    Sample x1,y1,sum;
    x1.read();
    y1.read();
    x1.show();
    y1.show();
    cout<<"Addind object x1 and x2"<<endl;
//    sum= x1+y1; //x1.(y1);
    x1+y1;
    // sum.show();
    x1.show();
}