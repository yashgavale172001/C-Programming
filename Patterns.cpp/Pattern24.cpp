// *********
// **** ****
// ***   ***
// **     **
// *       *
// **     **
// ***   ***
// **** ****
// *********
#include<bits\stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<10;i++)
    {
       cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=4;i++)
    {
        for(int j=4;j>=i;j--)
        {
            cout<<"*";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<" ";
        }
        for(int l=4;l>=i;l--)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    for(int i=1;i<=3;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<=(2*4)-(2*i)-1;k++) 
        {
            cout<<" ";
        }
        for(int l=0;l<=i;l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<10;i++)
    {
       cout<<"*";
    }
    cout<<endl;
}






































// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, j, k, r;
//     cout << "Enter no. of rows: ";
//     cin >> r;
//     for (i = 1; i <= r; i++)
//     {
//         for (j = 1; j <= r - i; j++)
//             cout << "*";
//         for (k = 1; k <= 2 * i - 1; k++)
//         {
//             if (k == 1 || k == 2 * i - 1)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         for (j = 1; j <= r - i; j++)
//             cout << "*";
//         cout << "\n";
//     }
//     for(int i=1;i<=r-1;i++)
//     {
//         for(int j=i;j>=0;j--)
//         {
//             cout<<"*";
//         }
//         for(int k=1;k<=(2*(r-2))-(2*i)-1;k++)
//         {
//             if(k==r-1)
//             cout<<"*";
//             else{
//                cout<<" ";
//             }
//         }
//          for(int l=i;l>=0;l--)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }