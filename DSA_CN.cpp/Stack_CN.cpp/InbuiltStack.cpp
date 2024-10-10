#include<iostream>
using namespace std;
#include<stack>
#include<string>
/*int main()
{
    string ip;
    cin>>ip;
    for(char i=0;ip[i]!='\0';i++) 
    {
        cout<<ip[i]<<" ";
    }
    for(char ch:ip)
    {
        cout<<ch<<" ";
    }
}*/
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
}