#include<iostream>
using namespace std;
int main()
{
    struct node
    {
        int rno;
        char name[15];
        int age;
    };
    for(int i=0;i<=3;i++)
    {
        struct node s[3];
        cout<<"Enter the roll number, name, age of the student "<<endl;
        cin>>s[i].rno>>s[i].name>>s[i].age;
        cout<<"studrnt details are\n";
        cout<<s[i].rno<<" "<<s[i].name<<" "<<s[i].age<<endl;
    }
}