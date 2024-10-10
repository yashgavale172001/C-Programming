#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    ofstream out;
    out.open("newfile.txt",ios::app);
    out<<"my name is yash gavale"<<endl;
    out<<"my name is yash gavale"<<endl;
    cout<<"written successfully"<<endl;
    out.close();
}