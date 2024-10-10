#include<iostream>
using namespace std;
void show(char *name,int age,int rollno)
{
   cout<<name<<" "<<age<<" "<<rollno;
}
int main()
{
    struct student
    {
        char name[20];
        int age;
        int rollno;
    }s1={"yash",20,16};
    cout<<"the details of student are \n";
    show(s1.name ,s1.age,s1.rollno);
}
