#include<iostream>
#include<string>
using namespace std;

int main()
{
    string input;;
    string output;
    getline(cin,input);
    getline(cin,output);
    string c="";
    int k=0;
    int flag=0;
    for(int i=0;input[i]!='\0';i++)
    {
        for(int j=0;output[j]!='\0';j++)
        {
            if(input[i]==output[j])
            {
              flag++;
            }
        }
        if(flag==0)
        {
            c.push_back(input[i]);
        }
        flag=0;
    }
    cout<<c;

}


// #include <iostream>
// #include <string>

// using namespace std;

// string derive_string(string A, string B) {
//     string C = "";
//     for (char c : A) {
//         if (B.find(c) == string::npos) {
//             C += c;
//         }
//     }
//     return C;
// }

// int main() {
//     string A = "tiger";
//     string B = "ti";
//     string C = derive_string(A, B);
//     cout << C << endl;  // Output: hll wrld
//     return 0;
// }
