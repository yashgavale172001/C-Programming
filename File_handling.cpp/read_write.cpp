#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    string str;
    //ofstream out("newfile.txt");
   // out<<"my name is yash gavale";
   // out.close();
    ifstream in("newfile.txt");
    while(getline(in,str))
    {
        cout<<str<<endl;
    }
    in.close();
}