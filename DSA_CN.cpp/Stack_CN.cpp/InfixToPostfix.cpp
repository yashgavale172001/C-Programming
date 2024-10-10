#include <iostream>
using namespace std;
#include <stack>
#include <string>

int precedance(char ch)
{

    if (ch == '^')
        return 3;
    if (ch == '*' || ch == '/')
        return 2;
    if (ch == '+' || ch == '-')
        return 1;
    else
    {
        return 0;
    }
}
string InfixToPostfix(string s)
{
    stack<char> sp;
    string s1;
    for (int i = 0; i < s.length(); i++)
    {
         if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') )
        {
            s1 = s1 + s[i];
        }
        // if (!isOperator(s[i]))
        // {
        //     s1 = s1 + s[i];
        // }
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
            if (!sp.empty())
                sp.pop();
        }
        else
        {
            while (!sp.empty() && precedance(s[i]) < precedance(sp.top()))
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
    return s1;
}
int main()
{
    // string s;
    // getline(cin, s);
    cout << InfixToPostfix("(a-b/c)*(a/k-l)");
}

// #include<iostream>
// using namespace std;
// #include<stack>
// #include<string.h>
// int isOperator(char ch)
// {
//   if(ch=='+' || ch=='-' || ch=='*' || ch=='/' )
//   {
//     return 1;
//   }
//   return 0;
// }
// int prec(char ch)
// {
//     if(ch=='*' || ch=='/' )
//     return 3;
//     if(ch=='+' || ch=='-' )
//     return 2;
//     else
//     return 0;
// }
// char *InfixToPostfix(char *infix,int size)
// {
//     //int size=strlen(infix);
//     char *postfix=new char[size];
//     stack <char> sp;
//     int j=0,i=0;
//     while(infix[i]!='\0')
//     {
//         if(!isOperator(infix[i]))
//         {
//             postfix[j++]=infix[i++];
//         }
//         else{
//             if(prec(infix[i])>prec(sp.top()))
//             {
//                 sp.push(infix[i]);
//                 i++;
//             }
//             else{
//                 postfix[j++]=sp.top();
//                 sp.pop();

//             }
//         }
//         // cout<<"1";
//     }
//     while(!sp.empty())
//     {
//         postfix[j++]=sp.top();
//         sp.pop();
//         // cout<<"1";
//     }
//     postfix[j]='\0';
//     return postfix;
// }
// int main()
// {
//     char  infix[] = "x-y/z-k*d";
//     int size=strlen(infix);
//     cout<<InfixToPostfix(infix,size);
// }
