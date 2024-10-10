/* 19.Write a C program to check whether given strings are 
Anagram strings or not.
Eg:
Input String1: abccd
Input String2: cbcda
Output String: Strings are anagram */



// #include<iostream>
// #include<string.h>
// using namespace std; 
// int main()
// {
//     char s[10];
//     gets(s);
//     char s2[10];
//     gets(s2);
//     int num=0;
//     int num2=strlen(s2);
//     int num3=strlen(s);
//     if(num2==num3)
//     {
//         for(int i=0;s[i]!='\0';i++)
//         {
//             for(int j=0;s2[j]!='\0';j++)
//             {
//                 if(s[i]==s2[j])
//                 {
//                      num++;
//                     break;
//                 }
        
//             }
//         }
//     }
//     if(num==num2)
//     {
//         cout<<"string is anagram"<<endl;
//     }
//     else{
//         cout<<"string is not anagram ";
//     }
// }