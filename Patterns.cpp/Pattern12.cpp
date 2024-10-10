// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

// #include<bits\stdc++.h>
// using namespace std;
// int main()
// {
//     int sp=0;
//     for(int i=0;i<5;i++)
//     {
//         for(int j=1;j<=(5-i);j++)
//         {
//             cout<<"*";
//         }
//         //space 
//         for(int k=0;k<sp;k++)
//         {
//             cout<<" ";
//         }
//         sp=sp+2;
//         for(int j=1;j<=(5-i);j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     int sp2=8;
//     for(int i=0;i<5;i++)
//     {
//         for(int j=1;j<=i+1;j++)
//         {
//             cout<<"*";
//         }
//         //space 
//         for(int k=0;k<sp2;k++)
//         {
//             cout<<" ";
//         }
//         sp2=sp2-2;
//         for(int j=1;j<=i+1;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// **********
// ****  ****
// ***    ***
// **      **
// *        *       
// **      **
// ***    ***
// ****  ****
// **********

#include<bits\stdc++.h>
using namespace std;
int main()
{
    int sp=0;
    for(int i=0;i<5;i++)
    {
        for(int j=1;j<=(5-i);j++)
        {
            cout<<"*";
        }
        //space 
        for(int k=0;k<sp;k++)
        {
            cout<<" ";
        }
        sp=sp+2;
        for(int j=1;j<=(5-i);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    int sp2=6;
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            cout<<"*";
        }
        //space 
        for(int k=0;k<sp2;k++)
        {
            cout<<" ";
        }
        sp2=sp2-2;
        for(int j=1;j<=i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}