// #include<iostream>
// using namespace std;
// int findunique(int arr[],int n)
// {
//     int t=0;
//     if(n==0)
//     {
//         return 0;
//     }
//     for(int i=1;i<n;i++)
//     {
//        if(arr[0]==arr[i])
//        {
//         t++;
//         break;
//        }
//     }
//     if(t==0)
//     {
//         cout<<arr[0];
//     }
//     findunique(arr+1,n-1);

// }
// int main()
// {
//     int arr[]={2,4,2,5,7,4,5};
//     findunique(arr,sizeof(arr)/sizeof(int));
// }
// we cannot find unique number in array by recursion
#include<iostream>
using namespace std;
void findunique(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int c=0,a;
        for(int t=0;t<n;t++)
        {
            a=t;
           if(arr[i]==arr[t])
           {
              c++;
           }
        }
        if(c==1)
        {
          cout<<arr[a]<<" ";
        }
    }
    
} 
int main()
{
    int arr[]={1,4,1,4,5};
    findunique(arr,sizeof(arr)/sizeof(int));
}