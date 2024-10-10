#include<iostream>
using namespace std;
class str3;
class str1
{
    friend class str3;
    public:
    int len1=0;
    char a[10];
    public:
    str1()
    {
        cout<<"Enter the first String"<<endl;
        cin.getline(a,10);
    }
    void show()
    {
        cout<<"String is "<<a;
    }
    void len(char a[])
    {
        for(int i=0;a[i]!='\0';i++)
        {
            len1++;
        }
    }
};
class str2
{
    friend class str3;
    public:
    char b[10];
    int len2=0;
    public:
    str2()
    {
        cout<<"Enter the second String "<<endl;
        cin.getline(b,10);
    }
    void show()
    {
        cout<<"String is ";
        cout<<b;
    }
    void len(char b[])
    {
        for(int i=0;b[i]!='\0';i++)
        {
            len2++;
        }
    }
    friend void concate(str1,str2);
};
class str3
{
   public:
   void concate(str1 s1,str2 s2)
   {
      int n=0;
      for(int i=s1.len1;i<=s1.len1+s2.len2;i++)
      {
        s1.a[s1.len1]=s2.b[n];
        n++;
      }
      cout<<"After concatnation the string is "<<s1.a;
   }


};
int main()
{
    str1 t1;
    t1.len(t1.a);
    str2 t2;
    t2.len(t2.b); 
    str3 t3;
    t3.concate(t1,t2);
}