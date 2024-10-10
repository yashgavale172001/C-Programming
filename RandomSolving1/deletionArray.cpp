#include<iostream>
using namespace std;
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int idxnew(int arr[],int size,int index)
{
    for(int i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
}
int main()
{
    int size=5,index=2;
    int arr[]={12,13,14,15,16};
    display(arr,size);
    idxnew(arr,size,index);
    size--;
    display(arr,size);
}