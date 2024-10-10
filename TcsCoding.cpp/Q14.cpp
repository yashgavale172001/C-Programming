// //largest word in the sentence
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s,s1="",s2="";
//     getline(cin,s);
//     int st=0,temp=0;
//     for(int i=0;s[i]!='\0';i++)
//     {
//         if(s[i]==' ')
//         {
           
//            if(st>=temp  )
//            {
//              temp=st;
//              s2.assign(s1);
//            }
//            st=0;
//            s1="";
//            i++;
//         }
//         if(s[i+1]=='\0')
//         {
//            st++;
//            if(st>=temp )
//            {
//              temp=st;
//              s1.push_back(s[i]);
//              s2.assign(s1);
//              break;
//            }
//         }
//         s1.push_back(s[i]);
//         st++;
        
//     }
//     cout<<"word "<<s2<<" whose length is "<<temp;
// }
// //str_inp1.compare(str_inp0) == 0

#include<bits\stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   istringstream ss(s);
   int m=0;
   string s1;
   while(ss)
   {
    string w;
    ss>>w;
    if(m<=w.length())
    {
      s1=w;
      m=w.length();
    }

   }
   cout<<" in string, "<<s1<<" is the biggest word whose length is "<<m;
}

//if you want to find maximum from two numbers then use max(a,b);

