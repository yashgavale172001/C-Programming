#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    protected:
             int rno;
             string name;
    public:
           void input()
           {
               cout<<"Enter the roll of the student"<<endl;
               cin>>rno;
               cout<<"Enter the name of the student"<<endl;
               //gets(name);
               cin.ignore();
               getline(cin,name);
           }
           void show()
           {
               cout<<"rno :\t"<<rno<<"\tname :"<<name<<endl;
           }

};
class Test:public Student
{
    protected:
            int m1,m2,m3,m4,m5;
    public:
            void input()
            {
                Student::input();
                cout<<"Enter the marks of 5 subjects"<<endl;
                cin>>m1>>m2>>m3>>m4>>m5;
            }
            void show()
            {
                Student::show();
                cout<<"Marks of the subjects are"<<endl;
                cout<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<m4<<"\t"<<m5<<endl;
            }
};
class result:public Test
{
    protected:
            float total,per;
    public:
            void input()
            {
                Test::input();
                total=m1+m2+m3+m4+m5;
                per=total/5;
            }
            void show()
            {
                Test::show();
                cout<<"Total marks are "<<total<<endl;
                cout<<"percentange of student "<<per;
            }
};
int main()
{
    result r;
    r.input();
    r.show();
}
