#include<iostream>
using namespace std;
void rotate(int *arr,int size,int n)
{
    int arr2[n];
    int a=n;
    int d=size-n;
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr[i];
    }
    for(int j=0;j<size-n;j++)
    {
        arr[j]=arr[a++];
    }
    for(int k=0;k<n;k++)
    {
        arr[d++]=arr2[k];
    }
}
int main()
{
    int arr[]={1,4,2,6,4,8};
    int n;
    cout<<"Enter the number from array to be rotated "<<endl;
    cin>>n;
    rotate(arr,sizeof(arr)/sizeof(int),n);
    for(int i=0;i<6;i++)
    {
       cout<<arr[i]<<" ";
    }
}