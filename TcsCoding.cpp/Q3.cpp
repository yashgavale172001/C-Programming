// Q) Write a program that will take one string as input. The program will then remove vowels a, e, i, o, and u (in lower or upper case) from the string. If there are two or more

// vowels that occur together then the program shall ignore all of those vowels.

// Example 1

// Input: Cat

// Output: Ct

// Example 2

// Input: Compuuter

// . Output: Cmpuutr






#include<iostream>
using namespace std;
#include<string>
int main()
{
    char str1[20];
    cout<<"Enter the first string "<<endl;
    cin>>str1;
    for(int i=0;str1[i]!='\0';i++)
    {
       
        if((str1[i]!='a') && (str1[i]!='e') && (str1[i]!='i') && (str1[i]!='o') && (str1[i]!='u') && str1[i]!=str1[i+1])
        {
           cout<<str1[i];
        }
        if(str1[i]==str1[i+1])
        {
            cout<<str1[i]<<str1[i+1];
            i++;
        }
    }

}

// #include <iostream>
// #include <string>
// using namespace std;

// bool isVowel(char c) {
//     return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
//            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
// }

// string remove_vowels(string s) {
//     string result = "";
//     bool ignore_vowel = false;
//     for (char c : s) {
//         if (isVowel(c)) {
//             if (!ignore_vowel) {
//                 ignore_vowel = true;
//                 continue;
//             }
//         } else {
//             ignore_vowel = false;
//         }
//         result += c;
//     }
//     return result;
// }

// int main() {
//     string s;
//     cout << "Enter a string: ";
//     cin >> s;
//     cout << remove_vowels(s) << endl;
//     return 0;
// }




