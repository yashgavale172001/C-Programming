#include <iostream>
using namespace std;
int main()
{
    struct student
    {
        float m1, m2, m3, m4, m5;
        char name[20] = "test case";
        float per;
    } s[3];

    for (int i = 0; i <= 1; i++)
    {
        int l = 1;
        cout << "Name of student is" << endl;
        cin >> s[i].name;
        while (l > 0)
        {
            cout << "Enter the marks of student" << endl;
            cin >> s[i].m1 >> s[i].m2 >> s[i].m3 >> s[i].m4 >> s[i].m5;
            l--;
        }
        s[i].per = (s[i].m1 + s[i].m2 + s[i].m3 + s[i].m4 + s[i].m5 / 500) * 100;
    }

    for (int i = 0; i <= 1; i++)
    {
        if (s[i].m1 < 35 || s[i].m2 < 35 || s[i].m3 < 35 || s[i].m4 < 35 || s[i].m1 < 35)
        {
            cout << s[i].name << " is fail " << endl;
        }
        else
        {
            if (s[i].per >= 75)
            {
                cout << s[i].name << " is passed with distinction " << endl;
            }
            else
            {
                if (s[i].per >= 60 && s[i].per < 75)
                {
                    cout << s[i].name << " is passes with second class " << endl;
                }
                else
                {
                    if (s[i].per >= 35)
                    {
                        cout << s[i].name << " is passed " << endl;
                    }
                    else
                    {
                        cout << "s";
                        cout << s[i].name << " is fail" << endl;
                    }
                }
            }
        }
    }
}