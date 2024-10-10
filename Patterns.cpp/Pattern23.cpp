#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
      int space=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j++)
            {
                cout<<"*";
            }
            for(int k=space;k>=1;k--)
            {
                cout<<" ";
            }
            for(int l=i;l<=n;l++)
            {
                cout<<"*";
            }
            space+=2;
            cout<<endl;
        }
        space-=2;
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j>=1;j--)
            {
                cout<<"*";
            }
            for(int k=space;k>=1;k--)
            {
                cout<<" ";
            }
            for(int l=i;l>=1;l--)
            {
                cout<<"*";
            }
            space-=2;
            cout<<endl;
        }
        
    
}
//{ Driver Code Starts
// #include <bits/stdc++.h>

// using namespace std;

// // } Driver Code Ends
// class Solution {
//   public:
//     void printTriangle(int n) {
//         // code here
//         int space=0;
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=i;j<=n;j++)
//             {
//                 cout<<"*";
//             }
//             for(int k=space;k>=1;k--)
//             {
//                 cout<<" ";
//             }
//             for(int l=i;l<=n;l++)
//             {
//                 cout<<"*";
//             }
//             space+=2;
//             cout<<endl;
//         }
//         cout<<endl;
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=i;j>=1;j--)
//             {
//                 cout<<"*";
//             }
//             for(int k=space;k>=1;k--)
//             {
//                 cout<<" ";
//             }
//             for(int l=i;l>=1;l++)
//             {
//                 cout<<"*";
//             }
//             space-=2;
//             cout<<endl;
//         }
        
//     }
// };

// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;

//         Solution ob;
//         ob.printTriangle(n);
//     }
//     return 0;
// }
// // } Driver Code Ends