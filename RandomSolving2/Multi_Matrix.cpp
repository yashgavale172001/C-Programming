// #include<iostream>
// using namespace std;
// void input(int **a,int &n)
// {
//     for(int i=0;i<n;i++)
//     {
//        for(int j=0;j<n;j++)
//        {
//            cin>>a[i][j];
//        }
//     }
// }
// void dis(int **a,int &n){

//     for(int i=0;i<n;i++){
//         for (int j = 0; j < n; j++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }
// int main()
// {
//     int n;
//     cout<<"Enter the rows and columns\n";
//     cin>>n;
//     // int b[n][n],c[n][n];
//     int *var = new int; 

//     int *arr = new int[n];
//     int **a = new int*[n];
//     for(int i=0;i<n;i++){
//         a[i]=new int[n];
//     }

//     input(a,n);
//     cout<<endl;
//     dis(a,n);
// }


// Multiplication of two  matrix

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of rows and columns\n";
    cin>>n;
    int a[n][n],b[n][n],c[n][n];
    cout<<"Matrix A"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<"Matrix B"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          cin>>b[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=0;
            for(int k=0;k<n;k++)
            {
               c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
        
    }
    cout<<"Matrix C"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<c[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
}

