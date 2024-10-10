#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[50], s2[50];

    cout << "Enter string s1: ";
    gets(s1);

    cout << "Enter string s2: ";
    gets(s2);

    strcat(s1, s2); 

    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2;

    return 0;
}