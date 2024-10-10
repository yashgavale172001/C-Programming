#include<iostream>
using namespace std;
// int main()
// { 
//     int t=7;
//     for(int i=1;i<=7;i++)
//     {
//         for(int j=1;j<=7;j++)
//         {
//             if((j==1 && i<=3) || (j==5 && i<=3))
//             {
//                 cout<<"* ";
//             }
//             if(i==4)
//             { 
//                 cout<<"*";
//             }
//             if((j==4 && t-1>=5) || (j==7 && t-1>=5))
//             {
//                 cout<<"* ";
//             }
//             if((i==7 && j<=4) || (i==7 && j==7))
//             {
//                 cout<<"* ";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// void swastika(int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {

//             if (i < row / 2)
//             {

//                 if (j < col / 2)
//                 {
//                     if (j == 0)
//                         cout << "*";

//                     else
//                         cout << " "
//                              << " ";
//                 }

//                 else if (j == col / 2)
//                     cout << " *";
//                 else
//                 {

//                     if (i == 0)
//                         cout << " *";
//                 }
//             }
//             else if (i == row / 2)
//                 cout << "* ";
//             else
//             {

//                 if (j == col / 2 || j == col - 1)
//                     cout << "* ";

//                 else if (i == row - 1)
//                 {

//                     if (j <= col / 2 || j == col - 1)
//                         cout << "* ";
//                     else
//                         cout << " "
//                              << " ";
//                 }
//                 else
//                     cout << " "
//                          << " ";
//             }
//         }
//         cout << "\n";
//     }
// }

// int main()
// {

//     int row = 7, col = 7;

//     swastika(row, col);

//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows and columns "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             if(n/2>=i)
             {
               if(j==0 && (i<n/2)  )
               {
                 cout<<"*  ";  
               }
               if((n/2)==j && (i<n/2))
               {
                  cout<<"*";
               }
               if(j>(n/2) && i==0)
               {
                cout<<"*";
               }
               if(i==(n/2))
               {
                cout<<"* ";
               }
               else{
                cout<<" ";
               }
             }
             else{
                if((n/2)==j && (i!=n-1) || j==n-1 && (i!=n-1))
                {
                    cout<<"* ";
                }
                else if((i==n-1) && (n/2>=j) || (i==n-1) && (j==n-1))
                cout<<"* ";
                else{
                    cout<<"  ";
                }
             }

        }
        cout<<endl;
    }
}





































