#include <iostream>
using namespace std;
int main()
{
    struct node
    {
        char name[20];
        int rollno;
        float marks;
    } s[2];
    struct node * ptr = s;
    for (int i = 0; i <= 1; i++)
    {
        cin >> s[i].name >> s[i].rollno >> s[i].marks;
    }
}