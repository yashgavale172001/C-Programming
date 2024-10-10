#include<iostream>
using namespace std;
class student
{
   protected:
            int rno;
            char name[20];
    public:
            void read()
            {
                cout<<"Enter the roll nuumber"<<endl;
                cin>>rno;
                cout<<"Enter the name of the student"<<endl;
                cin>>name;
            }
            void show()
            {
                cout<<"Rno is "<<rno<<endl;
                cout<<"name is "<<name<<endl;
            }
};
class Test
{
    protected:
              float m1,m2;
    public:
            void input()
            {
                cout<<"Enter the marks of two subjects "<<endl;
                cin>>m1>>m2;
            }
            void output()
            {
                cout<<"Marks in two subjects are"<<endl;
                cout<<m1<<" "<<m2<<endl;
            }
};
class result:public student,public Test
{
   private:
          float total,per;
    public:
          void read()
          {
              student::read();
              Test::input();
              total=m1+m2;
              per=total/2;
          }
          void show()
          {
              student::show();
              Test::output();
              cout<<"Totak marks "<<total<<endl;
              cout<<"percentage "<<per<<endl;
          }
};
int main()
{
    result r1;
    r1.read();
    r1.show();
}