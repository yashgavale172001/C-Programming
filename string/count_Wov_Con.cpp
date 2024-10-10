#include<iostream>
using namespace std;
int main()
{
    string s;
    int w=0,c=0,sp=0,num=0;
    cout<<"Enter the string\n";
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122)
        {
           if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E'|| s[i]=='O' || s[i]=='U' )
           {
              w++;
           }
           else
           {
               c++;
           }
        } 
        else
        {
            if(s[i]<=57 && s[i]>=48)
            {
                num++;
            }
            else{
                sp++;
            }
        }
    }
    cout<<"wovels "<<w<<endl;
    cout<<"consonent "<<c<<endl;
    cout<<"special character "<<sp<<endl;
    cout<<"numbers "<<num<<endl;
}