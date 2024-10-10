#include<iostream>
using namespace std;
void input(int x,int arr[])
{
   for(int i=0;i<x;i++)
   {
       cin>>arr[i];
   }
}
void display(int x,int arr[])
{
   for(int i=0;i<x;i++)
   {
     cout<<arr[i]<<" ";
   }
}
void sorting(int x,int arr[])
{
   for(int i=0;i<x-1;i++)
   {
      for(int j=i+1;j<x;j++)
      {
         if(arr[i]>arr[j])
         {
            int temp=arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   input(n,arr);
   sorting(n,arr);
   display(n,arr);
}