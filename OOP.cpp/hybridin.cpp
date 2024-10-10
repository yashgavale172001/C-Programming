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
             cout<<"Enter the roll number"<<endl;
             cin>>rno;
             cout<<"Enter the name of the student"<<endl;
             cin>>name;
          }
          void show()
          {
              cout<<"Roll number of the student is"<<endl;
              cout<<rno<<endl;
              cout<<"Name of the student is"<<endl;
              cout<<name<<endl;
          }

};
class Test:public student
{
    protected:
         float m1,m2,m3;
   public:
         void read()
         {
            student::read();
            cout<<"Enter the marks of the subject"<<endl;
            cin>>m1>>m2>>m3;
         }
         void show()
         {
            student::show();
            cout<<"Marks in 3 subjects are"<<endl;
            cout<<m1<<"\t"<<m2<<"\t"<<m3<<endl;
         }
};
class sport
{
   protected:
            float spm;
   public:
         void read()
         {
            cout<<"Enter the sports marks"<<endl;
            cin>>spm;
         }
         void show()
         {
            cout<<"sports marks are"<<endl;
            cout<<spm<<endl;
         }
};
class result:public Test,public sport
{
   private:
         float total,per;
   public:
         void read()
         {
            Test::read();
            sport::read();
            total=m1+m2+m3+spm;
            per=total/4;
         }
         void show()
         {
            Test::show();
            sport::show();
            cout<<"Total marks of the subjects are"<<endl;
            cout<<total<<endl;
            cout<<"Total percentage of the student is"<<endl;
            cout<<per<<endl;
         }
};
int main()
{
   result r;
   r.read();
   r.show();
}