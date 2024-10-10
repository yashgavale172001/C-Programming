



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a[10];
//     cout<<"Enter the array elements"<<endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cin >> a[i];
//     }
    
//     int size=10;
//     for (int i = 0; i < size; i++)
//     {

//         //int size = sizeof(a) / sizeof(a[0]);
//         if (a[size - 1] == 0)
//         {
//             size--;
//             i--;
//         }
//         else{
//             if(a[i]==0)
//             {
//                 int temp=a[size-1];
//                 a[size-1]=a[i];
//                 a[i]=temp;
//             }
//         }
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         cout<< a[i];
//     }

// }


//or
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j=0,n;
    cin>>n;
    int a[n]={0};
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[j];
        if(a[j]!=0)
        j++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}





