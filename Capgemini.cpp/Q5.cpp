//NOTSoLVE
#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    // khande logic
    // int arr2[101];
    // int arrf[101];
    //     for(int i=0;i<101;i++){
    //   arr2[i]=0;
    // }
    // int k=0; 
    // for(int i=0;i<size;i++)
    //  {
    //   if(arr2[arr1[i]]==0)
     //    {
    //     arrf[k]=arr1[i];
    //     arr2[arr1[i]]=1;
    //     k++;
    //   }

    //}
    // for(int i=0;i<101;i++){
    //     cout<<arrf[i]<<endl;
    // }
    int arr[]={3,1,1,2};
    int arr1[]={4,4,5,8,5};
    int size1=sizeof(arr)/sizeof(int);
    int size=sizeof(arr1)/sizeof(int);
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
           if(arr1[i]==arr1[j])
           {
             for(int l=j;l<size;l++)
             {
                arr1[l]=arr1[l+1];
             }
             size--;
             j--;
           }
        }
    }
    for(int i=0;i<size1;i++)
    {
        for(int j=i+1;j<size1;j++)
        {
           if(arr[i]==arr[j])
           {
             for(int l=j;l<size1;l++)
             {
                arr[l]=arr[l+1];
             }
             size1--;
             j--;
           }
        }
    }
    sort(arr,arr+size1);
    sort(arr1,arr1+size);
     int arr3[size+size1];
     for(int i=0;i<size+size1;i++)
     {
        if(i<size1)
        {arr3[i]=arr[i];}
        else{
        arr3[i]=arr1[i];

        }
     }
    for(int i=0;i<size1+size;i++)
    {
        cout<<arr3[i]<<" ";
    }
}