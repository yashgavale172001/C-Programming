#include<iostream>
using namespace std;
int main()
{
    string s;
    char ch;
    int c=0;
    // cin>>s>>ch;
    cout<<"enter the number : ";
    cin>>s;
    cout<<"which number you wanna find a frequency : ";
    cin>>ch;

    //for(int i=0;s[i]!='\0';i++)
    for(const char &n:s)
    {
        if(n==ch)
        c++;

    }
    cout<<c;
    return 0;

}