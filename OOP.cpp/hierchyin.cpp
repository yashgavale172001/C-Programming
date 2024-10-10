#include<iostream>
#include<string.h>
using namespace std;
class person
{   protected:
        int idno;
        char name[20];
        long  mno;
    public:
        person()
        {
            cout<<"Enter the idno, name and mobile number of the student"<<endl;
            cin>>idno>>name>>mno;
        }
        person(int id,char *nm,long mno)
        {
            idno=id;
            strcpy(name,nm);
            mno=mno;
        }
        void show()
        {
            cout<<idno<<"\t"<<name<<"\t"<<mno<<endl;
        }

};
class student:public person
{
    private:
        float m1,m2,total,per;
    public:
        student():person()
        {
            cout<<"Enter the marks of two subjects"<<endl;
            cin>>m1>>m2;
            total=m1+m2;
            per=total/2;
        }
        student(float t1,float t2,int id,char *nm,long mn):person(id,nm,mn)
        {
            m1=t1;
            m2=t2;
            total=m1+m2;
            per=total/2;
        }
        void show()
        {
            person::show();
            cout<<m1<<"\t"<<m2<<"\t"<<total<<"\t"<<per<<endl;
        }
        ~student(){}
};
class employee:public person
{
    private:
            long slr;
            char desg[20];
    public:
        employee():person()
        {
            cout<<"Enter the salary and designation"<<endl;
            cin>>slr>>desg;
        }
        employee(char *de,long slr,int id,char *nm,long mno):person(id,nm,mno)
        {
            strcpy(desg,de);
            slr=slr;
        }
        void show()
        {
            person::show();
            cout<<desg<<"\t"<<slr<<endl;
        }
        ~employee(){}
};
int main()
{
    student s1;
    s1.show();
    student s2(78,47,200,"sunny",27625373);
    s2.show();
    employee e1;
    e1.show();
    employee e2("Manager",90000,200,"Rahul",354684785);
    e2.show();
}