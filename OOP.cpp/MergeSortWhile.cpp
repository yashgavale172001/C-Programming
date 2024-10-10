#include<iostream>
using namespace std;
void merge_array(int arr1[],int arr2[],int size1,int size2,int arr[],int size)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<size1 && j<size2)
    {
        if(arr1[i]<arr2[j])
        {
            arr[k++]=arr1[i++];
        }
        else
        {
            arr[k++]=arr2[j++];
        }
    }
    while(i<size1)
    {
        arr[k++]=arr1[i++];
    }
    while (j<size)
    {
        arr[k++]=arr2[j++];
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    

}
void mergesort(int arr[],int size)
{
    if(size==1)
    {
        return;
    }
    int size1=size/2;
    int size2=size-size/2;
    int arr1[size1];
    int arr2[size2];
    for(int i=0;i<size1;i++)
    {
        arr1[i]=arr[i];
    }
    int k=0;
    for(int j=size1;j<size;j++)
    {
        arr2[k++]=arr[j];
    }
    mergesort(arr1,size1);
    mergesort(arr2,size2);
    merge_array(arr1,arr2,size1,size2,arr,size);
}
int main()
{
    static int arr[]={1,5,2,8,3,23,87};
    int size=sizeof(arr)/sizeof(int);
    mergesort(arr,size);
}