#include <iostream>
using namespace std;
#include <stack>
#include <string>
#include <algorithm>
int prec(char c)
{
    if (c == '^')
        return 3;
    if (c == '*' || c == '/')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}
string InfixToPrefix(string s)
{
    stack<char> sp;
    string s1;
    for (int i = 0; i<s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            s1 += s[i];
        }
        else if (s[i] == '(')
        {
            sp.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!sp.empty() && sp.top() != '(')
            {
                s1 += sp.top();
                sp.pop();
            }
            if(!sp.empty())
            sp.pop();
        }
        else
        {
            while (!sp.empty() && prec(sp.top()) > prec(s[i]))
            {
                s1 += sp.top();
                sp.pop();
            }
            sp.push(s[i]);
        }
    }
    while (!sp.empty())
    {
        s1 += sp.top();
        sp.pop();
    }
    reverse(s1.begin(),s1.end());
    return s1;
}
int main()
{
    string s = "(a-b/c)*(a/k-l)";
    // getline(cin,s);
    string s1 = s;
    cout <<"Infix String is "<< s1 << endl;
    reverse(s1.begin(), s1.end());
   // cout<<s1<<endl;
    for (int i = 0; i<s1.length(); i++)
    {
        if (s1[i] == '(')
        {
            s1[i] = ')';
        }
        else if (s1[i] == ')')
        {
            s1[i] = '(';
        }
    }
    //
    cout<<"Reverse String is "<<s1<<endl;
    cout <<"Prefix String is "<< InfixToPrefix(s1);
}