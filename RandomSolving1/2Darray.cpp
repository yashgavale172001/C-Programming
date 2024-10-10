// print roll no and marks with 2D array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,m;
//     cout<<"Enter the rows "<<endl;
//     cin>>n;
//     cout<<"Enter the columns "<<endl;
//     cin>>m;
//     int arr[n][m];
//     cout<<"**********"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"\tRollNo\tMarks\n";
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
//             cout<<"\t";
//             cout<<arr[i][j];
//             cout<<"\t";
//         }
//         cout<<endl;
//     }
// }


// transpose  of matrix

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the rows and column\n";
    cin>>n;
    int a[n][n];
    int b[n][n];
    cout<<"Enter the elements in matrix"<<endl;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
           cin>>a[i][j];
       }
    }
    cout<<"MATRIX A\n";
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
        for(int i=0;i<n;i++)
        {
           cout<<a[i][j]<<"\t";
           n--;
        }
       }
       cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
           b[i][j]=a[j][i];
       }
    }
    cout<<"Transpose of matrix A is\n";
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
           cout<<b[i][j]<<"\t";
       }
       cout<<endl;
    }


}