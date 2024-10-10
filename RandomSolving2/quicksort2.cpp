#include<iostream>
using namespace std;
void array(int arr[],int n)
{
    for (int i=0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int partetion(int arr[],int low,int high)
{
   int pivot=arr[low];
   int i=low+1;
   int j=high;
   int temp;
   do
   {
    while(arr[i]<=pivot)
    {
       i++;
    }
    while(arr[j]>pivot)
    {
       j--;
    }
    if(i<j)
    {
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
    }
   }
   while(i<j);
   
   temp=arr[low];
   arr[low]=arr[j];
   arr[j]=temp;
   return j;
   
}
void quicksort(int arr[],int low,int high)
{
    int partetionIndex;
    if (low < high)
    {
      partetionIndex = partetion(arr, low, high);
      quicksort(arr, low,partetionIndex - 1);
      quicksort(arr, partetionIndex + 1, high);
    }
}
int main()
{
    int arr[]={2,6,9,3,5,1,4,15,12};
    int n = 9;
    array(arr,n);
    quicksort(arr,0,n-1);
    array(arr,n);
    return 0;
}