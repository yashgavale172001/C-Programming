#include<iostream>
#include<bits\stdc++.h>
using namespace std;

// swipe numbers without using third variable
// int main()
// {
//     int a=7,b=8;
//     a=a-b;
//     b=a+b;
//     a=b-a;
//     cout<<a<<" "<<b;
// }


//print fibonacci series
// int main()
// {
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     int a=1,b=1;
//     cout<<a<<" ";
//     cout<<b<<" ";
//     for(int i=3;i<=n;i++)
//     {
//         int c=a+b;
//         cout<<c<<" ";
//         a=b;
//         b=c;
//     }
// }


// factorial problem with or without recursion

//with recursion
// int factorial(int n)
// {
//     if( n==1)
//     {
//         return 1;
//     }

//     int f=n*factorial(n-1);
//     return(f);
// }
// int main()
// {
//     int n;
//     cout<<"find the factorial of"<<endl;
//     cin>>n;
//     cout<<factorial(n);
// }

//without recursion

int main()
{
    long int n;
    cin>>n;
    int fact=n;
    for(int i=1;i<n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of above number is "<<fact;
}
