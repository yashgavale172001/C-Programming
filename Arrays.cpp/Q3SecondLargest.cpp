#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,5,7,8,1};    
    int size=sizeof(arr)/sizeof(int);
    cout<<"Size of array is "<<size<<endl;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Second largest element in an array is "<<arr[size-2];
}