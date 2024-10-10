#include <iostream>
using namespace std;
int main()
{
    struct student
    {
        int rno;
        int std;
        char name[20];

    }s[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the roll , standard , name of the student" << endl;
        cin >> s[i].rno >> s[i].std >> s[i].name;
        cout << "The data of student is " << endl;
        cout << s[i].rno << " " << s[i].std << " " << s[i].name << endl;
    }
}