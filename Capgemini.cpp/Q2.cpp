#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],k=0;
    int arr1[]={};
    int arr2[]={};
   // int arr3[]={0};
    int s=sizeof(arr1)/sizeof(int);
    cout<<s<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        //arr3[i]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int count=0;
        int m=arr[i];
       for(int k=0;k<n;k++)
       {
          if(arr[i]!=-1)
          {
            if(m==arr[k])
            {
                 count++;
                 arr[i]=-1;
          cout<<" a "<<count<<" b "<<m<<endl;
            }
          }
          if(k==n-1)
          {
            arr1[k]=count;
            arr2[k++]=m;
          }
       }
       
    }
    int s1=sizeof(arr1)/sizeof(int);
    cout<<s1;
    for(int i=0;i<sizeof(arr1);i++)
    {
        cout<<arr1[i]<<" occures "<<arr2[i]<<" Times in an Array "<<endl;
    }


}