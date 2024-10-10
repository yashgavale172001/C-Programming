#include<iostream>
using namespace std;
int main()
{
    int a=10,b=5;
    int c=a & b;
    cout<<c;
}

// 10          5
// 1 0 1 0    0 1 0 1

// 1 0 1 0
// 0 1 0 1
//--------
// 0 0 0 0
// this binary is converted into decimal(0) and prints the output as 0