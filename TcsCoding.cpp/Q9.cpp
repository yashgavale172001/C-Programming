// convert the number into binary

#include <bits/stdc++.h>
//#include<string>
using namespace std;
int main()
{
    // string s="yash";
    // string s1="gavale";
    // string s3="";
    // s3+=('a'+2);
    // cout<<s3;
    // cout<<'w'-'v';

    // bit toggle

    int n;
    cout << "Enter the number"<<endl;
    cin >> n;
    string s = "";
    while (n > 0)
    {
        if (n > 1)
        {

            int t = n % 2;
            s = s + to_string(t);
            n = n / 2;
        }
        else{
            s=s+to_string(1);
            n=n/2;
        }
    }
    reverse(s.begin(), s.end()); 
    //strrev(s); this is for char array
    cout<<s;

}