#include<iostream>
using namespace std;
void selectionsort(int arr[],int size)
{
    int i,j,min;
    for(int i=0;i<size-1;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }

        }
        if(min!=i)
            {
                int temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
            }
    }
}
int main()
{
    int arr[]={4,2,7,3,9};
    int n=sizeof(arr)/sizeof(int);
    selectionsort(arr,n);
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }

}