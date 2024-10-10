#include<iostream>
using namespace std;
// int main()
// {
//     int num,m;
//     cout<<"Prime number upto"<<endl;
//     cin>>num;
//     for(int i=1;i<=num;i++)
//     {
//         m=0;
//         for(int j=1;j<=i;j++)
//         {
//             if(i%j==0)
//             {
//                 m++;
//             }
//             if(m>2)
//             {
//                 break;
//             }
//         }
//         if(m==2)
//         {
//             cout<<i<<"\t";
//         }
    

//     }
// }
int check(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans+(arr[i]);
    }
    return ans;
}
int main()
{
    int arr[]={2,5,1,4,8};
    //cout<<sizeof(arr)/sizeof(arr[0]);
    cout<<check(arr,sizeof(arr)/sizeof(arr[0]));
}